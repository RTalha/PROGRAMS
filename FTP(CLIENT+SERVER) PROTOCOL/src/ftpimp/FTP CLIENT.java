package ftpimp;

import java.net.*;

import javax.swing.JOptionPane;

import java.io.*;



class FTPClient
{
    public static void main(String args[]) throws Exception
    {
        Socket soc=new Socket("localhost",5217);
        transferfileClient t=new transferfileClient(soc);
        t.displayMenu();
        
    }
}
class transferfileClient
{
    Socket ClientSoc;

    DataInputStream cin;
    DataOutputStream cout;
    BufferedReader br;
    transferfileClient(Socket soc)
    {
        try
        {
            ClientSoc=soc;
            cin=new DataInputStream(ClientSoc.getInputStream());
            cout=new DataOutputStream(ClientSoc.getOutputStream());
            br=new BufferedReader(new InputStreamReader(System.in));
        }
        catch(Exception ex)
        {
        }        
    }
    void SendFile() throws Exception
    {        
        
        String filename;
        System.out.print("Enter File Name :");
        filename=br.readLine();
            
        File f=new File(filename);
        if(!f.exists())
        {
            System.out.println("File not Exists...");
            cout.writeUTF("File not found");
            return;
        }
        cout.writeBytes(filename);
        
       /* String msgFromServer=cin.readUTF();
        if(msgFromServer.compareTo("File Already Exists")==0)
        {
            String Option;
            System.out.println("File Already Exists. Want to OverWrite (Y/N) ?");
            Option=br.readLine();            
            if(Option=="Y")    
            {
                cout.writeUTF("Y");
            }
            else
            {
                cout.writeUTF("N");
                return;
            }
        }
        */
        
        System.out.println("Sencing File ...");
        FileInputStream fin=new FileInputStream(f);
        int ch;
        do
        {
            ch=fin.read();
            cout.writeUTF(String.valueOf(ch));
        }
        while(ch!=-1);
        fin.close();
        System.out.println(cin.readUTF());
        
    }
    
    void ReceiveFile() throws Exception
    {
        String fileName;
        System.out.print("Enter File Name :");
        fileName=br.readLine();
        cout.writeUTF(fileName);
        String msgFromServer=cin.readUTF();
        
        if(msgFromServer.compareTo("File Not Found")==0)
        {
            System.out.println("File not found on Server ...");
            return;
        }
        else if(msgFromServer.compareTo("READY")==0)
        {
            System.out.println("Receiving File ...");
            File f=new File(fileName);
            if(f.exists())
            {
                String Option;
                System.out.println("File Already Exists. Want to OverWrite (Y/N) ?");
                ReceiveFile();               
            }
            FileOutputStream fout=new FileOutputStream(f);
            int ch;
            String temp;
            do
            {
                temp=cin.readUTF();
                ch=Integer.parseInt(temp);
                if(ch!=-1)
                {
                    fout.write(ch);                    
                }
            }while(ch!=-1);
            fout.close();
            System.out.println(cin.readUTF());
                
        }
        
        
        
    }

    public void displayMenu() throws Exception
    {
        while(true)
        {    
            System.out.println("[ MENU ]");
            System.out.println("1. Send File");
            System.out.println("2. Receive File");
            System.out.println("3. Exit");
            System.out.print("\nEnter Choice :");
            int choice;
            choice=Integer.parseInt(br.readLine());
            if(choice==1)
            {
                cout.writeUTF("SEND");
                System.out.print("send file");
                SendFile();
            }
            else if(choice==2)
            {
                
            	cout.writeUTF("GET");
                ReceiveFile();
            }
            else
            {
                cout.writeUTF("DISCONNECT");
                System.exit(1);
            }
        }
    }
}
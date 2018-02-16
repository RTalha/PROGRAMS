package ftp1imp;


import java.net.*;

import javax.swing.JOptionPane;

import java.io.*;


public class FTPServer
{
    public static void main(String args[]) throws Exception
    {
        @SuppressWarnings("resource")
		ServerSocket soc=new ServerSocket(5217);
        System.out.println("FTP Server Started on Port Number 5217");
        
      
        
        while(true)
        {
            System.out.println("Waiting for Connection ...");
            @SuppressWarnings("unused")
            transferfile t=new transferfile(soc.accept());
            new Thread(t).start();
            
        }
    }
}

class transferfile implements Runnable
{
    Socket ClientSoc;

    DataInputStream cin;
    DataOutputStream cout;
    
    transferfile(Socket soc)
    {
        try
        {
            ClientSoc=soc;                        
            cin=new DataInputStream(ClientSoc.getInputStream());
            cout=new DataOutputStream(ClientSoc.getOutputStream());
            System.out.println("FTP Client Connected ...");
           
            
        }
        catch(Exception ex)
        {
        }   
        
    }
    void SendFile() throws Exception
    {        
    	
        String filename=cin.readUTF();
        File f=new File(filename);
        if(!f.exists())
        {
            cout.writeUTF("File Not Found");
            return;
        }
        else
        {
            cout.writeUTF("READY");
            FileInputStream fin=new FileInputStream(f);
            int ch;
            do
            {
                ch=fin.read();
                cout.writeUTF(String.valueOf(ch));
            }
            while(ch!=-1);    
            fin.close();    
            cout.writeUTF("File Receive Successfully");                            
        }
        System.out.println( "File sent  :"+filename);
    }
    
    void ReceiveFile() throws Exception
    {
    	  
        
    	
    	    
        String filename=cin.readUTF();
        if(filename.compareTo("File not found")==0)
        {
            return;
        }
        File f=new File(filename);
        String option;
        
        if(f.exists())
        {
            cout.writeUTF("File Already Exists");
            option=cin.readUTF();
        }
        
            
            if(true)
            {
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
                cout.writeUTF("File Send Successfully");
            }
            System.out.println( "File recieved  :"+filename);
      
    }


    public void run()
    {
        while(true)
        {
            try
            {
            System.out.println("Waiting for Command ...");
            String Command=cin.readUTF();
            if(Command.compareTo("GET")==0)
            {
                System.out.println("\tGET Command Received ...");
                SendFile();
                continue;
            }
            else if(Command.compareTo("SEND")==0)
            {
                System.out.println("\tSEND Command Receiced ...");      
                ReceiveFile();   
                continue;
            }
            else if(Command.compareTo("DISCONNECT")==0)
            {
                System.out.println("\tDisconnect Command Received ...");
                //System.exit(1);
                break;
            }
            
            else
            {
            	 System.out.println("error");	
            }
           }
            catch(Exception ex)
            {
            }
        }
    }
}
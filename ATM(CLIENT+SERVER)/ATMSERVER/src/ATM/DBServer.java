package ATM;

import java.net.*;

import javax.swing.JOptionPane;

import java.io.*;
public class DBServer {
	

    public static void main(String args[]) throws Exception
    {
        @SuppressWarnings("resource")
		ServerSocket soc=new ServerSocket(5217);
        System.out.println("ATM Server Started on Port Number 5217");
       
      
        
        while(true)
        {
            @SuppressWarnings("unused")
            DATA t=new DATA(soc.accept());
            
        }
    }
}
class DATA
{
	 Connector conectr=new Connector();
		
	
	private static String Id;
	Socket ClientSoc;

    DataInputStream cin;
    DataOutputStream cout;
	public DATA(Socket soc)
    {
        try
        {
        	conectr.connect();
            ClientSoc=soc;                        
            cin=new DataInputStream(ClientSoc.getInputStream());
            cout=new DataOutputStream(ClientSoc.getOutputStream());
            System.out.println(" Client Connected ...");
            
            run();
            
            
        }
        catch(Exception ex)
        {
        }        
    }
	public void run()
    {
        
            try
            {
            System.out.println("Waiting for Command ...");
            String Command=cin.readUTF();
            if(Command.compareTo("CHECKLOGIN")==0)
            {
                System.out.println("\tCHECKLOGIN Command Received ...");
                String id=cin.readUTF();
                 Id = id;
                String pin=cin.readUTF();
                pin=conectr.get(id, pin);
              //  JOptionPane.showMessageDialog(null,id+"=recieved:"+pin);
               // JOptionPane.showMessageDialog(null,pin);
                cout.writeUTF(pin);
                
            }
            else if(Command.compareTo("UPDATE")==0)
            {
                System.out.println("\tUPDATE Command Receiced ...");
                cout.writeUTF(conectr.get_amount(Id));
                //cout.writeUTF("50000");
                
                String cash=cin.readUTF();
                conectr.update(Id, cash);
                
                
               
               // JOptionPane.showMessageDialog(null,cash+"=recieved");
                
            }
           
            else if(Command.compareTo("DETAILS")==0)
            {
                System.out.println("\tDETAILS Command Receiced ...");
                
                
                cout.writeUTF(conectr.get_name(Id));
                cout.writeUTF(Id);
                cout.writeUTF(conectr.get_amount(Id));
                
                /*
                cout.writeUTF("talha");
                cout.writeUTF("123456789");
                cout.writeUTF("5000");
                */
               
            }
            else if(Command.compareTo("CHANGEPIN")==0)
            {
                System.out.println("\tCHANGEPINCommand Receiced ...");
                
                cout.writeUTF(conectr.get_pin(Id));
                //cout.writeUTF("1234");
                
                String pin=cin.readUTF();
                
                conectr.change_pin(Id, pin);
               // JOptionPane.showMessageDialog(null,pin+" updated");
                
            }
            else if(Command.compareTo("DISCONNECT")==0)
            {
                System.out.println("\tDisconnect Command Received ...");
                System.exit(1);
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



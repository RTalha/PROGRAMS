package model;

import java.awt.Component;
import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.Socket;
import java.net.UnknownHostException;

import javax.swing.JOptionPane;

public class ServerLink {
	
	private String name;
	private String  account;
	private String pin;
	private String cash;
    
    Socket ClientSoc;

    DataInputStream din;
    DataOutputStream dout;
    BufferedReader br;
    
public ServerLink() throws UnknownHostException, IOException
{
	
	 Socket soc=new Socket("127.0.0.1",5217);
    {
        try
        {
            ClientSoc=soc;
            din=new DataInputStream(ClientSoc.getInputStream());
            dout=new DataOutputStream(ClientSoc.getOutputStream());
            br=new BufferedReader(new InputStreamReader(System.in));
  
            
        }
        catch(Exception ex)
        {
			JOptionPane.showMessageDialog(null,"Connection failed try again!");
        }        
    }
	
}

	public String logincheck(String  tempid, String temppin) throws IOException
		{
			dout.writeUTF("CHECKLOGIN");
			dout.writeUTF(tempid);
			dout.writeUTF(temppin);
			String result=din.readUTF();
			
			
			
			//fill();
			
			return result;
			
		
		}
	public String getfirstname()
	{
		return name;
	}
	
	public String getpin()
	{
		return pin;
	}
	public String getcash()
	{
		return cash;
	}
	public String  getaccount()
	{
		return account;
	}
	public void fill()
	{	
		try {
			dout.writeUTF("DETAIL");
		name=din.readUTF();
		account=din.readUTF();
		pin=din.readUTF();
		cash=din.readUTF();
		}catch(IOException e)
		{
			e.printStackTrace();
		}
	}
	public void UPDATE_AMOUNT(Double amount)
	{
		String am=Double.toString(amount);
		try {
			dout.writeUTF("UPDATE");
			dout.writeUTF(am);
			
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
	}
	public void change(String np)
	{
		try {
			dout.writeUTF("CHANGEPIN");
			dout.writeUTF(np);
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
	
}

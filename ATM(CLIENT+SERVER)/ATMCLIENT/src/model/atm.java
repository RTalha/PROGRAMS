package model;

import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.Socket;
import java.net.UnknownHostException;

import javax.swing.JOptionPane;

import project1.Show;

public class atm {
	
		String first_name;
		long  account;
		int pin;
		double cash;
		Socket soc;

		    DataInputStream cin;
		    DataOutputStream cout;
		    BufferedReader br;
		
	
	public atm() throws UnknownHostException, IOException
	{
		
			first_name = "talha";
			pin = 1234;
			cash = 50000;
			account = 123456789;
		    soc = null;
			
	}
	
	public boolean login(String  tempid, String temppin) throws IOException
	{
		soc = new Socket("localhost",5217);
        cin=new DataInputStream(soc.getInputStream());
        cout=new DataOutputStream(soc.getOutputStream());
        br=new BufferedReader(new InputStreamReader(System.in));
        
        cout.writeUTF("CHECKLOGIN");
		cout.writeUTF(tempid);
		cout.writeUTF(temppin);
		String result=cin.readUTF();
        
		
		
		
		
		
		//JOptionPane.showMessageDialog(null, result);
		if(result.equals("TRUE"))
		{
			soc.close();
			return true;
		}
		else
		{
			soc.close();
			return false;
		}
	
		
	}
	
	public boolean setwithdraw(String wd) throws UnknownHostException, IOException                //wd is withdraw amount
		{
		soc = new Socket("localhost",5217);
        cin=new DataInputStream(soc.getInputStream());
        cout=new DataOutputStream(soc.getOutputStream());
        br=new BufferedReader(new InputStreamReader(System.in));
        
       
		
			int amount=Integer.parseInt(wd);
			
			if(amount<500||amount>=cash)
			{
				soc.close();
				return false;
			}
			else
			{
				cout.writeUTF("UPDATE");
				cash=Double.parseDouble(cin.readUTF());
				
				
				cash =cash- amount;
				String am=Double.toString(cash);
				
				 try {
					cout.writeUTF(am);
					//String result=cin.readUTF();
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
				 
				 
					try {
						soc.close();
					} catch (IOException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
				return true;
			}
		}
	public boolean setdeposit(String dp) throws UnknownHostException, IOException                //wd is withdraw amount
	{
		soc = new Socket("localhost",5217);
        cin=new DataInputStream(soc.getInputStream());
        cout=new DataOutputStream(soc.getOutputStream());
        br=new BufferedReader(new InputStreamReader(System.in));
		
		int amount=Integer.parseInt(dp);
		
		if(amount<500)
		{
			soc.close();
			return false;
		}
		else
		{
			cout.writeUTF("UPDATE");
			cash=Double.parseDouble(cin.readUTF());
			cash =cash+ amount;
			String am=Double.toString(cash);
			 try {
				
				cout.writeUTF(am);
				//String result=cin.readUTF();
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
				try {
					soc.close();
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			return true;
		}
	}
		
	public	boolean changepin(String op,String np1,String np2 ) throws UnknownHostException, IOException      //p is temp pin
		{
		soc = new Socket("localhost",5217);
        cin=new DataInputStream(soc.getInputStream());
        cout=new DataOutputStream(soc.getOutputStream());
        br=new BufferedReader(new InputStreamReader(System.in));
        
        cout.writeUTF("CHANGEPIN");
        pin=Integer.parseInt( cin.readUTF());
        
		int p=Integer.parseInt(op);
		//JOptionPane.showMessageDialog(null, p);
			if(p==pin)
			{
				cout.writeUTF(np1);
				soc.close();
				return true;
			}
			else
			{
				cout.writeUTF("FALSE");
				soc.close();
				return false;
			}
			
		}
		public void show() throws UnknownHostException, IOException
		{
			soc = new Socket("localhost",5217);
	        cin=new DataInputStream(soc.getInputStream());
	        cout=new DataOutputStream(soc.getOutputStream());
	        br=new BufferedReader(new InputStreamReader(System.in));
	        
	        cout.writeUTF("DETAILS");
			Show sh=new Show(cin.readUTF(),cin.readUTF(),cin.readUTF());
			soc.close();
			sh.setVisible(true);
		}
		
}

package controller;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.Socket;
import java.net.UnknownHostException;

import javax.swing.JOptionPane;

import model.atm;

public class Controller {
	
	public boolean log(String ID,String password) throws IOException
	{
		atm ATM=new atm();
		
		return ATM.login(ID, password);
		
	}
	public boolean transection(String amount,int option) throws UnknownHostException, IOException
	{
		if(option==1)
		{
			atm ATM=new atm();
			return ATM.setdeposit(amount);
		}
		if(option==2)
		{
			atm ATM=new atm();
			return ATM.setwithdraw(amount);
		}
		return false;
	}
	public boolean change(String op,String np1,String np2) throws UnknownHostException, IOException
	{
		atm ATM=new atm();
		return ATM.changepin(op, np1, np2);
		
	}
	public void show()
	{
		atm ATM;
		try {
			ATM = new atm();
			 ATM.show();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
}

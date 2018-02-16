package project1;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;

import controller.Controller;

import javax.swing.JButton;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.IOException;
import java.net.UnknownHostException;
import java.awt.Toolkit;

public class Menu extends JFrame {

	private JPanel contentPane;
	private  Menu frame;
	
	/**
	 * Launch the application.
	 */
	

	/**
	 * Create the frame.
	 */
	public Menu() {
		
		frame = this;
		setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JButton btnDeposit = new JButton("Deposit");
		btnDeposit.setBounds(135, 33, 162, 23);
		btnDeposit.setToolTipText("This will add amount to your account.");
		btnDeposit.setFont(new Font("Stencil", Font.PLAIN, 14));
		contentPane.add(btnDeposit);
		btnDeposit.addActionListener(new ActionListener()
		{

			@Override
			public void actionPerformed(ActionEvent arg0) {
				// TODO Auto-generated method stub
				//JOptionPane.showMessageDialog(contentPane, "deposit");
				
				Deposit deposit=new Deposit();
				deposit.setVisible(true);
				
				
			}
			
		});
		
		JButton btnWithdrawl = new JButton("WithDrawl");
		btnWithdrawl.setBounds(135, 85, 162, 23);
		btnWithdrawl.setToolTipText("This will withdraw your amount.");
		btnWithdrawl.setFont(new Font("Stencil", Font.PLAIN, 14));
		contentPane.add(btnWithdrawl);
		btnWithdrawl.addActionListener(new ActionListener()
		{

			@Override
			public void actionPerformed(ActionEvent arg0) {
				// TODO Auto-generated method stub
				
				//JOptionPane.showMessageDialog(contentPane, "wihtdearl");
				Withdrawl withdrawl=new Withdrawl();
				withdrawl.setVisible(true);
				
			}
			
		});
		
		JButton btnChangePassword = new JButton("Change Password");
		btnChangePassword.setBounds(135, 147, 162, 23);
		btnChangePassword.setToolTipText("This will change your password.");
		btnChangePassword.setFont(new Font("Stencil", Font.PLAIN, 14));
		contentPane.add(btnChangePassword);
		
		btnChangePassword.addActionListener(new ActionListener()
		{

			@Override
			public void actionPerformed(ActionEvent arg0) {
				// TODO Auto-generated method stubss
				//JOptionPane.showMessageDialog(contentPane, "passwrd");
				ChangePin changepin=new ChangePin();
				changepin.setVisible(true);
				
			}
			
		});
		
		JButton btnShow = new JButton("Show Detail");
		btnShow.setBounds(135, 200, 162, 23);
		btnShow.setToolTipText("This will display your account details such as (NAME,AMOUNT,ACCOUNT ID).");
		btnShow.setFont(new Font("Stencil", Font.PLAIN, 14));
		contentPane.add(btnShow);
		
		
		btnShow.addActionListener(new ActionListener()
		{

			@Override
			public void actionPerformed(ActionEvent arg0) {
				// TODO Auto-generated method stub
				
				Controller control=new Controller();
					control.show();
					
			}
			
		});
		JButton btnlogout = new JButton("Log Out");
		btnlogout.setBounds(10, 233, 89, 17);
		contentPane.add(btnlogout);
		btnlogout.addActionListener(new ActionListener()
		{

			@Override
			public void actionPerformed(ActionEvent arg0) {
				// TODO Auto-generated method stub
				
				login log=new login();
					log.show();
					frame.dispose();
			}
		});
	}
}

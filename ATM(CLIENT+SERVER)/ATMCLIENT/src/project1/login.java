package project1;

import java.awt.BorderLayout;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.awt.Color;
import javax.swing.SwingConstants;
import javax.swing.JButton;
import org.eclipse.wb.swing.FocusTraversalOnArray;

import controller.Controller;

import java.awt.Component;
import java.net.*;
import javax.swing.JPasswordField;

public class login extends JFrame {

	private JPanel contentPane;
	private JTextField txtId;
	private  login frame;
	private JPasswordField txtPassword;
	/**
	 * Launch the application.
	 * @throws IOException 
	 * @throws UnknownHostException s
	 */
	public static void main(String[] args) throws UnknownHostException, IOException {
		
		  
		
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
				 login log = new login();
					log.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 * @throws IOException 
	 * @throws UnknownHostException 
	 */
	public login() {
	 
		frame=this;
		setAlwaysOnTop(true);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBackground(Color.WHITE);
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblLogIn = new JLabel("Log In");
		lblLogIn.setBackground(Color.BLACK);
		lblLogIn.setForeground(Color.BLACK);
		lblLogIn.setFont(new Font("Wide Latin", Font.BOLD, 16));
		lblLogIn.setToolTipText("Enter the 'ID' and 'Password'.");
		lblLogIn.setBounds(161, 11, 135, 30);
		contentPane.add(lblLogIn);
		
		JLabel lblEnterId = new JLabel("      Enter ID");
		lblEnterId.setFont(new Font("Stencil", Font.PLAIN, 14));
		lblEnterId.setBounds(23, 68, 147, 30);
		contentPane.add(lblEnterId);
		
		JLabel lblEnterPassword = new JLabel("ENTER PASSWORD");
		lblEnterPassword.setFont(new Font("Stencil", Font.PLAIN, 14));
		lblEnterPassword.setBounds(23, 143, 147, 30);
		contentPane.add(lblEnterPassword);
		
		txtId = new JTextField();
		txtId.setBounds(161, 73, 214, 25);
		contentPane.add(txtId);
		txtId.setColumns(10);
		
		txtId.addKeyListener(new KeyAdapter()
				{
			public void keyTyped(KeyEvent e) {
				      char c = e.getKeyChar();
				      if ( !Character.isDigit(e.getKeyChar()) && (c != KeyEvent.VK_BACK_SPACE)) {
				         e.consume();  // ignore event
				      }
				   }
				});
		
		JButton btnlogin = new JButton("Next");
	
		btnlogin.setFont(new Font("Wide Latin", Font.PLAIN, 12));
		btnlogin.setBounds(161, 213, 111, 23);
		contentPane.add(btnlogin);
		
		txtPassword = new JPasswordField();
		txtPassword.setBounds(161, 148, 214, 25);
		txtPassword.addKeyListener(new KeyAdapter()
		{
	public void keyTyped(KeyEvent e) {
		      char c = e.getKeyChar();
		      if ( !Character.isDigit(e.getKeyChar()) && (c != KeyEvent.VK_BACK_SPACE)) {
		         e.consume();  // ignore event
		      }
		   }
		});
		contentPane.add(txtPassword);
		contentPane.setFocusTraversalPolicy(new FocusTraversalOnArray(new Component[]{lblLogIn, lblEnterId, lblEnterPassword, txtId, btnlogin}));
		
		btnlogin.addActionListener(new ActionListener()
		{

			@Override
			public void actionPerformed(ActionEvent arg0) {
				// TODO Auto-generated method stub
				
				String id=txtId.getText();
				String password=txtPassword.getText();
				Controller control=new Controller();
				
				boolean bool = false;
				
				try {
					bool = control.log(id,password);
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
				
				if(bool==true)
				{ 
					frame.dispose();
					Menu menu=new Menu();
					menu.setVisible(true);
					
				}
				else
				{
					JOptionPane.showMessageDialog(contentPane, "Your Password or ID is Wrong");
				}
				
				
				
			}
			
		});
	}
}

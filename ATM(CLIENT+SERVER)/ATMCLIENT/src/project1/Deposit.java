package project1;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;

import controller.Controller;

import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.io.IOException;
import java.net.UnknownHostException;

import javax.swing.JButton;

public class Deposit extends JFrame {

	private JPanel contentPane;
	private JTextField txtDeposit;
	private Deposit frame;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Deposit frame = new Deposit();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public Deposit() {
		setAlwaysOnTop(true);
		frame = this;
		setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Enter Amount");
		lblNewLabel.setFont(new Font("Stencil", Font.PLAIN, 14));
		lblNewLabel.setBounds(28, 97, 139, 32);
		contentPane.add(lblNewLabel);
		
		txtDeposit = new JTextField();
		txtDeposit.setBounds(200, 97, 184, 32);
		contentPane.add(txtDeposit);
		txtDeposit.setColumns(10);
		txtDeposit.addKeyListener(new KeyAdapter()
		{
	public void keyTyped(KeyEvent e) {
		      char c = e.getKeyChar();
		      if ( !Character.isDigit(e.getKeyChar()) && (c != KeyEvent.VK_BACK_SPACE)) {
		         e.consume();  // ignore event
		      }
		   }
		});
		
		JButton btnDNext = new JButton("Next");
		btnDNext.setFont(new Font("Stencil", Font.PLAIN, 14));
		btnDNext.setBounds(137, 183, 123, 39);
		contentPane.add(btnDNext);
		btnDNext.addActionListener(new ActionListener()
		{

			@Override
			public void actionPerformed(ActionEvent arg0) {
				// TODO Auto-generated method stub
				String deposit=txtDeposit.getText();
				//JOptionPane.showMessageDialog(contentPane, deposit);
				Controller control=new Controller();
				boolean bool=false;
			
					try {
						bool = control.transection(deposit,1);
					} catch (IOException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
				
				if(bool==true)
				{
					JOptionPane.showMessageDialog(contentPane,"Successfuly added!");
					//Menu menu=new Menu();
				//	menu.setVisible(true);
					frame.dispose();
				}
				else
				{
					JOptionPane.showMessageDialog(contentPane, "Lost transection!");
					//Menu menu=new Menu();
					//menu.setVisible(true);
					frame.dispose();
				}
			}
			
		});
	}

}

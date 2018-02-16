package project1;

import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;

import controller.Controller;

import javax.swing.JTextPane;
import javax.swing.JLabel;
import javax.swing.JOptionPane;

import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.IOException;

import javax.swing.JTextField;
import javax.swing.JButton;

public class Show extends JFrame {

	private JPanel contentPane;
	private JTextField textShowName;
	private JTextField txtShowID;
	private JTextField txtShowAmount;
	private Show frame ;

	/**
	 * Launch the application.
	 */

	/**
	 * Create the frame.
	 */
	public Show(String name,String id,String amount) {
		setAlwaysOnTop(true);
		frame=this;
		
		setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("NAME");
		lblNewLabel.setFont(new Font("Stencil", Font.PLAIN, 14));
		lblNewLabel.setBounds(26, 26, 98, 22);
		contentPane.add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("ID");
		lblNewLabel_1.setFont(new Font("Stencil", Font.PLAIN, 14));
		lblNewLabel_1.setBounds(26, 74, 98, 22);
		contentPane.add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("Amount");
		lblNewLabel_2.setFont(new Font("Stencil", Font.PLAIN, 14));
		lblNewLabel_2.setBounds(26, 124, 98, 22);
		contentPane.add(lblNewLabel_2);
		
		JLabel lblNewLabel_3 = new JLabel("New label");
		lblNewLabel_3.setBounds(24, 236, 75, -18);
		contentPane.add(lblNewLabel_3);
		
		textShowName = new JTextField();
		textShowName.setEditable(false);
		textShowName.setBounds(133, 26, 163, 23);
		contentPane.add(textShowName);
		textShowName.setColumns(10);
		textShowName.setText(name);
		
		txtShowID = new JTextField();
		txtShowID.setEditable(false);
		txtShowID.setBounds(132, 75, 164, 22);
		contentPane.add(txtShowID);
		txtShowID.setColumns(10);
		txtShowID.setText(id);
		
		txtShowAmount = new JTextField();
		txtShowAmount.setEditable(false);
		txtShowAmount.setBounds(132, 125, 164, 20);
		contentPane.add(txtShowAmount);
		txtShowAmount.setColumns(10);
		txtShowAmount.setText(amount);
		
		JButton btnBack = new JButton("Back");
		btnBack.setBounds(145, 195, 125, 23);
		contentPane.add(btnBack);
		btnBack.addActionListener(new ActionListener()
		{

			@Override
			public void actionPerformed(ActionEvent arg0) {
				// TODO Auto-generated method stub
				
			
				//Menu menu=new Menu();
				//menu.setVisible(true);
				frame.dispose();
				
				
			}
			
		});
		
		
	}
}

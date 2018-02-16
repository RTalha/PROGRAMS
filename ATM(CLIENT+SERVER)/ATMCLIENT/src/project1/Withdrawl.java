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

import javax.swing.JButton;

public class Withdrawl extends JFrame {

	private JPanel contentPane;
	private JTextField txtWithDrawl;
	private Withdrawl frame;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Withdrawl frame = new Withdrawl();
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
	public Withdrawl() {
		setAlwaysOnTop(true);
		frame = this;
		setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Withdrawl");
		lblNewLabel.setFont(new Font("Stencil", Font.PLAIN, 14));
		lblNewLabel.setBounds(50, 114, 117, 30);
		contentPane.add(lblNewLabel);
		
		txtWithDrawl = new JTextField();
		txtWithDrawl.setBounds(207, 114, 177, 30);
		contentPane.add(txtWithDrawl);
		txtWithDrawl.setColumns(10);
		txtWithDrawl.addKeyListener(new KeyAdapter()
		{
	public void keyTyped(KeyEvent e) {
		      char c = e.getKeyChar();
		      if ( !Character.isDigit(e.getKeyChar()) && (c != KeyEvent.VK_BACK_SPACE)) {
		         e.consume();  // ignore event
		      }
		   }
		});
		
		JButton btnWNext = new JButton("Next");
		btnWNext.setFont(new Font("Stencil", Font.PLAIN, 14));
		btnWNext.setBounds(177, 186, 94, 30);
		contentPane.add(btnWNext);
		btnWNext.addActionListener(new ActionListener()
		{

			@Override
			public void actionPerformed(ActionEvent arg0) {
				// TODO Auto-generated method stub
				String withdrawl=txtWithDrawl.getText();
				//JOptionPane.showMessageDialog(contentPane, withdrawl);
				
				Controller control=new Controller();
				boolean bool=false;
			
					try {
						bool = control.transection(withdrawl,2);
					} catch (IOException e) {
						// TODO Auto-generated catch block
						e.printStackTrace();
					}
				
				if(bool==true)
				{
					JOptionPane.showMessageDialog(contentPane,"Successfull!");
					//Menu menu=new Menu();
					//menu.setVisible(bool);
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

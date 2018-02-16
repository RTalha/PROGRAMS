package project1;

import java.awt.BorderLayout;
import java.awt.Component;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.border.EmptyBorder;

import org.eclipse.wb.swing.FocusTraversalOnArray;

import controller.Controller;

import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import javax.swing.JButton;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.io.IOException;

public class ChangePin extends JFrame {

	private JPanel contentPane;
	private JPasswordField txtOldPin;
	private JPasswordField txtNewPin1;
	private JPasswordField txtNewPin2;
	private JButton btnCNext;
	private ChangePin frame;
	

	/**
	 * Launch the application.
	 */
	
	/**
	 * Create the frame.
	 */
	public ChangePin() {
		setAlwaysOnTop(true);
		
		frame = this;
		
		setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Old Pin");
		lblNewLabel.setFont(new Font("Stencil", Font.PLAIN, 14));
		lblNewLabel.setBounds(10, 27, 105, 26);
		contentPane.add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("New Pin");
		lblNewLabel_1.setFont(new Font("Stencil", Font.PLAIN, 14));
		lblNewLabel_1.setBounds(10, 77, 105, 26);
		contentPane.add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("Confirm Pin");
		lblNewLabel_2.setFont(new Font("Stencil", Font.PLAIN, 14));
		lblNewLabel_2.setBounds(10, 136, 110, 26);
		contentPane.add(lblNewLabel_2);
		
		txtOldPin = new JPasswordField();
		txtOldPin.setToolTipText("Enter your Old Pin!");
		txtOldPin.setBounds(197, 30, 132, 23);
		contentPane.add(txtOldPin);
		txtOldPin.setColumns(10);
		txtOldPin.addKeyListener(new KeyAdapter() {
			   public void keyTyped(KeyEvent e) {
				      char c = e.getKeyChar();
				      
				      if ( !Character.isDigit(c) && (c != KeyEvent.VK_BACK_SPACE)){
				    	 
				    	e.consume();
				    	  
				      }
				   }
				});
		contentPane.add(txtOldPin);
		contentPane.setFocusTraversalPolicy(new FocusTraversalOnArray(new Component[]{lblNewLabel, lblNewLabel_1, lblNewLabel_2, txtNewPin1,txtNewPin2, btnCNext}));
		
		
		txtNewPin1 = new JPasswordField();
		txtNewPin1.setToolTipText("Enter New Pin from above 999.");
		txtNewPin1.setBounds(197, 80, 132, 23);
		contentPane.add(txtNewPin1);
		txtNewPin1.setColumns(10);
		txtNewPin1.addKeyListener(new KeyAdapter() {
			   public void keyTyped(KeyEvent e) {
				      char c = e.getKeyChar();
				      
				      if ( !Character.isDigit(c) && (c != KeyEvent.VK_BACK_SPACE)){
				    	 
				    	e.consume();
				    	  
				      }
				   }
				});
		contentPane.add(txtNewPin1);
		contentPane.setFocusTraversalPolicy(new FocusTraversalOnArray(new Component[]{lblNewLabel, lblNewLabel_1, lblNewLabel_2, txtOldPin,txtNewPin2, btnCNext}));
		
		
		txtNewPin2 = new JPasswordField();
		txtNewPin2.setToolTipText("Enter Pin Again from above 999.");
		txtNewPin2.setBounds(197, 139, 132, 23);
		contentPane.add(txtNewPin2);
		txtNewPin2.setColumns(10);
		txtNewPin2.addKeyListener(new KeyAdapter() {
			   public void keyTyped(KeyEvent e) {
				      char c = e.getKeyChar();
				      
				      if ( !Character.isDigit(c) && (c != KeyEvent.VK_BACK_SPACE)){
				    	 
				    	e.consume();
				    	  
				      }
				   }
				});
		contentPane.add(txtNewPin2);
		contentPane.setFocusTraversalPolicy(new FocusTraversalOnArray(new Component[]{lblNewLabel, lblNewLabel_1, lblNewLabel_2, txtOldPin,txtNewPin1, btnCNext}));
		
		
		
	    btnCNext = new JButton("Next");
		btnCNext.setFont(new Font("Stencil", Font.PLAIN, 14));
		btnCNext.setBounds(154, 204, 105, 26);
		contentPane.add(btnCNext);
		btnCNext.addActionListener(new ActionListener()
				{

					@Override
					public void actionPerformed(ActionEvent args) {
						// TODO Auto-generated method stub
						
						String op=txtOldPin.getText();
						String np1=txtNewPin1.getText();
						String np2=txtNewPin2.getText();
						
						if(op.isEmpty()||np1.isEmpty()||np2.isEmpty())
						{
							JOptionPane.showMessageDialog(contentPane, "Complete All BOXES");
						}
						else if(op.length()!=4||np1.length()!=4||np2.length()!=4)
						{
							JOptionPane.showMessageDialog(contentPane, "Enter 4 Digit Pin only");
						}
						else if(!np1.equals(np2))
						{
							//JOptionPane.showMessageDialog(contentPane, "Please Re-enter your new password again make \nsure you are entering right password in both bloks");
							JOptionPane.showMessageDialog(contentPane, np1+"="+np2);
						}
						else if(op.length()<4||np1.length()<4||np2.length()<4)
						{
							JOptionPane.showMessageDialog(contentPane, "Enter 4 digit password only!");
			
						}
						else
						{
							Controller control=new Controller();
							boolean bool=false;
						
								try {
									bool = control.change(op, np1, np2);
								} catch (IOException e) {
									// TODO Auto-generated catch block
									e.printStackTrace();
								}
								if(bool==true)
								{
									JOptionPane.showMessageDialog(contentPane,"Successfuly change!");
									//Menu menu=new Menu();
									//menu.setVisible(bool);
									frame.dispose();
								}
								else
								{
									JOptionPane.showMessageDialog(contentPane, "Incorrect!");
									//Menu menu=new Menu();
									//menu.setVisible(true);
									frame.dispose();
								}
						}
						
						
					}
			
				});
	}

}

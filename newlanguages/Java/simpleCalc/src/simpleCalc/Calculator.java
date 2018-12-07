package simpleCalc;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Calculator {
		public static void main(String[] args){
			String s1=getInput("enter string : ");
			String s2=getInput("enter string : ");
			
			double d1= Double.parseDouble(s1);
			double d2= Double.parseDouble(s2);
			double result=d1+d2;
			
			System.out.print(result);
		}
		
		
		private static String getInput(String prompt){
			BufferedReader stdin = new BufferedReader(
					new InputStreamReader(System.in));
			System.out.print(prompt);
			System.out.flush();
			try{
				return stdin.readLine();
			}
			catch (Exception e){
				return "Erorr"+ e.getMessage();
			}
			
		}
}

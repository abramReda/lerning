package astricsShap;
import java.util.Scanner;

public class Main {
	/*
	 * 
	 * generate the tree old pro :) 
	 * *
	 * **
	 * ***
	 * ****
	 * *****
	 * 
	 */
	public static void main(String[] args) {
		Scanner reader = new Scanner(System.in);
		System.out.print("Enter number of *'s row followed by <enter>: ");
		int rowNum = reader.nextInt();
		for (int row = 0; row < rowNum; row++) {
			for (int colm = 0; colm <= row ; colm++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}

}

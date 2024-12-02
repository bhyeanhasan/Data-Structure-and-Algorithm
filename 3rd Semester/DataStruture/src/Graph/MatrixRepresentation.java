
package Graph;

import java.util.Scanner;

public class MatrixRepresentation {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Num of Node?");
        int num = scan.nextInt();
        
        int arr[][] = new int[num][num];
        
        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                arr[i][j]=0;
            }
        }
        
        System.out.println("Enter the edges:");
        int m,n,val;
        for (int i = 0; i < num; i++) {
            m = scan.nextInt();
            n = scan.nextInt();
            val = scan.nextInt();
            
            arr[m][n] = val;
            arr[n][m] = val;
        }
        
        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                System.out.print(arr[i][j] +" ");
            }
            System.out.println("");
        }
        
    }
}

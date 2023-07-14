// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        // MINI PROJECT
        Scanner sc = new Scanner(System.in);
        int myNumber = (int)(Math.random()*100);
        
        do{
            System.out.println("Guess my number(1-100) : ");
            int userNumber = sc.nextInt();
            
            if(userNumber == myNumber){
                System.out.println("WOOHOO .. CORRECT NUMBER!!!");
                break;
            }
            else if(userNumber > myNumber){
                System.out.println("your number is too large");
            }
            else{
                System.out.println("your number is too small");
            }
        }while(true);
        System.out.print("My number was : ");
        System.out.println(myNumber);
    }
}

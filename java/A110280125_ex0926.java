import java.util.*;

public class A110280125_ex0926{
    public static void main(String[] argv){
        double  celsius;
        Scanner sc = new Scanner(System.in);
        System.out.printf("Input fahrenheit: ");
        double fahrenheit =sc.nextDouble();2
        celsius = (fahrenheit-32)*5/9; 
        System.out.printf("Enter the degree F: %.1f\n",celsius);
        if(celsius>=35){
            System.out.printf("Its very hot!!");
        }else if(35>=celsius && celsius>=28){
            System.out.printf("Its hot!!");
        }else if(28>=celsius && celsius>=21){
            System.out.printf("Its comfortable!!");
        }else if(21>=celsius && celsius>=14){
            System.out.printf("Its very cool!!");
        }else if(14>=celsius && celsius>=7){
            System.out.printf("Its cold!!");
        }
        else if(7>celsius){
            System.out.printf("Its very cold!!");
        }
    }
}
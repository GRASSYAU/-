import java.util.*;

public class A110280125_0919{
    public static void main(String[] argv){
        float height,weight;
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter your height(cm):");
        height = sc.nextFloat();
        System.out.printf("Enter your weight(kg):");
        weight = sc.nextFloat();
        double bmi = weight / ((height/100)*(height/100));
        System.out.printf("YourBMI:%.2f", bmi);
    }
}       
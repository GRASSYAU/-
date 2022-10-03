import java.util.*;

public class A110280125_1003{
    public static void main(String[] argv){
        double  height,weight,bmi;
        String state;
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter your height(cm):");
        height=sc.nextDouble();
        System.out.printf("Enter your weight(kg):");
        weight=sc.nextDouble();
        bmi = weight / ((height/100)*(height/100));
        
        if(bmi<18.5){
            state="Under Weight";
        }else if(bmi<24){
            state="Normal Weight";
        }else if(bmi<27){
            state="Over Weight";
        }else if(bmi<30){
            state="Light Fat";
        }else{
            state="Fat";
        }
        System.out.printf("Your BMI is %.2f, Weight Status:%s\n",bmi,state);
    }

}

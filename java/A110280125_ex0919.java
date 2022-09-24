import java.util.*;

public class A110280125_ex0919{
    public static void main(String[] argv){
        int a,b,c;
        Scanner sc =new Scanner(System.in);
        System.out.printf("Input three sides of triangle:");
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();   
        System.out.printf("Three sides of triangle are %d, %d, %d\n",a,b,c);

        int perimeter =a + b +c;
        System.out.printf("**Perimeter of triangle is %d\n",perimeter);

        double s =(a+b+c)/2;
        System.out.printf("**Area of triangle is %.5f",Math.sqrt(s*(s-a)*(s-b)*(s-c)));
        
    }
    
}
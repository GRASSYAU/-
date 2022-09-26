import java.util.*;

public class A110280125_0926{
    public static void main(String[] argv){
        int a, b, c,max,min;
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter 3 integers:");
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt(); 
        max= c > a? c: a; //比較運算子
        max= max > b? max: b;//比較運算子
        min= c < a? c: a;//比較運算子
        min= min> b? min: b;//比較運算子
        double avg =(a+b+c)/3.0;
        System.out.printf("Avg:%.3f",avg);
	} 
}

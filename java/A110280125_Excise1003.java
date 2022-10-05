import java.util.*;

public class A110280125_Excise1003{
    public static void main(String[] argv){
        int nb1,nb2,replace;
        int sum=0, count= 0;
        Scanner sc = new Scanner(System.in);
        System.out.printf("Enter two integers:");
        nb1=sc.nextInt();
        nb2=sc.nextInt();
        if(nb2<nb1){
            replace = nb2;
            nb2 = nb1;
            nb1 = replace;
        }
        for(int i=nb1;i<=nb2;i++){
            if(i%3==0 && i%7==0 && i%2==0){
                sum+=i;
                count+=1;
            }
        }
        System.out.printf("Number is %d, Sum is %d",count,sum);
    }
}
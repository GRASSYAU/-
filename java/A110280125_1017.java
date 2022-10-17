import java.util.*;

public class A110280125_1017 {
    public static void main(String[] argv){
        Scanner sc =new Scanner(System.in);
        for(int j=1;j<=3;j++){
            System.out.printf("Enter an integer n(n>=1):");
            int n=sc.nextInt();
            int num1=0;
            double num2=0;
            for(int i=1;i<=n;i++){
                num1=num1+i*(i+3);
                num2=num2+(double)i/(i+1);
            }
            
            System.out.printf("Sum(s1(%d))=%d, Sum(s2(%d))=%.5f %n",n,num1,n,num2);
        }
    }
}

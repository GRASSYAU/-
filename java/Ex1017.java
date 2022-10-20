import java.util.*;

public class Ex1017 {
    public static void main(String[] argv){
        System.out.print("             9X9 TABLE\n");
        System.out.print("+-----------------------------------+\n");
        for(int i=1;i<=9;i++){
            for(int j=2;j<=5;j++){
                if(j == 2){
                    System.out.printf("| %d*%d=%2d |",j,i,j*i);
                }else{
                    System.out.printf(" %d*%d=%2d |",j,i,j*i);
                }
            }
            System.out.printf("\n");
        }
        System.out.print("+-----------------------------------+\n");
        for(int i=1;i<=9;i++){
            for(int j=6;j<=9;j++){
                if(j == 6){
                    System.out.printf("| %d*%d=%2d |",j,i,j*i);
                }else{
                    System.out.printf(" %d*%d=%2d |",j,i,j*i);
                }
            }
            System.out.printf("\n");
        }
        System.out.print("+-----------------------------------+\n");
    }
}
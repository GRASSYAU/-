import java.util.*;

public class Test1024 {
    public static void main(String[] argv){
        int [] array={78, 46, 85, 33, -21, 66, 57, 111, 27, 223, 61, 80, 90, -77, 999, 81, 49, 39};
        int count=0;
        for(int aa:array){
            if(aa == 999) break;
            if(aa<0) continue;
            if(aa%3==0 || aa%7==0){
                count++;
                System.out.printf("%3d ",aa);
            }
        }
        System.out.printf("\n numbers of item are %d%n",count);
    }
}

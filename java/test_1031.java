import java.util.Scanner;

public class test_1031 {
    public static void main(String[] argv){
        System.out.printf("請輸入國、英、數成績（整數）：");
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        a=sc.nextInt();
        b=sc.nextInt();
        c=sc.nextInt();
        double avg=((a*0.3)+(b*0.33)+(c*0.37));
        if(avg>=90){
            System.out.printf("分數%.1f等級A",avg);
        }else if(90>avg&&avg>=80){
            System.out.printf("分數%.1f等級B",avg);
        }else if(80>=avg&&avg>=70){
            System.out.printf("分數%.1f等級C",avg);
        }else if(70>avg&&avg>=60){
            System.out.printf("分數%.1f等級D",avg);
        }else{
            System.out.printf("分數%.1f等級F",avg);
        }
    }   
}


// import java.util.*;
// public class toy {
//     public static void main(String[] argv) {
//         System.out.printf("請輸入國、英、數成績（整數）：");
//         Scanner sc = new Scanner(System.in);
//         int a, b, c;
//         a = sc.nextInt();
//         b = sc.nextInt();
//         c = sc.nextInt();
//         double average = (a * 0.3) + (b * 0.33) + (c * 0.37);
//         int grade_level = (int) (average / 10);
//         System.out.printf("成績:%.1f", average);
//         System.out.printf("等級:", grade_level);
//         switch (grade_level) {
//             case 9:
//                 System.out.println("A");
//                 break;
//             case 8:
//                 System.out.println("B");
//                 break;
//             case 7:
//                 System.out.println("C");
//                 break;
//             case 6:
//                 System.out.println("D");
//                 break;
//             default:
//                 System.out.println("F");

//         }

//     }
// }

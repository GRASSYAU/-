public class Test1031 {
    public static void main(String[] argv) {
        int[][] ary = {
                { 89,76,45,91,83,66,51,75,86,80,47,90,43,55,83,72,90,44,66,91 },//a
                { 63,51,79,82,77,43,92,65,72,89,66,50,95,53,42,60,70,85 },//b
                { 93,65,75,86,52,38,88,72,67,97,61,55,78,40,76 } };//c
        // String[] name = { "A", "B", "C" };
        int max, min, nopass, sum;
        max = min = nopass = 0;
        double avga, avgb, avgc;
        avga = avgb = avgc = 0;
        for (int i = 0; i < ary.length; i++) {
            // System.out.printf("Class %s :",name[i]);
            sum = 0;
            for (int j = 0; j < ary[i].length; j++) {
                if (i == 0 && j == 0) {
                    max = ary[i][j];
                    min = ary[i][j];
                }
                // System.out.printf("%s ",ary[i][j]);
                if (ary[i][j] > max) {
                    max = ary[i][j];
                }
                if (ary[i][j] < min) {
                    min = ary[i][j];
                }
                if (ary[i][j] < 60) {
                    nopass++;
                }
                sum += ary[i][j];
            }
            if (i == 0) {
                avga = sum;//sum += ary[0][j];
                avga = (double) (avga / (ary[i].length));//i=0
            } else if (i == 1) {
                avgb = sum;//sum += ary[1][j];
                avgb = (double) (avgb / (ary[i].length));
            } else if(i ==2 ){
                avgc = sum;//sum += ary[2][j];
                avgc = (double) (avgc / (ary[i].length));
            }
        }
        System.out.printf("Max:%d,Min:%d,Fail(<60) No:%d\n",max,min,nopass);
        System.out.printf("Avg. of A:%.2f,Avg. of B:%.2f,Avg. of C:%.2f\n",avga,avgb,avgc);
    }
}

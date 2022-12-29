class Score {
    static double max = 0;
    static String maxId;
    private String sid;
    private int CA, CB, CC;

    Score(String id, int s1, int s2, int s3) {
        sid = id;
        CA = s1;
        CB = s2;
        CC = s3;
    }

    Score(String id) {
        sid = id;
    }

    void setScore(int s1, int s2, int s3) {
        CA = s1;
        CB = s2;
        CC = s3;
    };

    private double semScore() {
        double sscore = CA * 0.31 + CB * 0.33 + CC * 0.36;
        // Adjust max & maxId
        if (sscore > max) {
            max = sscore;
            maxId = sid;
        }
        return sscore;
    }

    private char getGrade() {
        double score = semScore();
        if (score >= 90)
            return 'A';
        else if (score >= 80)
            return 'B';
        else if (score >= 70)
            return 'C';
        else if (score >= 60)
            return 'D';
        else
            return 'F';
    }

    void show() {
        System.out.printf("Sid:%s, CA:%d, CB:%d, CC:%d, Semester score:%.1f, Semester grade:%s\n",
                sid, CA, CB, CC, semScore(), getGrade());
    }
}

class Test1205 {
    public static void main(String args[]) {
        Score std1 = new Score("A111123456", 92, 85, 73);
        std1.show();
        Score std2 = new Score("A111333333", 62, 55, 49);
        std2.show();
        Score std3 = new Score("A111999999");
        std3.setScore(97, 92, 93);
        std3.show();
        Score std4 = new Score("A110280125",99,99,99);
        std4.show();
        System.out.printf("** Rank 1 student_Id :%s & score:%.1f\n", Score.maxId, Score.max);

    }
}

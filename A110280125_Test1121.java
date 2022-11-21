class Score {
    String sid;
    int CA, CB, CC;

    double semScore() {
        double avg = CA * 0.31 + CB * 0.33 + CC * 0.36;
        return avg;
    }

    String getGrade() {
        double sem = semScore();
        if (sem >= 95)
            return "A+";
        else if (sem >= 90)
            return "A";
        else if (sem >= 85)
            return "B+";
        else if (sem >= 80)
            return "B";
        else if (sem >= 70)
            return "C";
        else if (sem >= 60)
            return "D";
        else
            return "F";
    }

    void show() {
        System.out.printf("Sid:%s,CA,CB,CC:%d,%d,%d, semScore:%.1f,Grade:%s\n", sid, CA, CB, CC, semScore(), getGrade());
    }
}

public class A110280125_Test1121 {
    public static void main (String args[]){
        Score std1 = new Score();
        std1.sid = "A111280091";
        std1.CA = 92;
        std1.CB = 85;
        std1.CC = 83;
        std1.show();
        Score std2 = new Score();
        std2.sid = "A111333333";
        std2.CA = 62;
        std2.CB = 55;
        std2.CC = 43;
        std2.show();
    }
}

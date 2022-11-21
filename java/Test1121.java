class triangle{
    int a, b, c;

    boolean check() {
        if (a <= 0 || b <= 0 || c <= 0)
            return false;
        if (a + b <= c || b + c <= a || a + c <= b)
            return false;
        return true;
    }
    double getArea() {
        double ss = getPerimeter() / 2;
        return Math.sqrt(ss * (ss - a) * (ss - b) * (ss - c));
    }
    int getPerimeter() {
        return a + b + c;
    }
    void show() {
        System.out.printf("Three edges of the triangle are %d, %d, %d\n", a, b, c);
        if (check())
            System.out.printf("**Area:%.2f,Perimeter:%d\n", getArea(), getPerimeter());
        else
            System.out.println("###illegal triangle");
    }
}

public class Test1121 {
    public static void main(String args[]) {
        triangle tr1 = new triangle();
        tr1.a = 5;
        tr1.b = 6;
        tr1.c = 7;
        tr1.show();
        triangle tr2 = new triangle();
        tr2.a = 3;
        tr2.b = 4;
        tr2.c = 5;
        tr2.show();
        triangle tr3 = new triangle();
        tr3.a = 3;
        tr3.b = 3;
        tr3.c = 6;
        tr3.show();
    }
}

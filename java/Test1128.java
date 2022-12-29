class Graph {
    String shape;
    double width,length;
    Graph(String x, double y,double z){
        shape=x;
        width=y;
        length=z;
    }
    Graph(String x, double s){
        this(x,s,s);
    }
    double area(){
        double area=width*length;
        return area;
    }
    double perimeter(){
        double perimeter=(width+length)*2;
        return perimeter;
    };
    void show(){
        System.out.printf("Shape:%s,Width:%.1f,Length:%.1f,Area:%.2f,Perimeter:%.2f\n",shape,width,length,
        area(),perimeter());

    }
}

public class Test1128 {
    public static void main(String args[]){
        Graph shape1=new Graph("Rectangle",7.3,5.5);
        shape1.show();
        Graph shape2=new Graph("Square",6.8);
        shape2.show();
    }
}

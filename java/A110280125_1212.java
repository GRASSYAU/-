class Circle{
	private double r;

	Circle(double r) {
        this.r=r;
	}
	public double area() {
		return 3.14159 * r * r;
	}
	public double perimeter(){
        return r * 2 *3.14159;  
	}
	void show(){
        System.out.printf("Circle radius:%.1f, Area:%.2f, Perimeter:%.2f\n",r,area(), perimeter());
	}
}

class Cylinder extends Circle{
    private double h;

    Cylinder(double r, double h){
        super(r);
        this.h=h;
    }

    private double surface(){
        return 2*area()+perimeter()*h;
    }
    private double volume(){
        return area()*h;
    }
	void show(){
	    super.show(); // call the show of super class
        System.out.printf("Cylinder high:%.1f, Surface:%.2f, Volume:%.2f\n",h,surface(), volume());
	}

}

public class A110280125_1212 {
	public static void main(String[] argv) {
        Circle cir=new Circle(5.5);
        cir.show();   // 50%

        Cylinder cyl=new Cylinder(5.5, 10);
        cyl.show();   //50%
	}
}

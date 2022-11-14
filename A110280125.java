class Student{
	String sid;
	char gender;
	double weight, height;
	double BMI(){
		double bmi = weight / ((height/100)*(height/100));
		return bmi;
	}
	void show(){
		System.out.printf(" Your sid:%s, gender:%c, Weight:%.1f, Height:%.1f, BMI:%.1f\n",sid,gender,weight,height,BMI());
	}
}
	
public class A110280125{
	public static void main(String args[]){
		Student std1=new Student();
		std1.sid="A110280125";
		std1.gender='M';
		std1.weight=90;
		std1.height=165;
		std1.show();

		Student std2=new Student();
		std2.sid="A123456789";
		std2.gender='M';
		std2.height=172.5;
		std2.weight=57.5;
		std2.show();
	}
}

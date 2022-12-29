class Employee{
    private String eid, jobName;
	private int jobLevel, jobAge, base;
	
    Employee(String id, int level, int age){
		eid=id;
		jobLevel=level;
		jobAge=age;
		baseAndName();
    }
	void baseAndName(){
		if(jobLevel ==1){
			jobName="Manager";
			base=95000;
		}
		else if(jobLevel ==2){
			jobName="Junior Manager";
			base=75000;
		}
		else if(jobLevel ==3){
			jobName="Senior Staff";
			base=50000;
		}
		else if(jobLevel ==4){
			jobName="Staff";
			base=35000;
		}
	}
	int monthPay(){
		return base+jobAge*1500;
	}
	double monthTaxRate(){
		if(monthPay() >= 110000)
			return 0.12;
		else if(110000>monthPay() && monthPay()>= 110000)
			return 0.09;
		else if(80000>monthPay() && monthPay()>= 50000)
			return 0.06;
		else 
			return 0.0;
		// return 0.0;
	}
	int monthNetPay(){
		return (int) (monthPay()-monthPay()*monthTaxRate());
	}
	void show(){
        System.out.printf("Employee id:%s, Job Name:%s, Job Age:%d\n",eid, jobName, jobAge);
        System.out.printf("    MonthPay:%d, MonthTaxRate:%.2f, MonthNetPay:%d\n",monthPay(),monthTaxRate(),monthNetPay());
	}

}

public class A110280125_Test1219 {
	public static void main(String[] argv) {
		Employee John=new Employee("E001",1,17);
		John.show();
		Employee Mary=new Employee("E003",2,1);
		Mary.show();
		Employee Woody=new Employee("E011",3,8);
		Woody.show();
		Employee Candy=new Employee("E015",4,5);
		Candy.show();
	}
}

// By 5MQuadr! (s-m-quadri@github , 26107@diems2020-24)
// Last Updated on : 7th January 2022

class Main{
	public static void main(String args[]){
		Employee obj;
		
		
		obj = new Contractor(100,100);
		System.out.println("Sal = " + obj.calSal());
		
		obj = new FullTimeEmployee(100,100);
		System.out.println("Sal = " + obj.calSal());
		
	}
}

abstract class Employee{
	String name; 
	int paymentPerHour;
	
	abstract int calSal();

}

class Contractor extends Employee{
	int workingHours;

	Contractor(int a , int b){
		paymentPerHour = a;
		workingHours = b;
	}
	
	int calSal(){
		return paymentPerHour * workingHours;
	}

}

class FullTimeEmployee extends Employee{
	int workingHours;
	
	FullTimeEmployee(int a , int b){
		paymentPerHour = a;
		workingHours = b;
	}
	
	int calSal(){
		return paymentPerHour * workingHours;
	}
}








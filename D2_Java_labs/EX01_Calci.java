import java.util.Scanner;

class EX01_Calci{
	public static void main(String args[]){
	Scanner scan = new Scanner(System.in);
	Calci_obj obj = new Calci_obj();
	System.out.printf("Please enter any two numbers : ");
	int a = scan.nextInt();
	int b = scan.nextInt();
	System.out.printf("Addition is %d \n",obj.add(a,b));
	System.out.printf("Substraction is %d \n",obj.sub(a,b));
	System.out.printf("Multiplication is %d \n",obj.mul(a,b));
	System.out.printf("Division is %2.2f \n",obj.div(a,b));
	System.out.printf("It is %b that, %d is even\n" , obj.isEven(a) , a);
	System.out.printf("It is %b that, %d is even\n" , obj.isEven(b) , b);
	System.out.printf("It is %b that, %d and %d are equal\n",obj.isEqual(a,b),a,b);
	}
}


class Calci_obj{
	int add(int a , int b) {return a+b;}
	int sub(int a , int b) {return a-b;}
	long mul(int a , int b) {return a*b;}
	float div(int a , int b) {return a/b;}
	boolean isEqual(int a , int b) {return a==b;}
	boolean isEven(int a) {return a%2==0;}
}

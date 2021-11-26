import java.util.*;

public class EX03_Fibonacci{
	
	public static void main(String args[]){
	
		System.out.printf("🔹️ Please enter the number of Fibonacci elements : ");
		Scanner obj = new Scanner(System.in);
		int n = obj.nextInt();
		
		
		int n1 = 0 , n2 = 0, next = 0;
		for(int i = 0 ; i < n ; i++){
		
		// Pre Display
		System.out.printf("\n%02d 🔸️ ", i+1);
		if (i>45) {
			System.out.printf("And even beyond the range ... !!!");
			break;
			}
		
		// Display
		System.out.printf("%d",n1+n2);
		
		// Post Display
		if (i == 0) n2=1;
		else {
			next = n1 + n2;
			n1 = n2;
			n2 = next;
			}
		}
		System.out.printf("\n");
	
	}
}

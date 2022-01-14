// By 5MQuadr! (s-m-quadri@github , 26107@diems2020-24)
// Last Updated On : 12th January 2021

#include <stdio.h>

int main(){
	int count = 0;
	scanf("%d" , &count);
	int prime[count];
	
	for (int i = 0 ; i < count ; i++){
		int a,b;
		scanf("%d %d" , &a , &b);
		int c ,d;
		scanf("%d %d" , &c , &d);
		
		prime[i] = b - c + 1;
		
		for(int j = c ; j <= b ; j++){
			for(int k = 2 ; k <= b ; k++){
				if (j%k == 0) {
					prime[i]--;
					break;
				}
			}
		}
		
	}
	
	for (int i = 0 ; i < count ; i++){
		printf("%d\n" , prime[i] + 1);
	}
	
	
	return 0;
}

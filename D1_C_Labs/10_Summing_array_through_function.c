// By 5MQuadr! (s-m-quadri@github , 26107@diems2020-24)
// Last Updated On : 28th November 2021


// #########################
//   HEADER AND PROTOTYPES
// #########################
#include <stdio.h>
int get_array(int *array, int size);
int get_sum(int *array, int size);


// #########################
//       MAIN FUNCTION
// #########################
int main(){
	// Getting size ...
	int size = 0;
	printf("🔹️ Enter the size of array : ");
	scanf("%d" , &size);
	
	// Getting array ...
	int array[size];
	get_array(array , size);
	
	// Printing sum of array ...
	printf("🔸️ Sum of elements is %d \n" , get_sum(array , size));
	return 0;
}


// #########################
//   FUNCTIONS DEFINITIONS
// #########################
void get_array(int *array, int size){
	for (int i = 0 ; i < size ; i++){
		printf("Enter the %dth element : " , i+1);
		scanf("%d" , &array[i]);
	}
}

int get_sum(int *array, int size){
	int sum=0;
	for (int i = 0 ; i < size ; i++) sum += array[i];
	return sum;
}

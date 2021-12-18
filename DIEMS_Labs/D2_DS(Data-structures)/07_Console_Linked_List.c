// By 5MQuadr! (s-m-quadri@github , 26107@diems2020-24)
// Last Updated on : 18th December 2021


// ###########################
//      Header Section
// ###########################
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum {true = 1 , false = 0};
struct node{
	int data;
	struct node *next;
};
struct node *start = NULL;


// ###########################
//     Definition Section
// ###########################
void insert(){
	struct node *temp = (struct node*) malloc(sizeof(struct node));
	int input = 0 , count = 1;
	scanf("%d@%d" , &input , &count);
	temp -> data = input;
	
	if (count == 1 || start == NULL){
		temp -> next = start;
		start = temp;
		return;
	}
	
	for (struct node *ptr = start ; count > 1 ; ptr = ptr -> next){
		if (--count == 1) {
			temp -> next = ptr -> next;
			ptr -> next = temp;
			return;
		}
		
		if(ptr -> next == NULL){
			printf("sorry ! can't find desire location\n");
			return;
		}
	}
}

void delete(){
	int count = 1;
	scanf("%d" , &count);
	
	// Error checking
	if (start == NULL) {
		printf("List is empty ! can't remove.\n");
		return;
	}
	
	// Error checking
	if(count <= 0){
		printf("sorry ! can't find desire location\n");
		return;
	}
	
	
	// First element is present only.
	if ((count == 1) && (start -> next == NULL)){
		free(start);
		start = NULL;
		return;
	} 
	
	// First element to be removed.
	if ((count == 1) && (start -> next != NULL)){ 
		struct node *temp = start;
		start = start -> next;
		free(temp);
		temp = NULL;
		return;
	}
	
	// Otherwise
	for(struct node *ptr = start ; count > 1 ; ptr = ptr -> next){
		if(ptr -> next == NULL){
			printf("sorry ! can't find desire location\n");
			return;
		}
		
		if (--count == 1){
			struct node *temp = ptr -> next;
			ptr -> next = temp -> next;
			temp -> next = NULL;
			free(temp);
			temp = NULL;
			return;
		}
	}
}

void display(){
	if (start == NULL) printf("List is empty ! noting to display.\n");
	else{
		printf("\033[32;1m[START]\033[0m");
		for (struct node *ptr = start ; ptr != NULL ; ptr = ptr -> next)
			printf(" -> \033[31;1m%d\033[0m", ptr -> data);
		printf(" -> \033[32;1m[NULL]\033[0m\n");
	}
}

void reverse(){
	if (start == NULL) {
		printf("List is empty ! noting to display.\n");
		return;
	}
	
	struct node *first = NULL;
	struct node *middle = start;
	struct node *last = start -> next;
	
	while (true){
		middle -> next = first;
		if (last == NULL) {
			start = middle;
			break;
		}
		first = middle;
		middle = last;
		last = last -> next;
	}	
}

void help(){
	// add
	printf(" -------------------\n");
	printf(" \033[32;1madd\033[0m value[@position]\n");
	printf(" -------------------\n");
	printf("\t By using it, you can add integers into the linked list.\n");
	printf("\t for example :\n");
	printf("\t $: add 3 \t will add 3 at the beginning\n");
	printf("\t $: add 89 \t will add 89 at the beginning\n");
	printf("\t $: add 4@1 \t will add 4 at beginning\n");
	printf("\t $: add 1@4 \t will add 1 at position 4th\n");
	
	// remove
	printf(" -------------------\n");
	printf(" \033[32;1mremove\033[0m position\n");
	printf(" -------------------\n");
	printf("\t By using it, you can delete integers at the specified position.\n");
	printf("\t for example :\n");
	printf("\t $: remove 3 \t will delete value at 3rd position\n");
	printf("\t $: remove 5 \t will delete value at 5th position\n");
	
	// show
	printf(" -------------------\n");
	printf(" \033[32;1mshow\033[0m\n");
	printf(" -------------------\n");
	printf("\t By using it, you can view the integers in\n");
	printf("\t for example :\n");
	printf("\t $: show\t will show all the elements in list\n");
	
	// reverse
	printf(" -------------------\n");
	printf(" \033[32;1mreverse\033[0m\n");
	printf(" -------------------\n");
	printf("\t By using it, you can reverse the linked list\n");
	printf("\t for example :\n");
	printf("\t $: reverse\t will reverse the list\n");
	
	// help
	printf(" -------------------\n");
	printf(" \033[32;1mhelp\033[0m\n");
	printf(" -------------------\n");
	printf("\t By using it, you can get details of console command\n");
	printf("\t for example :\n");
	printf("\t $: help\t will list out the command\n");
	
	// exit
	printf(" -------------------\n");
	printf(" \033[32;1mexit\033[0m\n");
	printf(" -------------------\n");
	printf("\t By using it, you can get out of console\n");
	printf("\t for example :\n");
	printf("\t $: exit\t will let you exit.\n");
}


// ###########################
//        Main Section
// ###########################
int main(){
	char input[10];
	printf("\n\033[31;1m");
	printf(" ---------------------------------  \n");
	printf("        Linked List Console  \n");
	printf(" ---------------------------------  \n");
	printf("\n\033[0m");
	while(true) {
		printf("\033[34;1mList $: \033[0m");
		scanf("%s" , input);
		if (strcmp(input, "add") == 0) insert();
		else if (strcmp(input, "remove") == 0) delete();
		else if (strcmp(input, "show") == 0) display();
		else if (strcmp(input, "reverse") == 0) reverse();
		else if (strcmp(input, "help") == 0) help();
		else if (strcmp(input, "exit") == 0) return 0;
		else printf("sorry ! we don't understand, type help for help.\n");
	}
	
	// Done successfully !!!
	return 0;
}

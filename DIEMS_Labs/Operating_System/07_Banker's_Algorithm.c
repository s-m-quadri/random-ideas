
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
    int id;
    int available;
}resource;

typedef struct{
    int id;
    // For each process may differ
    // max = allocated + need
    int *max;
    int *allocated;
    int *need;
}process;

int main(void){
    // 1. Get the number of resource
    int n_resources = 0;
    printf("Enter no. of resources : ");
    scanf("%d", &n_resources);
    resource r[n_resources];

    // 2. Get the number of processes
    int n_process = 0;
    printf("Enter no. of process : ");
    scanf("%d", &n_process);
    process p[n_process];

    // 3. Set the resource details
    printf("Suppose all process have formed dead lock\n");
    printf("thus, how many instances are available for\n");
    for (int i = 0 ; i < n_resources ; i++){
        r[i].id = i+1;
        printf("\tResource #%d : ", r[i].id);
        scanf("%d", r[i].available);
    }

    // 4. Set the process details
    for (int i = 0 ; i < n_process ; i++){
        p[i].id = i+1;
        printf("For Process #%d\n", p[i].id)

        printf("\tMaximum instances required for");
        p[i].max = (int*)calloc(sizeof(int), n_resources);
        for (int j = 0 ; j < n_resources ; j++){
                printf("\t\t Resource #%d : ", r[j].id);
                scanf("%d", &p[i].max[j]);
        }
    }
    
    // TODO
    
    return 0;
}





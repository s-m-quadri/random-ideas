#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int i, j, k, a, b, u, v, n, ne = 1;
int min, mincost = 0, cost[9][9], parent[9];

int find(int);
int uni(int, int);

int main(void){
	printf("Implementation of Krushal's algorithm\n");
	printf("Enter number of vertices : ");
	scanf("%d", &n);
	printf("Enter the cost of adjacency matrix : \n");
	for (i = 0 ; i < n ; i++){
		for (j = 0 ; j < n ; j++){
			scanf("%d", &cost[i][j]);
			if (cost[i][j] == 0)
				cost[i][j] = 999;
		}
	}
	printf("The edges of min cost span tree are : \n");
	while(ne < n){
		for (i = 0, min = 999; i < n; i++){
			for(j = 0 ; j < n ; j++){
				if(cost[i][j] < min){
					min = cost[i][j];
					a = u = i;
					b = v = j;
				}
			}
		}
	}
	u = find(u);
	v = find(v);
	if (uni(u,v)){
		printf("%d edge (%d,%d) = %d\n", ne++, a, b, min);
		mincost += min;
	}
	cost[a][b] = cost[b][a] = 999;
	printf("Minimum cost is = %d\n", mincost);
	getch();
}
int find(int i){
	//while(parent[i])
	  //	i = parent[i];
	return parent[i];
}
int uni(int i, int j){
	if (i != j)
		parent[j] = i;
		return i;
	return 0;
}


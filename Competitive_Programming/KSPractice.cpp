////////////////////////////////////////////////////////////////////////////////
///                             Header Section                               ///
////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

////////////////////////////////////////////////////////////////////////////////
///                            Solution Section                              ///
////////////////////////////////////////////////////////////////////////////////
void solve(int cur_case){
    // 1. Get the input
    int n = 0;
    scanf("%d", &n);
    int c[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &c[i]);
        if(c[i] > n) c[i] = n;
    }
        
    // 2. Calculate actual h_index and print it.
    printf("Case #%d:", cur_case);
    vector<int> h_index(n);
    for(int i = 0 ; i < h_index.size() ; i++){
        // 2.1. Calculate h_index, as for 15 citations of 3rd (out of 5) then
        //      max h_index will be 5, and 15 citations will contribute to all,
        //      it will be 1 1 1 1 1, i.e. it will contribute to all the index
        for(int j = 0 ; j < c[i] ; j++)
            h_index.at(j)++;
        
        // 2.2. If the h_index value is equal or greater than position
        //      then that is actual/valid h_index, just print it!
        int result = 0;
        for(int i = 0 ; i < h_index.size() ; i++)
            if(h_index.at(i) >= (i+1))
                result = (i+1);
        printf(" %d", result);
    }
    printf("\n");
}

////////////////////////////////////////////////////////////////////////////////
///                          Main Function Section                           ///
////////////////////////////////////////////////////////////////////////////////
int main() {
    int test_case = 1;
    scanf("%d", &test_case);
    for (int i = 1 ; i <= test_case ; i++)
        solve(i);
    return 0;
}

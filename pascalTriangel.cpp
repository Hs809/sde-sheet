#include <bits/stdc++.h>
using namespace std;

// Pascal traingle printing function 
vector<vector<int>> generatePascal(int numRows){
    vector<vector<int>>r(numRows);

    for(int i = 0; i < numRows; i++){
        r[i].resize(i+1);
        r[i][0] = r[i][i] = 1;
        for(int j = 1; j < i; j++){
            r[i][j] = r[i-1][j-1] + r[i-1][j];
        }
    }
    return r;
}

//  given row and col and to print that element in pascal traingle
int factorial(int n){
    int factorial = 1;
    for(int i = 2; i <= n; i++){
        factorial = factorial * i;
    }
    return factorial;
}
int getElementPascal(int row, int col){
    return factorial(row) / (factorial(col) * factorial(row - col));
}



int main(){
    int result;
    result = getElementPascal(4,3);
    cout<<result<<endl;
    return 0;
}

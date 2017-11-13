#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0; i < n; i++){
        for (int j=0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int sum1=0, sum2=0;
    for(int i=0; i < n; i++){
        sum1 = sum1 + arr[i][i];
        sum2 = sum2 + arr[i][n-1-i];//need (n-1)
    }
    cout << abs(sum1-sum2);
    
    return 0;
}
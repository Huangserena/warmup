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
    int element[n];
    long long int sum=0;
    for (int i; i < n; i++){
        cin >> element[i];
        
        sum += element[i]; 
    }
    cout << sum;
    return 0;
}
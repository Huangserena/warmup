#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<climits> //added
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int sum=0;
    
    long long int arr[5];
    for (int i=0; i < 5 ; i++){
       cin >> arr[i];
    }
    long long int min = arr[0];// keep eye on how to set min and max.
    long long int max = arr[0];
    for(int i=0; i < 5 ; i++){
         sum = sum + arr[i];
        if ( arr[i] < min){
            min = arr[i];
        }
        if ( arr[i] > max){
            max = arr[i];
        }
    }
        
    long long int minSum = sum - max;
    long long int maxSum = sum - min;
    
    cout << minSum <<" "<< maxSum;
    
    
    return 0;
}
/*
int main() {
    // Enter your code here. Read input from STDIN. Print output to STDOUT 
    long long a[5];
    long long sum = 0;
    for(int i = 0; i < 5; i++)
   {
        cin >> a[i];
        sum += a[i];
    }
    
    sort(a, a+5);//Sorting Elements
    cout << sum - a[4] << " " << sum - a[0] << endl;
    return 0;
}
*/
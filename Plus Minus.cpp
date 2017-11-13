#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    int pos=0, zero=0, neg=0;
    double posF, zeroF, negF;
    for (int i=0; i < n; i++){
        if (arr[i]>0){
            pos++;
        }
        else if(arr[i] <0){
            neg++;
        }
        else{
            zero++;
        }
    }
    posF = (double)pos/n;
    zeroF = (double)zero/n;
    negF = (double)neg/n;;
    cout << fixed << setprecision(6) << posF << endl;
    cout << fixed << setprecision(6) << negF << endl;
    cout << fixed << setprecision(6) << zeroF << endl;
    return 0;
}
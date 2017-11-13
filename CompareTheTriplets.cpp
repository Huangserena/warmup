#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    
    int a=((a0>b0)?1:0) + ((a1>b1)?1:0)+ ((a2>b2)?1:0);
    int b=((b0>a0)?1:0) + ((b1>a1)?1:0)+ ((b2>a2)?1:0);
    //int a=(a0>b0)*1 + (a1>b1)*1+ (a2>b2)*1;    --alternative 
    //int b=(b0>a0)*1 + (b1>a1)*1+ (b2>a2)*1;
    vector <int> result;
    result.push_back(a);
    result.push_back(b);
    return result;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}
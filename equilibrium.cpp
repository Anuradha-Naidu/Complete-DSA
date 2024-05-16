// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int equilibrium(vector<int> &arr, int n){
    
    int total =0;
    for(int i =0; i<n; i++){
        total += arr[i];
    }
    
    int abhiTakKaSum = 0;
    for(int i=0;i<n;i++){
        
        int rightSum = total - abhiTakKaSum - arr[i];
        if(rightSum == abhiTakKaSum){
            return i;
        }
        abhiTakKaSum += arr[i];
    }
    return -1;
}

int main() {
    // Write C++ code here
    int n; 
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    cout << equilibrium(arr, n);
}

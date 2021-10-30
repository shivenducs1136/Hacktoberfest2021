#include<bits/stdc++.h>
using namespace std; 
int main(){

    long long int n; 
    cin>>n; 
    int i,j,k=0; 
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            if(i + j == n && i%2==0 && j%2==0){
               k=1;
                cout<<"YES"<<endl; 
                break; 
            }
        }
        if(k==1){
            break;
        }
    }
    if(k==0){
        cout<<"NO"<<endl; 
    }
    return 0;  
}
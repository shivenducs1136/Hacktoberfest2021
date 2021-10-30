#include<bits/stdc++.h>
using namespace std; 
int main(){

    int arr[5][5]; 
    int i,j,k,l,m; 
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin>>arr[i][j]; 
            if(arr[i][j] == 1){
                l = i+1; m =j+1 ; 
            }
        }
    }

    l = 3 - l; 
    m = 3- m ; 
    if(l<0) l = l *-1; 
    if(m<0) m = m *-1; 

    cout<<l+m<<endl; 


    return 0; 
}
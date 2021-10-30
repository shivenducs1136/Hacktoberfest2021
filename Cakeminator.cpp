#include<bits/stdc++.h>
using namespace std; 

int main(){
    
    int r,c; 
    cin>>r>>c; 
    char arr[r][c];
    int brr[r][c];  
    int i,j,Scount=0; 
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
            if(arr[i][j] == 'S'){
                brr[i][j] = -1; 
            } 
            else{
                brr[i][j] = 0; 
            }
        }
    }
    bool t=true;
    int count=0; 
    for(i=0;i<r;i++){
        t=true; 
        for(j=0;j<c;j++){
           for(int k =0 ;k<c;k++){
               if(brr[i][k] == -1){
                   t=false; 
                   break; 
               }
           }
           if(t){
               brr[i][j]++; 
           }
        }
    }
  for(j=0;j<c;j++){
      t=true ; 
      for(i=0;i<r;i++){
          for(int k=0;k<r;k++){
              if(brr[k][j] == -1){
                  t=false;
                  break;
              }
          }
          if(t){
              brr[i][j]++; 
          }
      }
        
    }
    // for(i=0;i<r;i++){
    //     for(j=0;j<c;j++){
    //         cout<<brr[i][j]<<" "; 
    //     }
    //     cout<<endl;
    // }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(brr[i][j]==1 || brr[i][j] == 2){
                count++; 
                if(brr[i][j]==2){
                    brr[i][j] = 3; 
                }

            }
        }
    }
    cout<<count<<endl; 
    return 0;
}
#include <iostream>
using namespace std;
  int main(){
       int b[6] = {0,400,800,1200,1600,2000};
            int e;
             cin>>e;
           if(b[0] <= e && e <= b[1]){
               if((e-b[0])<(b[1]-e)){
                    cout<<e-b[0];
               }else{
                   cout<<b[1]-e;
               }
           }
           if(b[1] <= e && e <= b[2]){
               if((e-b[1])<(b[2]-e)){
                    cout<<e-b[1];
               }else{
                   cout<<b[2]-e;
               }
           }
           if(b[2] <= e && e <= b[3]){
               if((e-b[2])<(b[3]-e)){
                    cout<<(e-b[2]);
               }else{
                   cout<<(b[3]-e);
               }
           }
           if(b[3] <= e && e <= b[4]){
               if((e-b[3])<(b[4]-e)){
                    cout<<(e-b[3]);
               }else{
                   cout<<(b[4]-e);
               }
           }
           if(b[4] <= e && e <= b[5]){
               if((e-b[4])<(b[5]-e)){
                    cout<<e-b[4];
               }else{
                   cout<<b[5]-e;
               }
           }
       
       return 0;

  }

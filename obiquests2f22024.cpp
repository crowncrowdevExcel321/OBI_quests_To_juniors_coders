#include <iostream>
#include <string>
#include <unordered_set>
#include <limits>
using namespace std;
   bool verifysString(const string& parameter, const string& enter){
    unordered_set<char> allowed(parameter.begin(),parameter.end());
      for (char c : enter){
        if (allowed.find(c) ==  allowed.end()){
          return false;
        }
     }
      return true;
   }
 int main(){
   cin.tie(NULL);
   ios::sync_with_stdio(false);
 /*inteiros com número de carcteres +
  o números de carcteres da mensagem enviada*/
   int k;
    int n;
     cin>>k>>n;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
         string kline;
          getline(cin,kline);
            string nline;
             getline(cin,nline);
              /*conta o tamanho da string*/
         int auxkl = kline.length();
         int auxnl = nline.length();
           if((k!=auxkl)||(n!=auxnl)){
              cout<<"N(n)";
               return 0;
           }
      if (verifysString(kline,nline)){
        cout<<"S(y)"<<endl;

      }else{
        cout<<"N(n)"<<endl;
      }
            
             
        return 0;
 }

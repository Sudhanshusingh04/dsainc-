// #include<iostream>
// using namespace std;
// int sum(int a ,int b){
    
//     int ans=a+b;
//     return ans;

// }
//  int mul(int a, int b){
//    int  mul=a*b;
//    return mul;
//  }

// int main(){
//     int a,b;
//     cout<<"enter  here";
//     cin>>a>>b;
// cout<<sum(a,b)<<endl;
// cout<<mul(a,b);
// }



// question check number is prime or not or factorial 

#include<iostream>
using namespace std;
  //code ==>function for prime num function is
  bool prime(int n){
    int ans=1;
     if(n<2)
            return 0;

    for(int i=2; i<n; i++){
         
           if(n%i==0){
            return 0;
          }

    }
    return 1;
  }

  // code=> function for factorial check;

  int fac(int n){
    int ans=1;
    for(int i=1;i<=n; i++){
          ans=ans*i;
        }
        return ans;
  }


int main(){
  int a,b;
  cout<<"enter here ";
  cin>>a>>b;
  cout<<prime(a)<<endl;
  cout<<fac(a)<<endl;
  cout<<fac(b)<<endl;
 cout<<prime(b)<<endl;  
 cout<<prime(b-a)<<endl;  
 cout<<fac(b-a)<<endl;  



}

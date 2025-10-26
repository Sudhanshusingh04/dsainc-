// decimal to binary lec 12

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "enter here ";
//     cin >> num;
//     int rem,ans=0,mul=1;
   

//     while (num>0)
//     {
//         rem = num % 2;
//         num = num / 2;
//         ans = rem * mul + ans;

//         mul = mul * 10;
       
//     }
    
//      cout << ans <<endl;
// }



// decimal to binary  

#include <iostream>
using namespace std;
int main()
{
   
int num,mul,rem,ans;
ans=0;
mul=1;
cout<<"enter here";
cin>>num;
while (num>0)
{
    rem=num%10;
    num=num/10;
    ans=rem*mul+ans;
    mul=mul*2;

}
cout <<ans;
     
}



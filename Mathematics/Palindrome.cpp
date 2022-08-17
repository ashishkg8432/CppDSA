#include<iostream>
using namespace std;

bool is_Palindrome(int n){

    int rev=0;
    int temp=n;
    while(temp!=0){
    
    int Last_digit=temp%10;
    rev=rev*10+Last_digit;
    temp=temp/10;
    }
   return (rev==n);
}



int main()
{
int x;
cin>>x;
cout<<is_Palindrome(x);
return 0;
}

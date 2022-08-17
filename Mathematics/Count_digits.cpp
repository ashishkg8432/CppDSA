#include<iostream>

using namespace std;

int count_digits(int n)
{
    int count =0;
while(n!=0)
{
    n=n/10;
    ++count;
}

return count;
}
int main(){

int x;
cin>>x;
cout<<count_digits(x);
return 0;
}
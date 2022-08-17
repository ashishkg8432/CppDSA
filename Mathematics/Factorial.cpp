// #include<bits/stdc++.h>
// using namespace std;
// //recursive way
// int Factorial(int n)
// {
//     if(n==0)
//     return 1;
//     return n*Factorial(n-1);
// }


// int main()
// {
// int x;
// cin>>x;
// cout<<Factorial(x);
// }




//iterative way which is better than recursive
#include<bits/stdc++.h>
using namespace std;

int Factorial(int n)
{
    int res=1;
    for(int i=2;i<=n;i++)
    {
    res=res*i;
    }
     return res;
}


int main()
{
int x;
cin>>x;
cout<<Factorial(x);
}
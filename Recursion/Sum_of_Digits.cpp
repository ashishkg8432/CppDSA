// #include<bits/stdc++.h>
// using namespace std;

// int sum(int n)
// {
//     if(n==0)
//     return 0;
//     return sum((n/10))+(n%10);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<sum(n);
//     return 0;
// }
//iterative solution
#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int res=0;
    while(n!=0)
    {
        res=res+(n%10);
        n=n/10;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
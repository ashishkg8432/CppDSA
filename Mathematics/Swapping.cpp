#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two nos.:";
    cin>>a>>b;
    cout<<"Before swapping:"<<a<<" "<<b;
    a=a+b;//a^b; using bitwise operator
    b=a-b;//a^b;
    a=a-b;//a^b;
    cout<<endl;
    cout<<"After swapping:"<<a<<" "<<b;
    return 0;
}
//using third variable
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b,temp;
//     cout<<"Enter two nos.:";
//     cin>>a>>b;
//     cout<<"Before swapping:"<<a<<" "<<b;
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<endl;
//     cout<<"After swapping:"<<a<<" "<<b;
//     return 0;
    
// }
#include<bits/stdc++.h>
using namespace std;
string isPalindrome(string str)
{
    for(int i=0;i<str.length()/2;i++)
    {
        if(str[i]!=str[str.length()-i-1])
        {
            return "No";
        }
    }
    return "Yes";
}
int main()
{
    string str;
    cin>>str;
    cout<<isPalindrome(str);
    return 0;
}
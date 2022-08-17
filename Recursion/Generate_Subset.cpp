#include<bits/stdc++.h>
using namespace std;

void subset(string s,string cur,int index)
{
    if(index==s.length())
    {
        cout<<cur<<" ";
        return;
    }
    subset(s,cur,index+1);
    subset(s,cur+s[index],index+1);
}
int main()
{
    string s,cur;
    int index;
    getline(cin,s);
    subset(s,"",0);
    return 0;
}
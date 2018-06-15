#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n==0)
        cout<<"1";
    else if(n>=2 || n<=22)
        cout<<"25";
    else if(n==23)
        cout<<"24";
    else if(n==25)
        cout<<"50";
    else if(n>=26)
        cout<<"00";
}

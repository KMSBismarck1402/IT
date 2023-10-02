#include <bits/stdc++.h>
#include <string>
using namespace std;

bool kiemtraPalindrome(string a, queue<char> q1)
{
    bool kt=true;
    int i=0;
    while(!q1.empty()){
        if(q1.front()!=a[i]){
            kt=false;
            break;
        }
        i++;
        q1.pop();
    }
    return kt;
}

int main()
{
    queue<char> q1;
    string a;
    getline(cin,a);
    for(int i=a.length()-1;i>=0;i--){
        q1.push(a[i]);
    }
    if(kiemtraPalindrome(a,q1)==true){
            cout<<"YES";
    }
    else{
            cout<<"NO";
    }
    return 0;
}

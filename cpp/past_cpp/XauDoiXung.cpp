#include <bits/stdc++.h>
using namespace std;

int tab[26];

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        tab[s[i] - 'A']++;
    }
    int odd = 0, pos = -1;
    for (int i = 0; i < 26; i++) {
        if (tab[i] & 1) {
            odd++;
            pos = i;
        }
    }
    if (odd > 1) {
        cout << "NO SOLUTION" << endl;
        return;
    }
    string ans, ans2;
    for (int i = 0; i < 26; i++) {
        if (tab[i] % 2 == 0) {
            ans += string(tab[i] / 2, i + 'A');
            ans2 = string(tab[i] / 2, i + 'A') + ans2;
        }
    }
    cout << ans << (pos != -1 ? string(tab[pos], pos + 'A') : "") << ans2;
}

int main()
{
	int i,d,n,l,j,o,q=0,ck=-1;
	char v;
	int a[26];
	memset(a,0,sizeof(a));
	string s;
	cin >> s;
	l = s.length();
	for(i=0;i<l;i++)
    {
        d=s[i]-65;
        a[d]++;
    }
    d=0;
    for(i=0;i<l;i++)
    {
        if(a[i]%2!=0)
            d++;
    }
 /*   for(i=0;i<26;i++)
        cout << a[i] <<" ";
    cout <<"\n"; */
    if( (d==1) && (l%2==1) )
        d=0;
    if(d==0)
    {
        for(i=0;i<26;i++)
        {
            if(a[i]%2!=0)
                ck=i;
        }
        n=l/2;
        i=0;
        o=a[i]/2;
  //      cout << "n= "<< n<<" o= "<<o<<"\n";
        while(n--)
        {
            if(i!=ck)
            {
                if(o<a[i] && a[i]!=0)
                {
                    v = i + 65;
                    cout << v;
                    o++;
                }
                else
                {
                    i++;
                    n++;
                    o=a[i]/2;
                }
            }
            else
            {
                if(o+1<a[i] && a[i]!=0)
                {
                    v = i + 65;
                    cout << v;
                    o++;
                }
                else
                {
                    i++;
                    n++;
                    o=a[i]/2;
                }
            }
        }
  //      cout << "i= "<< i<<", o= "<<o<<"\n";
        if(l%2!=0)
        {
            /*
            n=1;
            o--;
            while(n--)
            {
                if(o<a[i] && a[i]!=0)
                {
                    v = i + 65;
                    cout << v;
                    o++;
                    cout << "\n check1 \n";
                }
                else
                {
                    i++;
                    n++;
                    o=a[i]/2;
                    cout << "\n check2 \n";
                }
            }
            if(o<a[i]&&a[i]!=0)
                i=i;
            else
                i--;
            cout << "i= "<< i<<", o= "<<o<<"\n";
            o++;
            q=1;*/
            v= ck+65;
            cout <<v;
        }
        n=l/2;
 //       if(q==0)
            o=a[i]/2;
  //      else
   //         o--;
 //       cout << "i= "<< i<<", o= "<<o<<"\n";
        while(n--)
        {
            if(i!=ck)
            {
                if(o<a[i] && a[i] !=0 )
                {
                    v = i + 65;
                    cout << v;
                    o++;
                }
                else
                {
                    i--;
                    n++;
                    o=a[i]/2;
                }
            }
            else
            {
                if(o+1<a[i] && a[i] !=0 )
                {
                    v = i + 65;
                    cout << v;
                    o++;
                }
                else
                {
                    i--;
                    n++;
                    o=a[i]/2;
                }
            }
        }
    }
    else
        cout << "NO SOLUTION";
}

/*
AABCAACB
ABABABA
AAAA
AABBXXCCC
AABBCCDDD
AABBCCXXYYZZDDD
AABBCCXXYYDDDDD
*/

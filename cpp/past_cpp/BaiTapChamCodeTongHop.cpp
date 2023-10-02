#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Bài của Vũ Minh Triết no stolen pls
void b1();  void b2();  void b3();  void b4();
void b5();  void b6();  void b7();  void b8();
void b9();  void b10(); void b11(); void b12();
void b13(); void b14(); void b15(); void b16();
void b17(); void b18(); void b19(); void b20();
void b21(); void b22(); void b23(); void b24();
void b25(); void b26(); void b27(); void b28();
void b29(); void b30(); void b31(); void b32();
void b33(); void b34(); void b35(); void b36();
void b37(); void b38(); void b39(); void b40();
void b41(); void b42(); void b43(); void b44();
void b45(); void b46(); void b47(); void b48();
void b49(); void b50(); void b51(); void b52();
void b53(); void b54(); void b55(); void b56();
void b57(); void b58(); void b59(); void b60();
void b61(); void b62(); void b63(); void b64();
void b65(); void b66(); void b67();
//
signed main()
{
	freopen("test.inp","r",stdin);
	freopen("test.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll num;
	//cout << "STT bai: ";
	cin >> num;
	switch (num)
	{
		case 1:  b1();  break;   case 2:  b2();  break;   case 3:  b3();  break;   case 4:  b4();  break;
		case 5:  b5();  break;   case 6:  b6();  break;   case 7:  b7();  break;   case 8:  b8();  break;
		case 9:  b9();  break;   case 10: b10(); break;   case 11: b11(); break;   case 12: b12(); break;
		case 13: b13(); break;   case 14: b14(); break;   case 15: b15(); break;   case 16: b16(); break;
		case 17: b17(); break;   case 18: b18(); break;   case 19: b19(); break;   case 20: b20(); break;
		case 21: b21(); break;   case 22: b22(); break;   case 23: b23(); break;   case 24: b24(); break;
		case 25: b25(); break;   case 26: b26(); break;   case 27: b27(); break;   case 28: b28(); break;
		case 29: b29(); break;   case 30: b30(); break;   case 31: b31(); break;   case 32: b32(); break;
		case 33: b33(); break;   case 34: b34(); break;   case 35: b35(); break;   case 36: b36(); break;
		case 37: b37(); break;   case 38: b38(); break;   case 39: b39(); break;   case 40: b40(); break;
		case 41: b41(); break;   case 42: b42(); break;   case 43: b43(); break;   case 44: b44(); break;
		case 45: b45(); break;   case 46: b46(); break;   case 47: b47(); break;   case 48: b48(); break;
		case 49: b49(); break;   case 50: b50(); break;   case 51: b51(); break;   case 52: b52(); break;
		case 53: b53(); break;   case 54: b54(); break;   case 55: b55(); break;   case 56: b56(); break;
		case 57: b57(); break;   case 58: b58(); break;   case 59: b59(); break;   case 60: b60(); break;
		case 61: b61(); break;   case 62: b62(); break;   case 63: b63(); break;   case 64: b64(); break;
		case 65: b65(); break;   case 66: b66(); break;   case 67: b67(); break;
	}
	return 0;
}

void b1()
{
    cout<<"Hello World @ Code Online";
}

void b2()
{
    int a,b;
    cin>>a>>b;
    cout<<a+b;
}

void b3()
{
    int a,b;
    cin>>a>>b;
    cout<<a+b<<" "<<a-b<<'\n';
    cout<<a*b<<" ";
    cout<<fixed<<setprecision(2)<<a/float(b);
}

void b4()
{
    int a;
    cin>>a;
    cout<<a*a<<" "<<a*a*a<<" "<<a*a*a*a;
}

void b5()
{
    unsigned long long int a,b,x;
    cin>>a>>b;
    x=a+b;
    cout<<x;
}

void b6()
{
    long long int dt,cv,a,b;
    cin>>a>>b;
    dt=a*b;
    cv=(a+b)*2;
    cout<<cv<<" "<<dt;
}

void b7()
{
    double R, S, V;
    const double pi=3.14;
    cin>>R;
    S=4*pi*R*R;
    V=(4/float(3))*pi*R*R*R;
    cout<<fixed<<setprecision(2)<<S<<" "<<V;
}

void b8()
{
    int dd,mm,yyyy;
    scanf("%d",&dd);
    scanf("%d",&mm);
    scanf("%d",&yyyy);
    printf("%02d/%02d/%04d", dd, mm, yyyy);
}

void b9()
{
    int second;
    scanf("%d",&second);
    printf("%02d:%02d:%02d", second/3600 , second%3600/60, second%60);
}

void b10()
{
    int a,b,x;
    cin>>a>>b;
    if(a>=b) x=a;
    else x=b;
    cout<<x;
}

void b11()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=a;
    if(b>c) x=b;
    if(c>x) x=c;
    cout<<x;
}

void b12()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=a;
    if(b>c) x=b;
    if(c>x) x=c;
    if(d>x) x=d;
    cout<<x;
}

void b13()
{
    float a, b, c;
    cin>>a>>b>>c;
    if (a == 0)
    {
        if (b == 0)
        {
            cout<<"VN";
        }
        else
        {
            cout<<fixed<<setprecision(2)<<"x = "<<-c/b;
        }
        return;
    }
    float delta = b*b - 4*a*c;
    float x1,x2;
    if (delta > 0)
    {
        x1 = ((-b + sqrt(delta)) / float(2*a));
        x2 = ((-b - sqrt(delta)) / float(2*a));
        cout<<fixed<<setprecision(2)<<max(x1,x2)<<" "<<min(x1,x2);
    }
    else if (delta == 0)
    {
        x1 = (-b / (2 * a));
        cout<<fixed<<setprecision(2)<<"x = "<<x1;
    }
    else
    {
        printf("VN");
    }
}

void b14()
{
    float a, b, c, p, s=0;
    cin>>a>>b>>c;
    if((a+b>c) && (a+c>b) && (b+c>a)){
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<fixed<<setprecision(2)<<p*2<<" "<<s;
    }
    else cout<<"NO";
}

void b15()
{
    ll n;
	cin >> n;
    if (n == 1 || n == 3 || n == 5 || n == 7
        || n == 8 || n == 10 || n == 12)
            cout << "31";
    else if (n == 2) cout << "28";
    else cout << "30";
}

void b16()
{
    int tongphut;
    cin>>tongphut;
    int tongtien=25000;
    if(tongphut>200)
        tongtien=tongtien+600*50+400*150+200*(tongphut-200);
    else if(tongphut>50)
        tongtien=tongtien+600*50+400*tongphut-50;
    else if(tongphut<=50)
        tongtien=tongtien+600*tongphut;
    cout<<"So tien = "<<tongtien;
}

void b17()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    cout<<i<<" ";
}

void b18()
{
    int n,s=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    s=s+i;
    cout<<s;
}

void b19()
{
    int n;
    string s;
    cin>>n;
    getline(cin,s);
    getline(cin,s);
    while(n>0)
    {
        cout<<s<<'\n';
        n--;
    }
}

void b20()
{
	ll n, res;
	cin >> n;
    res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    cout << res;
}

void b21()
{
    int n;
    double s=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    s=s+1/float(i);
    cout<<fixed<<setprecision(6)<<s;
}

void b22()
{
	ll n,m;
	string s;
	cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << '*';
        cout << "\n";
    }
}

void b23()
{
    int n;
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)

        cout<<endl;
    }
}

void b24()
{
    int m,n;
    cin>>m>>n;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==1 || i==m)
                cout<<"*";
            else
            {
                if(j==1||j==n)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }
}

bool check(int n)
{
    if(n<2) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
    for(int i=5; i*i<=n; i+=6)
    {
        if(n%i==0 || n%(i+2)==0)
            return false;
    }
    return true;
}
void b25()
{
    int n;
    cin>>n;
    if(check(n)==true)
        cout<<"TRUE";
    else
    cout<<"FALSE";
}

void b26()
{
	ll n,res;
	cin >> n;
    if (n <= 0)
    {
        cout << "FALSE";
        return;
    }
    res = n + 1;
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            //cout << i << " ";
            res += i;
        }
    }
    //cout << res << "\n";
    if (res == 2*n)
        cout << "YES";
    else
        cout << "NO";
}

void b27()
{
    int n;
    cin >> n;
    int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
    cout << 1;
    int i = 3, a;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    cout << a;
}

void b28()
{
    long long int n;
    cin>>n;
    while(n>0)
    {
        cout<<n%10;
        n=n/10;
    }
}

void b29()
{
    long long int n, m=0;
    cin>>n;
    while(n>0)
    {
    int t=n%10;
    if (t>m) m=t;
    n=n/10;
    }
    cout<<m;
}

void b30()
{
    long long int n,n1,n2=0;
    cin>>n;
    n1=n;
    while(n>0)
    {
        n2= n2*10+n%10;
        n=n/10;
    }
    cout<<n1+n2;
}

void b31()
{
    int n;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i;
            n=n/i;
            if(n>i)
                cout<<"*";
        }
    }
}
//bài t ai lụm là chó

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

void b32()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<" "<<a*b/gcd(a,b);
}

void b33()
{
    int n=1,maxx=0,minn=1000000,d=0;
    while(n!=0)
    {
        cin>>n;
        if(n>maxx)
            maxx=n;
        if(n<minn &&n!=0)
            minn=n;
        d++;
    }
    cout<<maxx<<" "<<minn<<" "<<d-1;
}

bool kt(int n)
{
    if(n<2) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
    for(int i=5; i*i<=n; i+=6)
    {
        if(n%i==0 || n%(i+2)==0)
            return false;
    }
    return true;
}

void b34()
{
    int n;
    cin>>n;
    if(n<=2) cout<<"NOT FOUND";
    else
    {
        for(int i=1; i<n; i++)
        {
            if(kt(i)==true)
            {
                cout<<i<<" ";
            }
        }
    }
}

void b35()
{
    int n,s=0,dem=0;
    cin>>n;
    if(n<=2) cout<<"NOT FOUND";
    else
    {
        for(int i=1; i<=n; i++)
        {
            if(kt(i)==true)
            {
                s=s+i;
                dem++;
            }
        }
    }
    cout<<fixed<<setprecision(3)<<s/float(dem);
}

void b36()
{
    int n = 1000000;
    bool check[n + 1];
    for (int i = 2; i <= n; i++)
    {
        check[i] = true;
    }
    for (int i = 2; i <= n; i++)
    {
        if (check[i] == true)
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                check[j] = false;
            }
        }
    }
    int k,dem=0;
    cin>>k;
    for(int i=1; i<=n; i++)
    {
        if(dem<=k)
        {
            if(check[i]==true)
            cout<<i<<" ";
            dem++;
        }
    }
}

void b37()
{
    int n,a,maxx=-1000000, minn=10000000;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        if(a>maxx)
            maxx=a;
        if(a<minn)
            minn=a;
    }
    cout<<maxx<<" "<<minn;
}

void b38()
{
    int n,a,maxx=-1000000, jmaxx=1;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        if(a>maxx)
        {
            maxx=a;
            jmaxx=i;
        }
    }
    cout<<jmaxx;
}

void b39()
{
    int n,s=0,a;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        s=s+a;
    }
    cout<<fixed<<setprecision(2)<<s/float(n);
}

void b40()
{
    int n,s=0,a[100000];
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    s=s/float(n);
    for(int i=1; i<=n; i++)
        if(a[i]>s)
            cout<<i;
}

bool ktnt(int n)
{
    int a = 2;
    while ((n % a != 0) && (a <= n/a))
        a++;
    return a > n/a;
}

void insnt(int a[], int n)
{
    for(int i=1;i<=n;i++)
        if(ktnt(a[i]))
            cout<<a[i]<<" ";
}
void b41()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    insnt(a,n);
}


void insnt2(int a[], int n)
{
    int s=0, dem=0;
    for(int i=1;i<=n;i++)
    if(ktnt(a[i]))
    {
        s=s+a[i];
        dem++;
    }
    cout<<fixed<<setprecision(2)<<s/float(dem);
}
void b42()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    insnt2(a,n);
}

void b43()
{
	ll n, a, b;
	bool ok = false;
	cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        b = trunc(sqrt(a));
        if (b*b == a)
        {
            ok = true;
            cout << a << " ";
        }
    }
    if (ok == false)
        cout << "NOT FOUND";
}

void b44()
{
    int n, a[10000],maxx=-1000000;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]>maxx&&a[i]<0) maxx=a[i];
    }
    if(maxx==-1000000) cout<<"NOT FOUND";
        cout<<maxx;
}

void b45()
{
    int n, a[10000],b[10000],c=0,d=0,x;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        if(x>0)
        {
            c++;
            a[c]=x;
        }
        if(x<0)
        {
            d++;
            b[d]=x;
        }
    }
    if(c==0)
        cout<<"NOT FOUND";
    else
        for(int i=1; i<=c; i++)
            cout<<a[i]<<" ";
    cout<<endl;
    if(d==0)
        cout<<"NOT FOUND";
    else
        for(int i=1; i<=d; i++)
            cout<<b[i]<<" ";
}

void b46()
{
    int n, a[10000];
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1, a+1+n);
    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=n; i>=1; i--)
        cout<<a[i]<<" ";
}

void b47()
{
    int n, a[10000],max1=-1000000,max2=-1000000,max3=-1000000;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1, a+1+n);
    for(int i=n; i>=1; i--)
    {
        if(a[i]>max1) max1=a[i];
        else
        {
            if(a[i]>max2)
                max2=a[i];
            else
                if(a[i]>max3)
                    max3=a[i];
        }
    }
    cout<<max1<<" "<<max2<<" "<<max3;
}

void b48()
{
    int n,a[1000],d[1000],dem=0;
    for(int i=0; i<=1000; i++) d[i]=0;
        cin>>n;
    for(int i=1; i<=n;i++)
    {
        cin>>a[i];
        if(d[a[i]]==0)
            dem++;
        d[a[i]]++;
    }
    for(int i=0; i<=1000; i++)
    {
        if(d[i]!=0)
            cout<<i<<" "<<d[i]<<endl;
    }
}

void b49()
{
    ll n;
	ll a[1001], d=0, dd[1001];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		dd[a[i]]++;
		if (dd[a[i]] == 1)
			d++;
	}
	cout << d << "\n";
	for (int i = 0; i <= n; i++)
	{
		if (dd[a[i]] != 0)
			cout << a[i] << " " << dd[a[i]] << "\n";
		dd[a[i]] = 0;
	}
}

void b50()
{
    ll n, res = 0, m = 0;
	ll a[1001], d=0, dd[1001];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		dd[a[i]]++;
	}
	for (int i = 0; i <= 100; i++)
	{
		if (dd[a[i]] > m)
		{
			m = dd[a[i]];
			res = a[i];
		}
	}
	cout << res << " " << m;
}

bool IsGrow2(int a[], int n)
{
    for(int i = 0; i < n-1; i++)
    if(a[i] > a[i+1])
        return false;
    return true;
}

void b51()
{
    int n,a[1000];
    cin>>n;
    for(int i=0; i<n;i++)
        cin>>a[i];
    if(IsGrow2(a,n))
        cout<<"TRUE";
    else
        cout<<"FALSE";
}

void b52()
{
    ll n, a[1001];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n/2; i++)
	{
		if (a[i] != a[n-i+1])
		{
			cout << "FASLE";
			return;
		}
	}
	cout << "TRUE";
}

string binary(ll n)
{
	char c;
	string res = "";
	while (n != 0)
	{
		c = n%2 + 48;
		//cout << c << " ";
		res = c + res;
		n = n / 2;
	}
	return res;
}

void b53()
{
	ll n;
	cin >> n;
	string n2 = binary(n);
	cout << n2;
}

void b54()
{
    ll n, m;
	cin >> n >> m;
	ll a[n+3][m+3];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
}

void b55()
{
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            cin>>a[i][j];
    }
    for(int i=1; i<=n; i++)
    {
        int s=0;
        for(int j=1; j<=m; j++)
            s+=a[i][j];
        cout<<s<<" ";
    }
    cout<<endl;
    for(int i=1; i<=m; i++)
    {
        int s=0;
        for(int j=1; j<=n; j++)
            s=s+a[j][i];
        cout<<s<<" ";
    }
}

void b56()
{
    ll n, m;
	cin >> n >> m;
	ll a[n+3][m+3];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j];
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << a[j][i] << " ";
		}
		cout << "\n";
	}
}

void b57()
{
    ll n;
	cin >> n;
	ll a[n+3][n+3];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (a[i][j] != a[j][i])
			{
				cout << "FALSE";
				return;
			}
		}
	}
	cout << "TRUE";
}

void b58()
{
    ll n;
	cin >> n;
	ll a, res = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a;
			if (i == j)
			{
				res += a;
			}
		}
	}
	cout << fixed << setprecision(2) << double(double(res) / n);
}

void b59()
{
    ll n, m;
	cin >> n >> m;
	ll a[n+3][m+3], b[n+3][m+3], c[n+3][m+3];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m ;j++)
			cin >> a[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m ;j++)
			cin >> b[i][j];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}
}

void b60()
{
    string s;
    getline(cin,s);
    cout<<"I love "<<s;
}

void b61()
{
    string s = "";
	getline(cin,s);
	bool b = true;
	ll d = 0;
	for (int i = 0; i <= s.size(); i++)
	{
		if (b == true && s[i] != ' ')
		{
			b = false;
			d++;
		}
		if (s[i] == ' ')
			b = true;
	}
	cout << d;
}

void b62()
{
string s = "", res = "";
	getline(cin,s);
	ll l = 0;
	ll r = s.size()-1;
	while (s[l] == '/')
		l++;
	while (s[r] == '/')
		r--;
	for (int i = l; i <= r; i++)
	{
		if (s[i] == '/' && res[res.size()-1] != '/')
			res.push_back('/');
		else if (s[i] != '/')
			res.push_back(s[i]);
	}
	cout << res;
}
//stealling code = gay
void b63()
{
    string s = "";
	getline(cin,s);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= '1' && s[i] <= '9')
			continue;
		else
		{
			cout << "FALSE";
			return;
		}
	}
	cout << "TRUE";
	return;
}

void b64()
{
    string s = "";
	getline(cin,s);
	bool ok = true;
	for (int i = 0; i < s.size(); i++)
	{
		if (ok == true && s[i] != ' ')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			ok = false;
		}
		else if (ok == false && s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
		else if (s[i] == '.' || s[i] == '!' || s[i] == '?')
			ok = true;
	}
	cout << s;
}

void b65()
{
    string s = "", res = "";
	getline(cin,s);
	for (int i = s.size()-1; i >= 0; i--)
	{
		if (s[i] == ' ')
			break;
		res = s[i] + res;
	}
	cout << res;
}

void b66()
{
    ll dd[300];
	for (int i = 0; i < 300; i++)
		dd[i] = 0;
	string s = "", res = "";
	getline(cin,s);
	for (int i = 0; i < s.size(); i++)
	{
		dd[s[i]]++;
	}
	char c;
	cin >> c;
	cout << dd[c];
}

void b67()
{
    string s = "", t = "";
	getline(cin,s);
	getline(cin,t);
	ll dem = 0;
	while (s.find(t) != -1)
	{
		dem++;
		s.erase(s.find(t),1);
	}
	//s.erase(s.find(t),t.size());
	//cout << s << "\n";
	cout << dem;
}
//bon an cap code dbrr nha

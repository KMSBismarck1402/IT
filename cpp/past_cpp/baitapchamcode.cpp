#include<bits/stdc++.h>
#define ll long long
using namespace std;
//
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

/******************************************************************************************************************/
const ll maxn = 1e6;
bool nt[maxn+6];

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return (b,a%b);
}

void sieve()
{
    nt[1] = false;
    nt[2] = true;
    for (int i = 3; i <= maxn; i += 2)
        nt[i] =true;
    for (int i = 4; i <= maxn; i += 2)
        nt[i] = false;
    for (int i = 2; i*i <= maxn; i++)
    {
        if (nt[i] == true)
        {
            for (int j = i*i; j <= maxn; j += 2*i)
                nt[j] = false;
        }
    }
}

bool isprime(ll n)
{
    if (n == 2 || n == 3)
        return true;
    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;
    ll k = 5;
    ll m = trunc(sqrt(n));
    while (k <= m)
    {
        if (n % k == 0 || n % (k+2) == 0)
            return false;
    }
    return true;
}

ll fact(ll mu, ll a)
{
    if (mu == 0)
        return 1;
    ll t = fact(mu/2, a) % a;
    if (mu % 2 == 0)
        return (t*t % a);
    else
        return (t*t*2 % a);
}
//
void b1()
{
	cout << "Hello World @ Code Online";
}

void b2()
{
	ll a,b;
	cin >> a >> b;
	cout << a+b;
}

void b3()
{
	double a,b;
	cin >> a >> b;
	cout << a+b << " " << a-b << "\n";
	cout << a*b << " " << setprecision(2) << fixed << a/b;
}

void b4()
{
	ll n, m;
	cin >> n;
	m = n;
	for (int i = 2; i <= 4; i++)
	{
		m*=n;
		cout << m << " ";
	}
}

void b5()
{
	ll a,b;
	cin >> a >> b;
	cout << a + b;
}

void b6()
{
	ll a,b;
	cin >> a >> b;
	cout << (a + b) * 2 << " " << a*b;
}

void b7()
{
	double n,s,v;
	cin >> n;
	s = 4 * 3.14 * n * n;
	v = 3.14 * n * n * n * 4/3;
	cout << fixed << setprecision(2) << s << " ";
	cout << fixed << setprecision(2) << v;
}

void b8()
{
	string d,m,y;	
	cin >> d >> m >> y;
	while (d.size()<2)
		d='0'+d;
	while (m.size()<2)
		m='0'+m;
	while (y.size()<4)
		y='0'+y;
	cout << d << "/" << m << "/" << y;
}

void b9()
{
	ll h,m,s;
		cin >> s;
	h = s / 3600;
	s = s % 3600;
	m = s / 60;
	s = s % 60;
	if (h/10 == 0) cout << 0;
	cout << h << ":";
	if (m/10 == 0) cout << 0;
	cout << m << ":";
	if (s/10 == 0) cout << 0;
	cout << s;
}

void b10()
{
	ll a,b;
	cin >> a >> b;
	cout << max(a,b);
}

void b11()
{
	ll a,b,c;
	cin >> a >> b >> c;
	cout << max(max(a,b),c);
}

void b12()
{
	ll a,b,c,d;
	cin >> a >> b >> c >> d;
	cout << max(max(a,b),max(c,d));
}

void b13()
{
	double a,b,c,d;
	double denta, cdt;
	cin >> a >> b >> c;
	denta = b*b - 4*a*c;
	if (a == 0 && b == 0 && c == 0)
        cout << "VSN";
    else
        if (denta < 0) cout << "VN";
	else
        if (denta == 0) cout << fixed << setprecision(2) << "x = " << - b / (2*a);
    else
    {
        cdt = sqrt(denta);
        cout << fixed << setprecision(2) << (-b -cdt) / 2*a << " " << (-b+cdt)/ 2*a;
    }
}

void b14()
{
	double a,b,c,p,s;
	cin >> a >> b >> c;
	if (a+b <= c && b+c <= a && c+a <= b)
    {
        cout << "NO";
        return;
    }
	p = (a + b +c) / 2;
	s = sqrt(p * (p-a) * (p-b) * (p-c));
	cout << fixed << setprecision(2) << 2*p << " " << s;
	return;
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
//
void xuli(ll cost,ll val, ll *res,ll *n)
{
    *res += cost * min(*n,val);
    *n -= (*n>val ? val : *n);
}

void b16()
{
	ll n, res;
	cin >> n;
    res = 25000;
    xuli(600,50,&res,&n);
    xuli(400,150,&res,&n);
    xuli(200,1e18,&res,&n);
    cout << res;
}
//
void b17()
{
	ll n;
	cin >> n;
    for (int i = 1; i <= n; i++)
        cout << i << " ";
}

void b18()
{
	ll n;
	cin >> n;
    cout << n*(n+1) / 2;
}

void b19()
{
	ll n;
	string s;
	cin >> n;
    cin.get();
    getline(cin,s,'\n');
    for (int i = 1; i <= n; i++)
        cout << s << "\n";
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
	double n, res;
	cin >> n;
    res = 0;
    for (double i = 1; i <= n; i++)
        res += 1/i;
    cout << fixed << setprecision(6) << res;
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
	ll n;
	string s;
	cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
            cout << '*';
        cout << "\n";
    }
}
//
void ngang(ll n, ll m)
{
	for (int i = 1; i <= m; i++)
        cout << '*';
    cout << "\n";

}

void rong(ll n, ll m)
{
	for (int i = 1; i <=n - 2; i++)
    {
        cout << '*';
        for (int j = 1; j <= m - 2; j++)
            cout << " ";
        cout << '*' << "\n";
    }

}

void b24()
{
	ll n,m;
	string s;
	cin >> n >> m;
    ngang(n,m);
    rong(n,m);
    ngang(n,m);
}
//
void b25()
{
	ll n, k, m;
	cin >> n;
    if (isprime(n)) cout << "TRUE";
    else cout << "FALSE";
}
//
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
	ll n, t1, t2;
	cin >> n;
    t1 = 1;
    t2 = 1;
    for (int i = 3; i <= n; i++)
    {
        t2 += t1;
        t1 = t2 - t1;
        //cout << t2 << " ";
    }
    cout << t2;
}

void b28()
{
	ll n, m;
	cin >> n;
    m = n % 10;
    n = n / 10;
    while (n % 10 > 0)
    {
        m = m*10 + n%10;
        n = n / 10;
    }
    cout << m;
}

void b29()
{
	ll n, res = 0;
	cin >> n;
    while (n)
    {
        res = max (res, n%10);
        n = n / 10;
    }
    cout << res;
}

void b30()
{
	ll n, m, res;
	cin >> n;
    res = n;
    m = n%10;
    n = n/10;
    while (n)
    {
        m = m*10 + n%10;
        n = n / 10;
    }
    res += m;
    cout << res;
}
//
void b31()
{
	ll n;
	bool ok = true;
	cin >> n;
	
	while (n % 2 == 0)
    {
        if (ok == true)
        {
            cout << 2;
            ok = false;
        }
        else
            cout << "*" << 2;
        n = n / 2;
    }
    
    while (n % 3 == 0)
    {
        if (ok == true)
        {
            cout << 3;
            ok = false;
        }
        else
            cout << "*" << 3;
        n = n / 3;
    }
    
    ll k = 5;
    ll m = trunc(sqrt(n));
    while (k <= m)
    {
        while (n % k == 0)
    	{
        	if (ok == true)
        	{
            	cout << k;
            	ok = false;
        	}
        	else
            	cout << "*" << k;
       		n = n / k;
    	}
    	
    	while (n % (k+2) == 0)
    	{
        	if (ok == true)
        	{
            	cout << (k+2);
            	ok = false;
        	}
        	else
            	cout << "*" << (k+2);
        	n = n / (k+2);
    	}
        k += 6;
    }
}
//
void b32()
{
	ll n, m, uc, bc;
	cin >> n >> m;
    uc = gcd(n,m);
    bc = (n*m) / uc;
    cout << uc << " " << bc;
}
//
void b33()
{
	ll n, tx, tn; 
	ll Max = -1e18, Min = 1e18;
	ll dem=0;
    while (cin >> n)
    {
        tx = Max;
        tn = Min;
        Max = max(Max, n);
        Min = min(Min, n);
        dem++;
    }
    cout << tx << " " << tn << " " << dem - 1;
}

void b34()
{
	ll n;
	cin >> n;
    sieve();
    for (int i = 2; i <= n; i++)
    {
        if (nt[i] == true)
            cout << i << " ";
    }
}

void b35()
{
	ll n;
	double res = 0, dem = 0;
	sieve();
    for (int i = 2; i <= n; i++)
    {
        if (nt[i] == true)
        {
            res += i;
            dem++;
        }
    }
    cout << fixed << setprecision(3) << res / dem;
}

void b36()
{
	ll n;
	double dem = 0;
	sieve();
    for (int i = 2; i <= maxn; i++)
    {
        if (nt[i] == true)
        {
            cout << i << " ";
            dem++;
            if (dem == n)
                return;
        }
    }
    /*while (cin)
    {
        cin >> n;
        res += n;
    }
    cout << res;*/
}

void b37()
{
	ll n, a, Max = -1e18, Min = 1e18;
	cin >> n;
    while (n--)
    {
        cin >> a;
        Max = max(Max, a);
        Min = min(Min, a);
    }
    cout << Max << " " << Min;
}

void b38()
{
	ll n, a, Max = 0, p;
	cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a > Max)
        {
            Max = a;
            p = i;
        }
    }
    cout << p;
}

void b39()
{
	ll n, a;
	double sum = 0.0;
	cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        sum += a;
    }
    cout << fixed << setprecision(2) << sum/double(n);
}

void b40()
{
	ll n;
	double sum = 0.0, tb = 0.0;
	bool ok = false;
	cin >> n;
    ll a[n+5];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    tb = sum / n;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > tb)
        {
            cout << i << " ";
            ok = true;
        }
    }
    if (ok == false)
        cout << "NOT FOUND";
}

void b41()
{
	ll n, t, a;
	bool ok = false;
	cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (isprime(a) == true)
        {
          cout << a << " ";
          ok = true;
        }
    }
    if (ok == false)
        cout << "NOT FOUND";
}

void b42()
{
	ll n, a, t;
	bool ok = false;
	cin >> n;
    ll dem = 0, res = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (isprime(a))
        {
            res += a;
            dem++;
        }
    }
    double tb = double(double(res) / double(dem));
    cout << fixed << setprecision(2) << tb;
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
	ll n, a, Max = -1e18;
	bool ok = false;
	cin >> n;
    while (n--)
    {
        cin >> a;
        if (a < 0)
        {
            Max = max(Max, a);
            ok = true;
        }
    }
    if (ok)
        cout << Max;
    else
        cout << "NOT FOUND";
}

void b45()
{
	ll n;
	bool ok;
	cin >> n;
    ll a[n+5];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    ok = false;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > 0)
        {
            cout << a[i] << " ";
            ok = true;
        }
    }
    if (!ok) cout << "NOT FOUND";
    cout << "\n";

    ok = false;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << " ";
            ok = true;
        }
    }
    if (!ok) cout << "NOT FOUND";
    cout << "\n";
}
void b46()
{
	ll n, a[1000006];
	cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
        
    sort (a+1, a+n+1);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << "\n";
    sort (a+1, a+n+1, greater<ll>());
	for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << "\n";
}
//
void b47()
{
	ll n;
	cin >> n;
	ll a[n + 5];
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort (a + 1, a + n + 1, greater<ll>());
	for (int i = 1; i <= 3; i++)
		cout << a[i] << " ";
}

void b48()
{
	ll n, x;
	ll a[10001], d=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		a[x]++;
		if (a[x] == 1)
			d++;
	}
	cout << d << "\n";
	for (int i = 0; i <= 1000; i++)
	{
		if (a[i] > 0)
			cout << i << " " << a[i] << "\n";
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
	ll n, res = 0, Max = 0;
	ll a[1001], d=0, dd[1001];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		dd[a[i]]++;
	}
	for (int i = 0; i <= 100; i++)
	{	
		if (dd[a[i]] > Max)
		{
			Max = dd[a[i]];
			res = a[i];
		}
	}
	cout << res << " " << Max;
}

void b51()
{
	ll n, a[1001];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (a[i] <= a[i-1] && i != 1)
		{
			cout << "FALSE";
			return;
		}
	}
	cout << "TRUE";
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
//
string nhiphan(ll n)
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
	string n2 = nhiphan(n);
	cout << n2;
}
//
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
//
void row(ll n, ll m, ll a[1001][1001])
{
	ll hang;
	for (int i = 1; i <= n; i++)
	{
		hang = 0;
		for (int j = 1; j <= m; j++)
			hang += a[i][j];
		cout << hang << " ";
	}
	cout << "\n";
}
//
void col(ll n, ll m, ll a[1001][1001])
{
	ll cot;
	for (int i = 1; i <= m; i++)
	{
		cot = 0;
		for (int j = 1; j <= n; j++)
			cot += a[j][i];
		cout << cot << " ";
	}
	cout << "\n";
}

void b55()
{
	ll n, m, a[1001][1001];
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j];
	row(n,m,a);
	col(n,m,a);
}
//
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
	string s = "";
	getline(cin,s);
	s = "I love " + s;
	cout << s; 
}

void b61()
{
	string s = "";
	getline(cin,s);
	bool ok = true;
	ll d = 0;
	for (int i = 0; i <= s.size(); i++)
	{
		if (ok == true && s[i] != ' ')
		{
			ok = false;
			d++;
		}
		if (s[i] == ' ')
			ok = true;
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

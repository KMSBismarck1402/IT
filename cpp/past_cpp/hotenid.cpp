#include <bits/stdc++.h>
using namespace std;

/*void qsort1(long long a[], long long l, long long h)
{
    if (l < h)
    {
        int pi = partition(a, l, h);
        qsort1(a, l, pi - 1);
        qsort1(a, pi + 1, h);
    }
}

void qsort2(string a[], string l, string h)
{
    if (l < h)
    {
        int pi = partition(a, l, h);
        qsort2(a, l, pi - 1);
        qsort2(a, pi + 1, h);
    }
}

void qsort3(int a[], int l, int h)
{
    if (l < h)
    {
        int pi = partition(a, l, h);
        qsort3(a, l, pi - 1);
        qsort3(a, pi + 1, h);
    }
}

int sapxep(int n, long long a[], string b[], double c[])
{
    switch(n)
case 1:

case 2:

case 3:

    break;
}

int main()
{
    int n,m,i;
    cin >> n>>m;
    long long id[n];
    string ht[n];
    double tb[n];
    for(i = 0 ; i < n ; i++)
    {
        cin >> id[i];
        cin.ignore();
        getline(cin, ht(i));
        cin >> tb[i];
    }
    int l,h;

    //ma so ten diem

}

int sosanh(const void *pa, const void *pb)
{
    if (a ->id > b -> id)
        return 1;
    else if (a -> id == b-> id)
        return 0;
    else
        return -1;
}

int sosanh2(const void *pa, const void *pb)
{
    if (a -> ht > b -> ht)
        return 1;
    else if (a -> ht == b-> ht)
        return 0;
    else
        return -1;
}*/


struct Hocsinh
{
    string HoTen;
    unsigned long long ID;
    double DTB;
};

int Sosanh(const void *pa, const void *pb)
{
    const Hocsinh *a = (const Hocsinh *)pa, *b = *(const Hocsinh *)pb;
    if(a->ID > b->ID)
        return 1;
    else if(a->ID == b->ID)
        return 0;
    else return -1;
}

int Sosanh1(const void *pa, const void *pb)
{
    const Hocsinh *a = (const Hocsinh *)pa, *b = *(const Hocsinh *)pb;
    if(a->DTB > b->DTB)
        return 1;
    else if(a->DTB == b->DTB)
        return 0;
    else return -1;
}


int Sosanh2(const void *pa, const void *pb)
{
    const Hocsinh *a = (const Hocsinh *)pa, *b = *(const Hocsinh *)pb;
    if(a->HoTen > b->HoTen)
        return 1;
    else if(a->HoTen == b->HoTen)
        return 0;
    else return -1;
}

int main()
{
    int n, m;
    cin >> n >> m;
    Hocsinh a[n];
    for(int i = 0)
    {
        cin >> a[i].ID
        cin.ignore();
        getline(cin,a[i].HoTen);
        cin >> a[i].DTB;
    }
}

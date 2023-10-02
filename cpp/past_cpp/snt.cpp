void sieve(bool d[],int n)
{
    d[0] = d[1] = false;
    int m = sqrt(n);
    for(int i= 2; i<= m; ++i)
        if(d[i] == true)
            for(int j = i; j <= n/i; ++j)
                d[i*j] = false;
}

#include<bits/stdc++.h>
using namespace std;
int bin_search(int target,int a[],int n)//tìm vị trí cạnh 3 lớn nhất thỏa BĐT tam giác
{//co thể có nhiều cạnh trung nhau nên tìm vị trí xa nhất về bên trái
    int low,high,mid,pos;
    pos=-1;
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(target==a[mid]){
            pos=mid;
            high=mid-1;
        }
        else if(target>a[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    return pos;
}
int C(int dodai_daycon,int x)
{
    switch(x){
    case 2:{
        return dodai_daycon*(dodai_daycon-1)/2;
    }
    case 3:{
        return dodai_daycon*(dodai_daycon-1)*(dodai_daycon-2)/6;
    }
    }
}
int main()
{
    int n,so_canh3,vt_canh3_lonnhat;
    int64_t  so_tg_tao_thanh=0;
    int dodai_daycon=1;
    int a[500001]={};
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    a[n]=0;
    cin >> n;
    for (int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1])//tìm độ dài dãy con hiện tại
            dodai_daycon++;
        else{
            if (dodai_daycon>=2){
                vt_canh3_lonnhat=bin_search((a[i-1]*2),a,n);//tìm vị trí cạnh 3 lớn nhất..
                if(vt_canh3_lonnhat==-1)//nếu cạnh 3 cần tìm không nằm trong mảng
                    so_canh3=n-dodai_daycon;
                else//nếu cạnh 3 ấy có nằm trong mảng
                    so_canh3=vt_canh3_lonnhat-dodai_daycon;
                so_tg_tao_thanh+=C(dodai_daycon,2)*so_canh3;//dù độ dài dãy con >2 hay =2 đều có tính C(dodai,2) nên gộp chung => số tg cân (ko đều)
                if(dodai_daycon>2)
                    so_tg_tao_thanh+=C(dodai_daycon,3);//nếu độ dài >2 thì sẽ tính thêm C(dodai,3) =>số tg đều
            }
            dodai_daycon=1;//qua dãy con mới, reset lại 1
        }
    }
    cout << so_tg_tao_thanh;
    return 0;
}


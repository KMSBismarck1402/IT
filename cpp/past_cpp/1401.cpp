#include <bits/stdc++.h>
using namespace std;

int main(){
   int i,j,count;
   char str[25][25],temp[25];
   cin>>count;

   for(i=0;i<count;i++)
      cin>>(str[i]);
   for(i=0;i<count;i++)
      for(j=i+1;j<count;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   for(i=0;i<count;i++)
      puts(str[i]);
}

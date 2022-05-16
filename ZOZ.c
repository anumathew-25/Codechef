************************************
Author:Anu Mathew
Problem:ZOZ
Date:16/5/2022
************************************
#include <stdio.h>

int main(void) {    
    int t,n,i,count=0;
    scanf("%d",&t);
    long long int k,sum=0;
   do{
        scanf("%llu %llu",&n,&k);
        long long int v[n];
        sum=0;
       
       for(int i=0;i<n;i++){
          scanf("%llu",&v[i]);
          sum +=v[i];
       }
       count =0;
       for(i=0;i<n;i++){
           if(sum-v[i]<v[i]+k){
               count++;
           }
       }
       t--;
       printf("%d\n",count);
        
    }
    while(t>0);
	return 0;
}


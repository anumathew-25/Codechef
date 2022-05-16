************************************
Author:Anu Mathew
Problem:PIPSQUIK
Date:16/5/2022
************************************
#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,h,y1,y2,l;
	    scanf("%d %d %d %d %d",&n,&h,&y1,&y2,&l);
	    int ans=0;
	    int type[n],x[n],i;
	    for(i=0;i<n;i++){
	        scanf("%d",&type[i]);
	        scanf("%d",&x[i]);
	    }
	    for(i=0;i<n;i++){
	        if(type[i]==1&&x[i]<h-y1){
	            l--;
	        }
	        else if(type[i]==2 &&x[i]>y2){
	            l--;
	        }
	        if(l==0){
	            break;
	            
	        }
	        ans++;
	    }
	    printf("%d\n",ans);
	}
	return 0;
}


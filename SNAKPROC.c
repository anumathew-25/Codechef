*********************************************
Author:Anu Mathew
Problem:SNAKPROC
Date:16/5/2022
********************************************
#include <stdio.h>
	int N;
void solve(){

	scanf ("%d",&N);
	char S[N];
	scanf ("%s",&S);
	char P[500]="";
	int j=0;
	int isHead,isValid;
	for(int i=0;i<N;i++){
	    if(S[i] !='.'){
	        P[j]=S[i];
	        j++;
	    }
	}
	if(P[0]=='\0'){
	    printf("Valid\n");
	    return;
	}
	isHead =1;
	isValid=1;
	for(int i=0;i<j;i++){
	    if(isHead==1&&P[i]=='T'){
	        isValid=0;
	        break;
	    }
	    if(isHead==0 &&P[i]=='H'){
	        isValid =0;
	        break;
	    }
	    if(isHead==1){
	        isHead=0;
	    }
	    else{
	        isHead=1;
	    }
	}
	if(isHead==0){
	    isValid=0;
}
if(isValid==1){
	printf("Valid\n");
}
else{
    printf("Invalid\n");
}
}
int main(void) {
    int T;
    scanf("%d",&T);
    while(T!=0){
        solve();
        T--;
    }
	return 0;
}

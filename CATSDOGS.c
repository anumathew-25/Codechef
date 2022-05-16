*******************************************
Author:Anu Mathew
Problem:CATSDOGS
Date:16/5/2022
********************************************
#include <stdio.h>
void solve(){
    int cats,dogs,legs;
    scanf("%d",&cats);
    scanf("%d",&dogs);
    scanf("%d",&legs);
    if(legs%4 !=0){
        printf("no\n");
        return;
    }
    int totalAnimals=legs/4;
    if(totalAnimals-dogs<0){
        printf("no\n");
        return;
    }
    int catsGround=totalAnimals-dogs;
    int catsDogs=cats-catsGround;
    if(catsDogs<0||catsDogs>2*dogs){
        printf("no\n");
        return;
    }
    printf("yes\n");
}
int main(void) {
    int t=1;
    scanf("%d",&t);
    while(t--){
        solve();        
    }
	return 0;
}


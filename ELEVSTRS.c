************************************
Author:Anu Mathew
Problem:ELEVSTRS
Date:16/5/2022
************************************
#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    double n,v1,v2;
	    scanf("%lf",&n);
	    scanf("%lf",&v1);
	    scanf("%lf",&v2);
	    
	    double distanceStairs =n*sqrt(2);
	    double distanceElevator =2*n;
	    
	    double timeStairs=distanceStairs/v1;
	    double timeElevator =distanceElevator/v2;
	    
	    if(timeStairs>timeElevator){
	        printf("Elevator\n");
	    }
	    else{
	        printf("Stairs\n");
	    }
	}
	return 0;
}


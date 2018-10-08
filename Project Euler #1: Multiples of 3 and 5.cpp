#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int t,n; 
    scanf("%lld",&t);
    for(long long int i = 0; i < t; i++){
        
        scanf("%lld",&n);
        long long int a=0,b=0,c=0,ans=0;
        a=(n-1)/3;
        b=(n-1)/5;
        c=(n-1)/15;
        ans=(3*a*(a+1)/2)+(5*b*(b+1)/2)-(15*c*(c+1)/2);
		printf("%lld\n",ans);	
    }
    
	
   
    
    return 0;
}

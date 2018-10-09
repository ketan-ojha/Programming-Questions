#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
	
    
    long int temp,a[100],min,max,i;
    for(int i = 0; i < 5; i++){
       scanf("%ld",&a[i]);
    }
    for(int i=0;i<5;i++){
    	for(int j=0;j<4;j++)
        if(a[j]>a[j+1])
        {
        	temp=a[j];
        	a[j]=a[j+1];
        	a[j+1]=temp;
		}
	}
    
        min=a[i]+a[i+1]+a[i+2]+a[i+3];
        max=a[i+4]+a[i+1]+a[i+2]+a[i+3];
    
    printf("%ld %ld",min,max);
    return 0;
}

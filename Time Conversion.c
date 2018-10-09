#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int hh,mm,ss;
    char x[3];
    scanf("%d:%d:%d%s",&hh,&mm,&ss,x);
    if(strcmp(x,"PM")==0&&hh!=12)
            hh+=12;
    else if(strcmp(x,"AM")==0&&hh==12)
            hh=0;
  
    printf("%02d:%02d:%02d",hh,mm,ss);
    return 0;
}

/*Solved in O(1)*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int x[6][6],a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
    for(int y = 0; y < 6; y++){
       for(int z = 0; z < 6; z++){
          
          scanf("%d",&x[y][z]);
       }
    }
    a=x[0][0]+x[0][1]+x[0][2]+x[1][1]+x[2][0]+x[2][1]+x[2][2];
    b=x[0][1]+x[0][2]+x[0][3]+x[1][2]+x[2][1]+x[2][2]+x[2][3];
    c=x[0][2]+x[0][3]+x[0][4]+x[1][3]+x[2][2]+x[2][3]+x[2][4];
    d=x[0][3]+x[0][4]+x[0][5]+x[1][3]+x[2][3]+x[2][4]+x[2][5];
    e=x[1][0]+x[1][1]+x[1][2]+x[2][1]+x[3][0]+x[3][1]+x[3][2];   
    f=x[1][1]+x[1][2]+x[1][3]+x[2][2]+x[3][1]+x[3][2]+x[3][3];
    g=x[1][2]+x[1][3]+x[1][4]+x[2][3]+x[3][2]+x[3][3]+x[3][4];
    h=x[1][3]+x[1][4]+x[1][5]+x[2][4]+x[3][3]+x[3][4]+x[3][5];
    i=x[2][0]+x[2][1]+x[2][2]+x[3][1]+x[4][0]+x[4][1]+x[4][2];
    j=x[2][1]+x[2][2]+x[2][3]+x[3][2]+x[4][1]+x[4][2]+x[4][3];
    k=x[2][2]+x[2][3]+x[2][4]+x[3][3]+x[4][2]+x[4][3]+x[4][4];
    l=x[2][3]+x[2][4]+x[2][5]+x[3][4]+x[4][1]+x[4][2]+x[4][3];
    m=x[3][0]+x[3][1]+x[3][2]+x[4][1]+x[5][0]+x[5][1]+x[5][2];
    n=x[3][1]+x[3][2]+x[3][3]+x[4][2]+x[5][1]+x[5][2]+x[5][3];
    o=x[3][2]+x[3][3]+x[3][4]+x[4][3]+x[5][2]+x[5][3]+x[5][4];
    p=x[3][3]+x[3][4]+x[3][5]+x[4][4]+x[5][3]+x[5][4]+x[5][5];
    if(a>b && a>c && a>d && a>e && a>f && a>g && a>h && a>i && a>j && a>k && a>l && a>m && a>n && a>o && a>p)
        printf("%d",a);
    if(b>a && b>c && b>d && b>e && b>f && b>g && b>h && b>i && b>j && b>k && b>l && b>m && b>n && b>o && b>p)
        printf("%d",b);
    if(c>a && c>b && c>d && c>e && c>f && c>g && c>h && c>i && c>j && c>k && c>l && c>m && c>n && c>o && c>p)
        printf("%d",c);
    if(d>a && d>b && d>c && d>e && d>f && d>g && d>h && d>i && d>j && d>k && d>l && d>m && d>n && d>o && d>p)
        printf("%d",d);
    if(e>a && e>c && e>c && e>d && e>f && e>g && e>h && e>i && e>j && e>k && e>l && e>m && e>n && e>o && e>p)
        printf("%d",e);
    if(f>a && f>b && f>c && f>d && f>e && f>g && f>h && f>i && f>j && f>k && f>l && f>m && f>n && f>o && f>p)
        printf("%d",f);
    if(g>a && g>b && g>c && g>d && g>e && g>f && g>h && g>i && g>j && g>k && g>l && g>m && g>n && g>o && g>p)
        printf("%d",g);
    if(h>a && h>b && h>c && h>d && h>e && h>f && h>g && h>i && h>j && h>k && h>l && h>m && h>n && h>o && h>p)
        printf("%d",h);
    if(i>a && i>b && i>c && i>d && i>e && i>f && i>g && i>i && i>j && i>k && i>l && i>m && i>n && i>o && i>p)
        printf("%d",i);
    if(j>b && j>c && j>d && j>e && j>f && j>g && j>h && j>i && j>a && j>k && j>l && j>m && j>n && j>o && j>p)
        printf("%d",j);
    if(k>b && k>c && k>d && k>e && k>f && k>g && k>h && k>i && k>j && k>a && k>l && k>m && k>n && k>o && k>p)
        printf("%d",k);
    if(l>b && l>c && l>d && l>e && l>f && l>g && l>h && l>i && l>j && l>k && l>a && l>m && l>n && l>o && l>p)
        printf("%d",l);
    if(m>b && m>c && m>d && m>e && m>f && m>g && m>h && m>i && m>j && m>k && m>l && m>a && m>n && m>o && m>p)
        printf("%d",m);
    if(n>b && n>c && n>d && n>e && n>f && n>g && n>h && n>i && n>j && n>k && n>l && n>m && n>a && n>o && n>p)
        printf("%d",n);
    if(o>b && o>c && o>d && o>e && o>f && o>g && o>h && o>i && o>j && o>k && o>l && o>m && o>n && a>o && o>p)
        printf("%d",o);
    if(p>b && p>c && p>d && p>e && p>f && p>g && p>h && p>i && p>j && p>k && p>l && p>m && p>n && p>o && p>a)
        printf("%d",p);
    return 0;
}

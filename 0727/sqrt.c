#include <stdio.h>
void main()
{
    int flag=0;                    
    double extract(int );
    int i;
    printf("please input number:");
    scanf("%d",&i);        /*¿¿¿¿¿¿¿*/
    printf("i=%d\n",i);
    if(i<0)    {i=-i;flag=1;};
    if(flag)    printf("extract=%gi\n",extract(i));   /*¿¿¿¿¿¿0¿¿¿¿¿*/
        else    printf("extract=%g\n",extract(i));    /*¿¿¿¿¿¿0¿¿¿¿¿*/    
}


double extract(int j)
{
    double i;
    int n=0;
    printf("¿¿¿¿¿¿¿¿=%d\n",j);
    i=(double)j;
    printf("¿¿¿¿¿¿¿¿¿=%g\n",i);
    double k=0.0000000001,m;
    printf("¿¿¿¿¿¿¿¿¿%g\n",k);
    if((i==0)||(i==1)) return i;
    m=i/2;
    printf("¿¿¿¿¿¿¿%g\n",m);
    for(;(10e-9)<(i-m*m)<(10e-10);n++)   
        {
            if(i>m*m)  m-=k;
            if(i<m*m)  m+=k;
        }
    printf("¿¿¿¿%d¿\n",n);
 return m;
}

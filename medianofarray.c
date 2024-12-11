#include<stdio.h>

double findMedian(int* a,int n1,int* b,int n2) {

double median;
int i,j;
int totalsize=n1+n2;
int c[totalsize];
for (  i = 0; i < n1; i++)
{
    c[i]=a[i];
}
   
for (int j =0 ; j < n2; j++)
{
    c[j+n1]=b[j];
}
for ( i = 0; i <totalsize-1; ++i)
{
    for ( j = 0; j <totalsize-1-i; ++j)
    {
        if (c[j]>c[j+1])
        {
            int temp=c[j];
            c[j]=c[j+1];
            c[j+1]=temp;
        }
        
    }
    
}



    for (int  i = 0; i < n1+n2; i++)
    {
printf("%d\n",c[i]);
    }
   
    if (totalsize%2==0)
    {
 return median=(totalsize+1)/2.0;

    
    return median;
    }
    else
    {
        return median=c[totalsize/2];
    }


}
int  main()
{
    int n1,n2;
       printf("enter the sizes of two array\n");
scanf("%d%d",&n1,&n2);
    int a[n1];
    int b[n2];
 
printf("enter the ist  array\n");
for (int  i = 0; i < n1; i++)
{
    scanf("%d",&a[i]);

}

printf("enter the second array\n");
for (int  i = 0; i < n2; i++)
{
    scanf("%d",&b[i]);
    
}
double median=findMedian(a,n1,b,n2);
printf("%lf",median);
return 0;

}

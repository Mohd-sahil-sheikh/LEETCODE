#include <stdio.h>
int maxArea(int* height, int heightsize) {
    int max=0;

    int area;
    
   int i,j;
   for ( i = 0; i < heightsize; i++)
   {
    for ( j = i+1; j < heightsize; j++)
    {
    if (height[i]<height[j])
    {
        area=height[i]*(j-i);
        
    }
    else{
        area=height[j]*(j-i);

    }
    
    
    if (area>max)
    {
        max=area;
    }
    }
    
    
   }
   return max;

}
int main()
{
    int n;
int height[100];
printf("enter the size\n");
scanf("%d",&n);
printf("enter  the array\n");
for (int  i = 0; i <n; i++)
{
    scanf("%d",&height[i]);
}

int max=maxArea(height,n);

printf("%d",max);


return 0;




}
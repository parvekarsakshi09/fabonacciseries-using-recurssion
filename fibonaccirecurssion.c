#include<stdio.h>
int fibonacci(int i);
int main()
{
   int n,i;
printf("enter the values of n=");
scanf("%d",&n);
for( i=0;i<n;i++){
    printf("%d  ",fibonacci(i));
}

}
int fibonacci(int i){
    if(i==0)
    
        return 0;
    
    if(i==1)
        return 1;
    
    else return (fibonacci(i-1)+fibonacci(i-2));
}

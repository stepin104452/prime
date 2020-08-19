#include<stdio.h>
void prime(int a);
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int a){
    int flag=0;
    if(a==1)
    printf("neither prime nor composite");
    else if(a==2)
    printf("True");
    else
    {
        for(int i=2;i<=a/2;a++)
        {
        if(a%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag==0){
        printf("True");
        }
    else
        printf("False");
    }
}
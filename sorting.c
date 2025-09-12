#include<stdio.h>
int main() {
int a[5]={5,3,4,1,2};
int b,c,pos,smallest;
for (int i=0;i<5;i++)
{
    smallest=a[i];
    for (int j=i;j<5;j++)
    {
        if (smallest>a[j])
           {pos = j;
           smallest = a[pos];
    }

    }
    c=a[i];
    a[i]=a[pos];
    a[pos]=c;
}
for(int k=0;k<5;k++)
{
    printf("%d",a[k]);

}
return 0;

}

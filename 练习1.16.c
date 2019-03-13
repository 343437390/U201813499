#include <stdio.h>
#include <stdlib.h>

void Descend(int x,int y,int z)
{
    int temp;
    if(x<y)
    temp=x,x=y,y=temp;
    if(z>y)
    temp=z,z=y;
    if(x>=temp)
    y=temp;
    else
    y=x,x=temp;
    printf("%d%d%d",x,y,z);
}
int main()
{
    int x,y,z;
    printf("«Î ‰»Îx,y,z");
    scanf("%d%d%d",&x,&y,&z);
    Descend(x,y,z);
}

#include<stdio.h>
int main() {
    float bytes,kb,mb,gb;
    printf("enter bytes\n");
    scanf("%f", &bytes);
    kb=bytes/1024;
    mb=kb/1024;
    gb=mb/1024;
    printf("%f bytes= %f kb =%f mb=%f gb\n",bytes,kb,mb,gb);
    return 0;
}
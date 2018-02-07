#include <stdio.h>
struct values
{
    int i=2;
    float f=3.4;
}v;
void main(){
    static value v;
    printf("\n %d %f",v.i,v.f);
}

#include <stdio.h>
int main()
{
    int a = 10, *p, **p2;
    p = &a;
    p2 = &p;
    printf("\n value of a %d", a);
    printf("\n addressof a %u", &a);

    printf("\n value of a using p %d", *p);
    printf("\n address of p %u", &p);
    printf("\n address of a using p %u", p);

    printf("\n value of a using p2 %d", **p2);
    printf("\n address of p2 %u", p2);
    printf("\n address of p using p2 %u", p2);
    printf("\n address of a using p2 %u", *p2);
}
/*
*- Pointer declaration
**- Double Pointer declaration
Pointer's Intention is to do memory management.
Memory function works with the address.
*p - a's address, a's value = 10, pointer p's address.
*/
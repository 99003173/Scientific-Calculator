#include <stdio.h>
#include <stdlib.h>
#include "test_header.h"
int main()
{
    int s;
    printf("\n\n\t\t\t                               Scientific Calculator                              ");
    printf("\n\n\n\t\t                              WELCOME TO THE MAIN MENU                            ");
    printf("\n\n\n\t\t\t\t1.Arthmetic\n");
    printf("\t\t\t\t2.Trignometric\n");
    printf("\t\t\t\t3.Other Operations\n");
    printf("\t\t\t\t4.Exit\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d",&s);
    abc:
    switch(s)
    {
        case 1: menu_option(1);
                goto abc;
        case 2: menu_option(2);
                goto abc;
        case 3: menu_option(3);
                goto abc;
        case 4: exit(0);
    }
}
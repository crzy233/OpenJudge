
#include <stdio.h>
int main()
 {
    int a;
    while (scanf("%d", &a)==1 &&a!=0){
        switch (a%10) {
            case 1:
                printf("%dst\n", a);
                break;
            case 2:
                printf("%dnd\n", a);
                break;
            case 3:
                printf("%drd\n", a);
                break;
            default:
                printf("%dth\n", a);
                break;
        }
    }
 }

/**************************************************************
	Problem: 1098
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/


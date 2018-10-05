#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//int main() {
//    int *p = (int *) malloc(4 * sizeof(int));
//    for (int i = 0; i < 4; ++i) {
//        printf("Vui long nhap phan tu thu %d\n", i + 1);
//        scanf("%d", p + i);
//    }
//    for (int j = 0; j < 4 ; ++j) {
//        printf("%d\n", *(p+j));
//    }
//    return 0;
//}
//int main(){
//    int arrayNunber[5];
//    int sizeofarray = sizeof(arrayNunber) / sizeof(int);
// Cách 1: Làm việc thông qua index của mảng.
//    for (int i = 0; i < sizeofarray; ++i) {
//        scanf("%d", &arrayNunber[i]);
//    }
//    }

int main() {
    int arrayNumber [5];
    int sizeofarray = 5;
// Cách 2: Làm việc thông qua con trỏ và di chuyển con trỏ. p++, p--.
    int *p = &arrayNumber[0];
    for (int i = 0; i < sizeofarray; ++i) {
        printf("Vui long nhap so thu %d: ", i+1);
        scanf("%d", p);
        p++;
    }
    p--;
    for (int j = 0; j < sizeofarray; ++j) {
        printf("%d\n" , *p);
        p--;
    }
    return 0;
}

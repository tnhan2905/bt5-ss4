#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);
    
    printf("Nhap so nguyen thu ba: ");
    scanf("%d", &c);
//kiem tra so thu 3 co nam giua 2 so con lai khong 
    if ((a < b && a < c && c < b) || (b < a && b < c && c < a)) {
        printf("So %d nam trong khoang giua so %d va so %d.\n", c, a, b);
    } else {
        printf("So %d khong nam trong khoang giua so %d va so %d.\n", c, a, b);
    }

    return 0;
}

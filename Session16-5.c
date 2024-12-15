#include <stdio.h>
// Ham cap nhat phan tu trong mang su dung con tro
void capNhatPhanTu(int *arr, int viTri, int giaTriMoi, int leghth) {
    if (viTri >= 0 && viTri < leghth) {
        *(arr + viTri) = giaTriMoi; // Su dung con tro de cap nhat gia tri
    } else {
        printf("Vi tri cap nhat khong hop le.\n");
    }
}
int main() {
    // Khai bao va gan gia tri cho mang
    int arr[] = {1, 2, 3, 4, 5};
    int leghth = sizeof(arr) / sizeof(arr[0]);
    // In mang ban dau
    printf("Mang ban dau: ");
    for (int i = 0; i < leghth; i++) {
        printf("%d ", *(arr + i)); // In bang con tro
    }
    printf("\n");
    // Cap nhat phan tu
    int giaTriMoi = 6;
    int viTri = 0; // Cap nhat phan tu o vi tri thu 2 (bat dau tu 0)
    capNhatPhanTu(arr, viTri, giaTriMoi, leghth);
    // In mang sau khi cap nhat
    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < leghth; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    return 0;
}


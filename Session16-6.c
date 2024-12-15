#include <stdio.h>
// Ham tim kiem phan tu trong mang su dung con tro
int timKiemPhanTu(int *arr, int leghth, int giaTriCanTim) {
    for (int i = 0; i < leghth; i++) {
        if (*(arr + i) == giaTriCanTim) { // Su dung con tro de truy cap phan tu
            return i; // Tra ve vi tri dau tien tim thay
        }
    }
    return -1; // Neu khong tim thay, tra ve -1
}
int main() {
    // Khai bao va gan gia tri cho mang
    int arr[] = {1, 2, 4, 5, 6};
    int leghth = sizeof(arr) / sizeof(arr[0]);
    int giaTriCanTim = 1;
    // Goi ham tim kiem
    int viTri = timKiemPhanTu(arr, leghth, giaTriCanTim);
    // In ket qua
    if (viTri != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d.\n", giaTriCanTim, viTri);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", giaTriCanTim);
    }
    return 0;
}


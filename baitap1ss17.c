#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void displayMenu(void);
void nhapMang(int**arr,int *soPhanTu);
void inMang(int **arr,int soPhanTu);
void doDaiMang(int soPhanTu);
void tongPhanTuMang(int **arr,int soPhanTu);
void phanTuLonNhat(int **arr,int soPhanTu);
int main(){
    int *arr;
    int choice;
    int soPhanTu=0;
    do{
        displayMenu();
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            nhapMang(&arr,&soPhanTu);
            break;
        case 2:
            inMang(&arr,soPhanTu);
            break;
        case 3:
            doDaiMang(soPhanTu);
            break;  
        case 4:
            tongPhanTuMang(&arr,soPhanTu);
            break;
        case 5:
            phanTuLonNhat(&arr,soPhanTu);
            break;
        case 6:
            printf("Ban da thoat\n");
            break;
        default:
            break;
        }
    } while (choice!=6);
    free(arr);
    return 0;
}
void displayMenu(void){
    printf("\n----------MENU----------\n");
    printf("1.Nhap vao so phan tu va tung phan tu cua chung\n");
    printf("2.Hien thi cac phan tu trong mang\n");
    printf("3.Tinh do dai cua mang\n");
    printf("4.Tinh tong cac phan tu trong mang\n");
    printf("5.Hien thi phan tu lon nhat\n");
    printf("6.Thoat\n");
    printf("Lua chon cua ban: ");
}
void nhapMang(int **arr, int *soPhanTu) {
    printf("Nhap vao so phan tu: ");
    scanf("%d", soPhanTu);
    *arr = (int *)malloc(*soPhanTu * sizeof(int));
    for (int i = 0; i < *soPhanTu; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", (*arr) + i);
    }
    
}
void inMang(int **arr,int soPhanTu){
    printf("Phan tu cua mang: \n");
    for (int i = 0; i< soPhanTu; i++){
        printf("Phan tu thu %d: %d\n",i+1,*((*arr) + i));
    }
}
void doDaiMang(int soPhanTu){
    printf("Mang co do dai la: %d", soPhanTu);

}
void tongPhanTuMang(int **arr,int soPhanTu){
    int sum=0;
    for (int i = 0; i< soPhanTu; i++){
        sum += *((*arr) + i);
    }
    printf("Tong cac phan tu trong mang la: %d",sum);
}
void phanTuLonNhat(int **arr,int soPhanTu){
    int max=**arr;
    for (int i = 0; i< soPhanTu; i++){
        if (max <*((*arr) + i)){
            max =*((*arr) + i);  
        }
    
    }
    printf("Phan tu lon nhat trong mang la: %d",max);
}

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void displayMenu(void);
void nhapChuoi(char *chuoi);
void inChuoi(char *chuoi);
void demChuCai(char *chuoi);
void demChuSo(char *chuoi);
void demKyTuDacBiet(char *chuoi);
int main(){
    char chuoi[100] = "";
    int choice;
    do
    {
        displayMenu();
        scanf("%d",&choice);
        getchar();
        switch (choice){
        case 1:
            nhapChuoi(chuoi);
            break;
        case 2:
            inChuoi(chuoi);
            break;
        case 3: 
            demChuCai(chuoi);
            break;
        case 4:
            demChuSo(chuoi);
            break;
        case 5:
            demKyTuDacBiet(chuoi);
            break;
        default:
            break;
        }
    } while (choice !=6);

    return 0 ;
}
void displayMenu(void){
    printf("\n----------MENU----------\n");
    printf("1.Nhap vao chuoi\n");
    printf("2.In ra chuoi\n");
    printf("3.Dem so luong chu cai trong chuoi va in ra\n");
    printf("4.Dem so luong chu so trong chuoi va in ra\n");
    printf("5.Dem so luong ky tu dac biet trong chuoi va in ra\n");
    printf("6.Thoat\n");
    printf("Lua chon cua ban: ");
}
void nhapChuoi(char *chuoi) {
    printf("Nhap vao chuoi: ");
    fgets(chuoi, 100, stdin);
}
void inChuoi(char *chuoi){
    printf("Chuoi hien tai: %s\n", chuoi);
}
void demChuCai(char *chuoi) {
    int count = 0;
    while (*chuoi != '\0') {
        if(isalpha(*chuoi)){
            count++;
        }
        chuoi++;
    }
    printf("So luong chu cai: %d\n", count);
}
void demKyTuDacBiet(char *chuoi) {
    int count = 0;
    while (*chuoi != '\0') {
        if (!isalpha(*chuoi) && !isdigit(*chuoi) && !isspace(*chuoi)) {
            count++;
        }
        chuoi++;
    }
    printf("So luong ky tu dac biet: %d\n", count);
}
void demChuSo(char *chuoi) {
    int count = 0;
    while (*chuoi != '\0') {
        if (isdigit(*chuoi)) {
            count++;
        }
        chuoi++;
    }
    printf("So luong chu so: %d\n", count);
}

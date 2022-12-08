#include <stdio.h>
#include "Sinhvien.h" 
float DevC,HTML,diemtb;
void nhapSV(SV *d)
{
	fflush(stdin);
	printf("\nNhap ma sinh vien");gets(d->maSV);
	printf("\nNhap hoten sinh vien");gets(d->hoten);
	do{
		printf("\nNhap gioi tinh (chon 1-Nu, chon 2-Nam, chon 3-Khac): ");scanf("%d",&d->gt);
		if ( d->gt < 1 || d->gt > 3){
			printf("Gia tri khong hop le\n");
		}
	}while ( d->gt < 1 || d->gt > 3);
	inputDate(&d->ns);
	fflush(stdin);
	printf("\nNhap noi sinh: "); gets(d->noisinh);
	printf("\nNhap lop: ");gets(d->lop);
}
void inSV(SV d)
{
	printf("\nMa sinh vien: %s",d.maSV);
	printf("\nHoten : %s",d.hoten);
	printf("\nNoi sinh : %s",d.noisinh);
	printf("\nLop: %s",d.lop);
}
void nhap(){
	do{
		printf("\nNhap vao diem Devc: ");
		scanf("%f",&DevC);
		printf("\nNhap vao diem HTML: ");
		scanf("%f",&HTML);
	}while (DevC > 0 || HTML > 0 || DevC < 100 || HTML < 100);
} 
void tinhTB(){
	diemtb=(DevC+HTML)/2;}
void xeploai(){
	if(diemtb>=90 || diemtb<=100){
		printf("\nXep loai Gioi.");
	}
	else if(diemtb >=70 || diemtb <90){
		printf("\nXep loai Kha.");
	}
	else if(diemtb >=50 || diemtb <70){
		printf("\nXep loai TrungBinh.");
	}
	else{
		printf("\nXep loai yeu.");
	}
}
void xuat(){
	printf("\nDiem trung binh la: %f.1",diemtb);
}
int main(){
	nhap();
	tinhTB();
	xuat();
}
 

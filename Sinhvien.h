#include "Date.h"
typedef struct
{
	char maSV[15];
	char hoten[50];
	int gt;
	Date ns;
	char noisinh[100];
	char lop[100];
} SV;
void nhapSV(SV *d);
void inSV(SV d);
void nhapDSSV(SV *d,int *n);
void inDSSV(SV *d,int n);
int timDSSV(SV *d,int n);
void ghiDSSV(SV *d,int n);
void docDSSV(SV *d,int n);

#include <stdio.h>
#include <bits/stdc++.h>
#include <dos.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#define MAX 100

int xr, yr;
int n;
int xc[100],yc[100];

using namespace std;
//Ðinh nghia hàm nhap kích thuoc mang:
int nhapN(){
int n;
do{
cout<<"Moi nhap so luong phan tu: ";
cin>>n;
}while(n<1 || n>10);
return n;
}
//Ðinh nghia hàm nhap du lieu mang:
void nhapMang(float arr[],int n){
cout<<"Moi nhap lieu cho mang:"<<endl;
for(int i=0; i<n; i++){
cout<<"arr["<<i<<"] = ";
cin>>arr[i];
}
}
//Hàm thuc hien thuat toán tìm kiem nhi phân
float binarySearch(float arr[], int n, float x) {
//Truoc tiên can dat left là chi so cua phan tu dau tiên, right là chi so cua phan tu cuoi cùng + 1
int left=0, right=n;
//Bien de luu lai vi trí tìm thay
int index;
while(left <= right) {
// lay vi trí chính giua cua mang:
index = (left + right) / 2;
// neu phan tu o giua mang bang x thì tra ve index
if (arr[index] == x)
return index;
// Neu x lon hon phan tu o giua thì vi trí can tìm chac chan nam bên phai.
if (x > arr[index])
// Lúc này ta thuc hien chia dôi nua bên phai
// bang cách gán left là index
left = index;
//Nguoc lai thì vi trí can tìm chac chan o bên trái
else
// Lúc này ta thuc hien chia dôi nua bên trái bang cách gán right là index
right = index;
}
//Tra ve -1 neu không tìm thay vi trí nào.
return -1;
}

void draw_object()
{
	int i;
	for(int i=0;i<n;i++)
	{
		line(xc[i],yc[i],xc[(i+1)%n],yc[(i+1)%n]);
		delay(1000);
	}
}

void dichuyen(int a) {
	int i;
	float dx, dy;
	for(i = 0; i < n; i++) {
		dx = xc[i] + xr;
		dy = yc[i] + xr;
		xc[i] = xc[i] + dx;
		yc[i] = yc[i] + dy;
	}
	
}

void hoadoi(int a[], int b[]) {
	for(int i = 0; i < 100; i++) {
		for(int j = 0; j < 100; j++) {
			circle(a[i], b[i] + 100, 50);
		}
	}
}


int main() {
	
	int n;
	float x;
    n=nhapN(); //Nhap kích thuoc mang
    float arr[n];
    nhapMang(arr,n); //Nhap lieu cho mang
    //Tien hành sap xep truoc:
    //Hàm sort se sap xep mang tang dan
    sort(arr,arr+n);
    cout<<"Sau khi sap xep tang dan, ta duoc ket qua:"<<endl;
    for(int i=0; i<n; i++)
    cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    cout<<"Moi nhap so can tim: ";
    cin>>x; //Nhap so can tìm
    //Roi moi tien hành tìm kiem nhi phân
    int index = binarySearch(arr, n, x);
    if(index==-1)
    cout<<"Khong tim thay phan tu nao co gia tri "<<x<<endl;
    else
    cout<<"Tim thay phan tu tai vi tri chi so "<<index;
	
	
	initwindow(1800, 1800);
	for(int i = 50; i < 1800; i +=130) {
		circle(i, 100, 40);
	}
	
	settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(400, 600, "Sinh vien thuc hien: Nguyen Van Tin - MSSV: 62134339");
	settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(500, 630, "Giao vien huong dan: Doan Vu Thinh");
	
	
	
	settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(30, 100, "3");
	settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(290, 100, "8");
	settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(420, 100, "10");
	settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(550, 100, "7");
	settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(690, 100, "5");
	settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(820, 100, "1");
	settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(950, 100, "4");
	settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(1200, 100, "6");
	settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(1340, 100, "2");
	settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(1460, 100, "9");
	
	for(int j = 0; j < 300; j ++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(1340, 90 + j, "2");
		delay(1);
	}
	for(int k = 0; k < 1180; k ++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(1340 - k, 390, "2");
		delay(1);
	}
	for(int i = 0; i < 300; i++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(160, 400 - i, "2");
		delay(1);
	}
	
	
		for(int m = 0; m < 300; m++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(1460, 90 + m, "9");
		delay(1);
	}
	for(int n = 0; n < 130; n++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(1460 - n, 390, "9");
		delay(1);
	}
	
	for(int o = 0; o < 300; o++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(1080, 400 - o, "9");
		delay(1);
	}
	
	
	
	
		
	for(int a = 0; a < 300; a++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(290, 100 + a, "8");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(950, 90 + a, "4");
		delay(1);
	}
	for(int b = 0; b < 660; b++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(290 + b, 400, "8");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(950 - b, 390, "4");
		delay(1);
	}
	for(int c = 0; c < 300; c++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(950, 400 - c, "8");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(290, 400 - c, "4");
		delay(1);
	}
	
	
	
	for(int d = 0; d < 300; d++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(420, 100 + d, "10");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(820, 90 + d, "1");
		delay(1);
	}
	for(int e = 0; e < 400; e++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(420 + e, 400, "10");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(820 - e , 390, "1");
		delay(1);
	}
	for(int f = 0; f < 300; f++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(820, 400 - f, "10");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(420, 400 - f, "1");
		delay(1);
	}
	
	for(int g = 0; g < 300; g++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(690, 100 + g, "5");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(550, 90 + g, "7");
		delay(1);
	}
	for(int h = 0; h < 140; h++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(690 - h, 400, "5");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(550 + h, 390, "7");
		delay(1);
	}
	for(int l = 0; l < 300; l++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(550, 400 - l, "5");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(690, 400 - l, "7");
		delay(1);
	}
	
	
	
	for(int m = 0; m < 300; m++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(290, 100 + m, "4");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(420, 90 + m, "1");
		delay(1);
	}
	for(int n = 0; n < 130; n++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(290 + n, 400, "4");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(420 - n, 390, "1");
		delay(1);
	}
	
	for(int o = 0; o < 300; o++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(420, 400 - o, "4");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(290, 400 - o, "1");
		delay(1);
	}
	
	
	for(int p = 0; p < 300; p++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(290, 100 + p, "1");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(30, 90 + p, "3");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(820, 100 + p, "10");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(1200, 90 + p, "6");
		delay(1);
	}
	
	for(int q = 0; q < 260; q++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(290 - q, 400, "1");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(30 + q, 390, "3");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(820 + q*1.46, 400, "10");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(1200 - q*1.46, 390, "6");
		delay(1);
	}
	for(int r = 0; r < 300; r++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(30, 400 - r, "1");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(290, 400 - r, "3");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(1200, 400 - r, "10");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(820, 400 - r, "6");
		delay(1);
	}
	

	
	for(int s = 0; s < 300; s++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(690, 100 + s, "7");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(820, 90 + s, "6");
		delay(1);
	}

	for(int t = 0; t < 130; t++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(690 + t, 400, "7");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(820 - t, 390, "6");
		delay(1);
	}
	
	for(int u = 0; u < 300; u++) {
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(820, 400 - u, "7");
		settextstyle(0, 0, 2);setcolor(12); setbkcolor(0); outtextxy(690, 400 - u, "6");
		delay(1);
	}
	delay(10000);
	getch();
}


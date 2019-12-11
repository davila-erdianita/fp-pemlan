#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
struct alamatpenerima{
 char jalan[15][15];int norumah;
 char kota[15],provinsi[17];
};
struct alamatpengirim{
 char jalan[15][15];int norumah;
 char kota[15],provinsi[17];
};
struct data{
	char namapenerima[15][15];
	char namapengirim[15][15];
	struct alamatpenerima addr;
	struct alamatpengirim addr1;
	int resi;
	int berat;
	char jenis[20];
	int totharga;
}; typedef struct data data;
void lihat(int n,struct data a[]){
	int i;
				printf("\n+----------------------------------------------+\n");
				printf("			>>>	Daftar Data Pelanggan<<< \n");
				printf("\n+----------------------------------------------+\n");
		printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------+");
		printf("\n|No.Resi| Nama Penerima | Alamat Penerima | Nama Pengirim | Alamat Pengirim | Berat Barang | Jenis Pengiriman | Total Harga |");
		printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------+");
				for(i=0; i<n; i++){

				
		printf("\n|   %i   |   %s  |	%s no %i kota %s,%s |	%s |	%s no %i kota %s,%s |	%i kg |	%s |	%i |",a[i].resi,a[i].namapenerima,a[i].addr.jalan,a[i].addr.norumah,a[i].addr.kota,a[i].addr.provinsi,a[i].namapengirim,a[i].addr1.jalan,a[i].addr1.norumah,a[i].addr1.kota,a[i].addr1.provinsi,a[i].berat,a[i].jenis,a[i].totharga);
					
				}
}


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

void perbarui(struct data a[50],int n,int update){
	int i;
	for (i = 0; i < n; i++) {
             if (a[i].resi==update) {
             	printf("Masukkan nomor resi:");
                scanf("%i",&a[i].resi);
                printf("Masukkan nama penerima:");
                scanf("%s",&a[i].namapenerima);
                printf("Masukkan alamat penerima(jalan):");
				scanf("%s",&a[i].addr.jalan);
				printf("Masukkan alamat penerima(no):");
				scanf("%i",&a[i].addr.norumah);
				printf("Masukkan alamat penerima(kota):");
				scanf("%s",&a[i].addr.kota);
				printf("Masukkan alamat penerima(provinsi):");
				scanf("%s",&a[i].addr.provinsi);
                printf("Masukkan nama pengirim:");
                scanf("%s",&a[i].namapengirim);
                printf("Masukkan alamat pengirim(jalan):");
				scanf("%s",&a[i].addr1.jalan);
				printf("Masukkan alamat pengirim(no):");
				scanf("%i",&a[i].addr1.norumah);
				printf("Masukkan alamat pengirim(kota):");
				scanf("%s",&a[i].addr1.kota);
				printf("Masukkan alamat pengirim(provinsi):");
				scanf("%s",&a[i].addr1.provinsi);
				printf("\nBerat barang  :");
				scanf("%i",&a[i].berat);
				printf("\nJenis Pengiriman(kilat/reguler/dsb) :");
				scanf("%s",&a[i].jenis);
				printf("Total harga  :");
				scanf("%i",&a[i].totharga);
				
	}
}
}

int pencarian2(struct data a[50],int n,int i,char namapenerima[15][15]){
	int flag=-1;
	
	if(strcmp(a[i].namapenerima,namapenerima)==0){
		
		printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------+");
		printf("\n|No.Resi| Nama Penerima | Alamat Penerima | Nama Pengirim | Alamat Pengirim | Berat Barang | Jenis Pengiriman | Total Harga |");
		printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------+");
		printf("\n|   %i   |   %s  |	%s no %i kota %s,%s |	%s |	%s no %i kota %s,%s |	%i kg |	%s |	%i |",a[i].resi,a[i].namapenerima,a[i].addr.jalan,a[i].addr.norumah,a[i].addr.kota,a[i].addr.provinsi,a[i].namapengirim,a[i].addr1.jalan,a[i].addr1.norumah,a[i].addr1.kota,a[i].addr1.provinsi,a[i].berat,a[i].jenis,a[i].totharga);
		flag++;
		
	}else{
		if (i<n){
			return pencarian2(a,n,(i+1),namapenerima);
		}
	}
	
	if(flag==-1){
		printf("tidak ada");
	}
	
}

int pencarian3(struct data a[50],int n,int i,int b){
	int flag=-1;
	
	if(a[i].berat==b){
		printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------+");
		printf("\n|No.Resi| Nama Penerima | Alamat Penerima | Nama Pengirim | Alamat Pengirim | Berat Barang | Jenis Pengiriman | Total Harga |");
		printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------+");
		printf("\n|   %i   |   %s  |	%s no %i kota %s,%s |	%s |	%s no %i kota %s,%s |	%i kg |	%s |	%i |",a[i].resi,a[i].namapenerima,a[i].addr.jalan,a[i].addr.norumah,a[i].addr.kota,a[i].addr.provinsi,a[i].namapengirim,a[i].addr1.jalan,a[i].addr1.norumah,a[i].addr1.kota,a[i].addr1.provinsi,a[i].berat,a[i].jenis,a[i].totharga);
		flag++;
		
	}else{
		if (i<n){
			return pencarian3(a,n,(i+1),b);
		}
	}
	
	if(flag==-1){
		printf("tidak ada");
	}
}


int pencarian1(struct data a[50],int n,int i,int resi){
	int flag=-1;
	if(a[i].resi==resi){
		printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------+");
		printf("\n|No.Resi| Nama Penerima | Alamat Penerima | Nama Pengirim | Alamat Pengirim | Berat Barang | Jenis Pengiriman | Total Harga |");
		printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------+");
		printf("\n|   %i   |   %s  |	%s no %i kota %s,%s |	%s |	%s no %i kota %s,%s |	%i kg |	%s |	%i |",a[i].resi,a[i].namapenerima,a[i].addr.jalan,a[i].addr.norumah,a[i].addr.kota,a[i].addr.provinsi,a[i].namapengirim,a[i].addr1.jalan,a[i].addr1.norumah,a[i].addr1.kota,a[i].addr1.provinsi,a[i].berat,a[i].jenis,a[i].totharga);
		flag++;
	}else{
		if (i<n){
			return pencarian1(a,n,(i+1),resi);
		}
	}
	
	if(flag==-1){
		printf("tidak ada");
	}
	
}

int pencarian4(struct data a[50],int n,int i,int harga){
	int flag=-1;
	
	if(a[i].totharga==harga){
		printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------+");
		printf("\n|No.Resi| Nama Penerima | Alamat Penerima | Nama Pengirim | Alamat Pengirim | Berat Barang | Jenis Pengiriman | Total Harga |");
		printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------+");
		printf("\n|   %i   |   %s  |	%s no %i kota %s,%s |	%s |	%s no %i kota %s,%s |	%i kg |	%s |	%i |",a[i].resi,a[i].namapenerima,a[i].addr.jalan,a[i].addr.norumah,a[i].addr.kota,a[i].addr.provinsi,a[i].namapengirim,a[i].addr1.jalan,a[i].addr1.norumah,a[i].addr1.kota,a[i].addr1.provinsi,a[i].berat,a[i].jenis,a[i].totharga);
		flag++;
		
	}else{
		if (i<n){
			return pencarian4(a,n,(i+1),harga);
		}
	}
	
	if(flag==-1){
		printf("tidak ada");
	}
}




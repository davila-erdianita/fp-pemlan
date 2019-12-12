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

int urut1(int n, struct data a[50]){
	int i;
	int last,temp;
	a[0].berat=n;
	buat1(a);
		while(a[0].berat>1)
	{
		last=a[0].berat;
		temp=a[1].berat;
		a[1].berat=a[last].berat;
		a[last].berat=temp;
		a[0].berat--;
		minheap1(a,1);
	}
	printf("hasil : \n");
		printf("\n diurutkan beradasarkan berat barang dari besar ke kecil\n");
			printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------+");
			printf("\n|No.Resi| Nama Penerima | Alamat Penerima | Nama Pengirim | Alamat Pengirim | Berat Barang | Jenis Pengiriman | Total Harga |");
			printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------+");
		for(i=1; i<=n; i++){				
				printf("\n|   %i   |   %s  |	%s no %i kota %s,%s |	%s |	%s no %i kota %s,%s |	%i kg |	%s |	%i |",a[i].resi,a[i].namapenerima,a[i].addr.jalan,a[i].addr.norumah,a[i].addr.kota,a[i].addr.provinsi,a[i].namapengirim,a[i].addr1.jalan,a[i].addr1.norumah,a[i].addr1.kota,a[i].addr1.provinsi,a[i].berat,a[i].jenis,a[i].totharga);
	}
	
	Sleep(5000);
	return 0;
}
void buat1(struct data a[50])
{
	int i,n;
	n=a[0].berat;
	for(i=n/2;i>=1;i--)
	minheap1(a,i);
}
void minheap1(struct data a[50],int i)
{
	int j,temp,n,count=1;
	n=a[0].berat;
	while(2*i<=n && count==1)
	{
		j=2*i;
		if(j+1<=n && a[j+1].berat<a[j].berat)
		{
			j=j+1;
		}
		if(a[i].berat<a[j].berat)
		{
			count=0;
		}
		else{
			temp=a[i].berat;
			a[i].berat=a[j].berat;
		    a[j].berat=temp;
			i=j;
		
			}
		}
	}
	
int urut(int n, struct data a[50]){
	int i;
	int last,temp;
	a[0].resi=n;
	buat(a);
		while(a[0].resi>1)
	{
		last=a[0].resi;
		temp=a[1].resi;
		a[1].resi=a[last].resi;
		a[last].resi=temp;
		a[0].resi--;
		minheap(a,1);
	}
	printf("hasil : \n");
		printf("\n diurutkan beradasarkan nomor resi dari besar ke kecil\n");
			printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------+");
			printf("\n|No.Resi| Nama Penerima | Alamat Penerima | Nama Pengirim | Alamat Pengirim | Berat Barang | Jenis Pengiriman | Total Harga |");
			printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------+");
		for(i=1; i<=n; i++){				
				printf("\n|   %i   |   %s  |	%s no %i kota %s,%s |	%s |	%s no %i kota %s,%s |	%i kg |	%s |	%i |",a[i].resi,a[i].namapenerima,a[i].addr.jalan,a[i].addr.norumah,a[i].addr.kota,a[i].addr.provinsi,a[i].namapengirim,a[i].addr1.jalan,a[i].addr1.norumah,a[i].addr1.kota,a[i].addr1.provinsi,a[i].berat,a[i].jenis,a[i].totharga);
	}
	Sleep(5000);
	return 0;
}
void buat(struct data a[50])
{
	int i,n;
	n=a[0].resi;
	for(i=n/2;i>=1;i--)
	minheap(a,i);
}
void minheap(struct data a[50],int i)
{
	int j,temp,n,count=1;
	n=a[0].resi;
	while(2*i<=n && count==1)
	{
		j=2*i;
		if(j+1<=n && a[j+1].resi<a[j].resi)
		{
			j=j+1;
		}
		if(a[i].resi<a[j].resi)
		{
			count=0;
		}
		else{
			temp=a[i].resi;
			a[i].resi=a[j].resi;
		    a[j].resi=temp;
			i=j;
		
			}
		}
	}





int main(){
	data a[50];
	int pil,flag,i=0,input1,n,update,pilih,j,pilihan;
	char input2[10];

	menu:
	system("cls");	
	
	printf("\n+--------------------------MENU UTAMA---------------------------+\n");
	printf("|1. Tambah data							|\n");
	printf("|2. Tampilkan data						|\n");
	printf("|3. Ubah data							|\n");
	printf("|4. Pencarian data						|\n");
	printf("|5. Pengurutan data						|\n");
	printf("Pilih:");
	scanf("%d",&pil);
	switch(pil)
	{
		case 1:printf("\n+----TAMBAH DATA----+\n");
		printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------+");	
			printf("\n> Nomor resi data ke-%d :",i+1);scanf("%i",&a[i].resi);
			printf("\n> Nama Penerima :");fflush (stdin); gets(a[i].namapenerima);
			printf("\n> Alamat Penerima(jalan)  :");fflush (stdin); gets(a[i].addr.jalan);
			printf("\n> Alamat Penerima(no)  :");scanf("%i",&a[i].addr.norumah);
			printf("\n> Alamat Penerima(kota)  :");fflush (stdin); gets(a[i].addr.kota);
			printf("\n> Alamat Penerima(provinsi)  :");fflush (stdin); gets(a[i].addr.provinsi);
			printf("\n> Nama Pengirim  :");fflush (stdin); gets(a[i].namapengirim);
			printf("\n> Alamat Penerima(jalan)  :");fflush (stdin); gets(a[i].addr1.jalan);
			printf("\n> Alamat Pengirim(no)  :");scanf("%i",&a[i].addr1.norumah);
			printf("\n> Alamat Pengirim(kota)  :");fflush (stdin); gets(a[i].addr1.kota);
			printf("\n> Alamat Pengirim(provinsi)  :");fflush (stdin); gets(a[i].addr1.provinsi);
			printf("\n> Berat barang  :");scanf("%i",&a[i].berat);
			printf("\n>Jenis Pengiriman(kilat/reguler/dsb) :");fflush (stdin); gets(a[i].jenis);
			printf("Total harga  :");scanf("%i",&a[i].totharga);
			i++;
		printf("\n+-----------------------------------------------------------------------------------------------------------------------------------------+");
	
		
			goto menu;
			break;
		case 2:
				lihat(i,a);
				Sleep(5000);
			 goto menu;
		
		break;
	
		case 3:
	
			printf("ketik nomor resi :");
			scanf("%i",&update);
			perbarui(a,i,update);
			goto menu;
		break;
		case 4:
				if(i==0){
					printf("\ndata kosong");
					}else{
						data:
						system("cls");

						printf("   PENCARIAN DATA PELANGGAN ");
						printf("\n+-----------------------------------+\n");
						printf(" 1. nama penerima\n");
						printf(" 2. berat \n");
						printf(" 3. no resi\n");
						printf(" 4. total harga \n");
						printf(" 5. kembali ke menu utama");
						printf("\n+-----------------------------------+\n");
						printf(" Masukkan Pilihan : ");
						scanf("%d",&pilih);
						printf("+-----------------------------------+\n");
						switch(pilih){
							case 1 : 	
								printf("Masukkan nama : ");
								scanf("%s",&input2);
								pencarian2(a,i,0,input2);
								Sleep(4000);
								goto data;
								break;
							
							case 2 :
								printf("Masukkan berat barang: ");
								scanf("%d",&input1);
								pencarian3(a,i,0,input1);
								Sleep(4000);
								goto data;
								break;
								
							case 3 : 
								printf("Masukkan no resi : ");
								scanf("%d",&input1);
								pencarian1(a,i,0,input1);
								Sleep(3000);
								goto data;
								break;
							case 4:
									printf("Masukkan total harga: ");
									scanf("%d",&input1);
									pencarian4(a,i,0,input1);
									Sleep(4000);
									goto data;
									break;
							case 5:
								goto menu;
								break;
				}			
				
			}
			case 5:
				if(i==0){
					printf("\ndata kosong");
					}else{
						data2:
						system("cls");
						printf("  	 PENGURUTAN DATA PELANGGAN ");
						printf("\n+-----------------------------------+\n");
						printf(" 1. berat\n");
						printf(" 2. no resi\n");
						printf(" 3. kembali ke menu utama");
						printf("\n+-----------------------------------+\n");
						printf(" Masukkan Pilihan : ");
						scanf("%d",&pilihan);
						printf("+-----------------------------------+\n");
						switch(pilihan){
							case 1 : 
									urut1(i,a);
									Sleep(4000);
			 						goto data2;
			 						break;
			 				case 2 :
			 						urut(i,a);
			 						Sleep(4000);
			 						goto data2;
			 						break;
			 				case 3 :
			 						goto menu;
			 						break;
			 					
			 					
				}
			}
		}
	}


		



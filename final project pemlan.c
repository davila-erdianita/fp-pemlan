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


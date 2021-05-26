#include<stdio.h>
int main(){
//program menghitung gaji karyawan
//Deklarasi
 int gaji,jam;
 char no,nama;
 
// Deskripsi Algoritma
 printf("Program Menghitung Gaji Pegawai\n");
 printf("\n\n");
 printf("Masukan Nomor Pegawai = ");scanf("%s",&no);
 printf("Masukan Nama Pegawai  = ");scanf("%s",&nama);
 printf("Masukan Gaji Pegawai  = ");scanf("%d",&gaji);
 printf("Masukan Jam Lembur    = ");scanf("%d",&jam);
 printf("\n");
 printf("Gaji pokok = Rp. %d\n",gaji);
 int tunjangan;
 tunjangan=0.15*gaji;
 printf("Tunjangan = Rp. %d\n",tunjangan);
 int lembur,duitlemburan;
 lembur=0.03*gaji;
 printf("Uang Lemburan Per-Jam = Rp. %d\n",lembur);
 duitlemburan=lembur*jam;
 printf("Total Uang Lemburan = Rp. %d\n",duitlemburan);
 int total;
 total=gaji+tunjangan+duitlemburan;
 printf("Total Gaji = Rp. %d\n",total);

return 0;
}

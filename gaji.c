#include<stdio.h>
int main(){
//program menghitung gaji karyawan
//Deklarasi
 int gaji,jam,tunjangan,lembur,uanglemburan,jml_gaji;
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
 
 tunjangan=0.15*gaji;
 printf("Tunjangan = Rp. %d\n",tunjangan);

 lembur=0.03*gaji;
 printf("Uang Lemburan Per-Jam = Rp. %d\n",lembur);
 
 uanglemburan=lembur*jam;
 printf("Total Uang Lemburan = Rp. %d\n",uanglemburan);

 jml_gaji=gaji+tunjangan+uanglemburan;
 printf("Total Gaji = Rp. %d\n",jml_gaji);

return 0;
}

#include<stdio.h>
//program menghitung gaji karyawan

int main(){

//Deklarasi
 int jabatan,gaji,jam,tunjangan,lembur,uanglemburan,jml_gaji;
 char nama[100];
 
// Deskripsi Algoritma
 printf("Program Menghitung Gaji Pegawai\n");
 printf("\n\n");
 printf("Masukan Nama Pegawai  = ");
 scanf("%s",&nama);
 printf("Masukan Jam Lembur    = ");
 scanf("%d",&jam);
  printf("Pilih Jabatan Pegawai\n ");
  printf("1. Manajer \n ");
  printf("2. Marketing \n ");
  printf("3. Sales \n ");
  printf("4. Administrasi \n ");
   printf("5. OB \n ");
  printf("6. Kurir \n ");
  printf("7. Satpam \n ");
 printf("Masukan Jabatan Pegawai (1/2/3/4/5/6/7)  = ");
 scanf("%d",&jabatan);

switch (jabatan){
	case 1:
		gaji=4000000;
		tunjangan=0.15*gaji;
	    printf("Tunjangan = Rp. %d\n",tunjangan);
	
		lembur=0.03*gaji;
		printf("Uang Lemburan Per-Jam = Rp. %d\n",lembur);
	 
		uanglemburan=lembur*jam;
		printf("Total Uang Lemburan = Rp. %d\n",uanglemburan);
	
		jml_gaji=gaji+tunjangan+uanglemburan;
		printf("Total Gaji = Rp. %d\n",jml_gaji);
	break;
	case 2:
			gaji=2200000;
			tunjangan=0.15*gaji;
		    printf("Tunjangan = Rp. %d\n",tunjangan);
		
			lembur=0.03*gaji;
			printf("Uang Lemburan Per-Jam = Rp. %d\n",lembur);
		 
			uanglemburan=lembur*jam;
			printf("Total Uang Lemburan = Rp. %d\n",uanglemburan);
		
			jml_gaji=gaji+tunjangan+uanglemburan;
			printf("Total Gaji = Rp. %d\n",jml_gaji);
	break;
	case 3:
			gaji=1800000;
			tunjangan=0.15*gaji;
		    printf("Tunjangan = Rp. %d\n",tunjangan);
		
			lembur=0.03*gaji;
			printf("Uang Lemburan Per-Jam = Rp. %d\n",lembur);
		 
			uanglemburan=lembur*jam;
			printf("Total Uang Lemburan = Rp. %d\n",uanglemburan);
		
			jml_gaji=gaji+tunjangan+uanglemburan;
			printf("Total Gaji = Rp. %d\n",jml_gaji);
	break;
	case 4:
			gaji=1800000;
			tunjangan=0.15*gaji;
		    printf("Tunjangan = Rp. %d\n",tunjangan);
		
			lembur=0.03*gaji;
			printf("Uang Lemburan Per-Jam = Rp. %d\n",lembur);
		 
			uanglemburan=lembur*jam;
			printf("Total Uang Lemburan = Rp. %d\n",uanglemburan);
		
			jml_gaji=gaji+tunjangan+uanglemburan;
			printf("Total Gaji = Rp. %d\n",jml_gaji);
	break;
	case 5:
			gaji=1200000;
			tunjangan=0.15*gaji;
		    printf("Tunjangan = Rp. %d\n",tunjangan);
		
			lembur=0.03*gaji;
			printf("Uang Lemburan Per-Jam = Rp. %d\n",lembur);
		 
			uanglemburan=lembur*jam;
			printf("Total Uang Lemburan = Rp. %d\n",uanglemburan);
		
			jml_gaji=gaji+tunjangan+uanglemburan;
			printf("Total Gaji = Rp. %d\n",jml_gaji);
	break;
	case 6:
			gaji=1200000;
			tunjangan=0.15*gaji;
		    printf("Tunjangan = Rp. %d\n",tunjangan);
		
			lembur=0.03*gaji;
			printf("Uang Lemburan Per-Jam = Rp. %d\n",lembur);
		 
			uanglemburan=lembur*jam;
			printf("Total Uang Lemburan = Rp. %d\n",uanglemburan);
		
			jml_gaji=gaji+tunjangan+uanglemburan;
			printf("Total Gaji = Rp. %d\n",jml_gaji);
	break;
	case 7:
			gaji=2000000;
			tunjangan=0.15*gaji;
		    printf("Tunjangan = Rp. %d\n",tunjangan);
		
			lembur=0.03*gaji;
			printf("Uang Lemburan Per-Jam = Rp. %d\n",lembur);
		 
			uanglemburan=lembur*jam;
			printf("Total Uang Lemburan = Rp. %d\n",uanglemburan);
		
			jml_gaji=gaji+tunjangan+uanglemburan;
			printf("Total Gaji = Rp. %d\n",jml_gaji);
	break;
	default:
		printf("Jabatan yang anda masukkan tidak terdaftar");
}
 
return 0;
}

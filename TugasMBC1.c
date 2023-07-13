#include <stdio.h>
void main() {
	//Dictionary
	int plh,bilmod1,bilmod2,mod;
	float bil1, bil2, jwbn;
	printf("\t\t=====Kalkulator Sederhana=====\n");
	printf("\n\t\tPilihlah operasi dibawah ini! \n\n \t\t     1. Pertambahan \n \t\t     2. Pengurangan \n \t\t     3. Perkalian \n \t\t     4. Pembagian \n \t\t     5. Modulo\n\n \t\tPilihan Operasi diatas = ");
	scanf("%d", &plh);
	switch(plh){
		case 1:
			system("cls");
			printf("\t\t=====Kalkulator Sederhana=====\n\n");
			printf("\t\t    ===Menu Pertambahan===\n\n\n");
			printf("\t\tAngka Pertama\t: "); scanf("%f", &bil1);
			printf("\t\tAngka Kedua\t: "); scanf("%f", &bil2);
			jwbn= (bil1 + bil2);
			printf("\n\t\tHasil dari %.2f + %.2f = %.2f\n\n", bil1, bil2, jwbn);
			system("pause"); system("cls");
			main();
		case 2:
			system("cls");
			printf("\t\t=====Kalkulator Sederhana=====\n\n");
			printf("\t\t    ===Menu Pengurangan===\n\n\n");
			printf("\t\tAngka Pertama\t: "); scanf("%f", &bil1);
			printf("\t\tAngka Kedua\t: "); scanf("%f", &bil2);
			jwbn= (bil1 - bil2);
			printf("\n\t\tHasil dari %.2f - %.2f = %.2f\n\n", bil1, bil2, jwbn);
			system("pause"); system("cls");
			main();
		case 3:
			system("cls");
			printf("\t\t=====Kalkulator Sederhana=====\n\n");
			printf("\t\t    ===Menu Perkalian===\n\n\n");
			printf("\t\tAngka Pertama\t: "); scanf("%f", &bil1);
			printf("\t\tAngka Kedua\t: "); scanf("%f", &bil2);
			jwbn= (bil1 * bil2);
			printf("\n\t\tHasil dari %.2f x %.2f = %.2f\n\n", bil1, bil2, jwbn);
			system("pause"); system("cls");
			main();
		case 4:
			system("cls");
			printf("\t\t=====Kalkulator Sederhana=====\n\n");
			printf("\t\t    ===Menu Pembagian===\n\n\n");
			printf("\t\tAngka Pertama\t: "); scanf("%f", &bil1);
			printf("\t\tAngka Kedua\t: "); scanf("%f", &bil2);
			jwbn= (bil1 / bil2);
			printf("\n\t\tHasil dari %.2f / %.2f = %.2f\n\n", bil1, bil2, jwbn);
			system("pause"); system("cls");
			main();
		case 5:
			system("cls");
			printf("\t\t=====Kalkulator Sederhana=====\n\n");
			printf("\t\t    ===Menu Modulo===\n\n\n");
			printf("\t\tAngka Pertama\t: "); scanf("%d", &bilmod1);
			printf("\t\tAngka Kedua\t: "); scanf("%d", &bilmod2);
			mod= (bilmod1 % bilmod2);
			printf("\n\t\tHasil dari %d mod %d = %d\n\n", bilmod1, bilmod2, mod);
			system("pause"); system("cls");
			main();
		default:
			printf("\n\t\tTIDAK ADA PILIHAN OPERASI DARI ANGKA DIATAS !!!\n\n");
			system("pause"); system("cls");
			main();
	}
	return 0;
} 
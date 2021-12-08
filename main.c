#include <stdio.h>
#include <stdlib.h>

void menu()
{
  printf("Operator Bank\n\n");
  printf("Menu:\n");
  printf("1. Tambah Nasabah\n2. Hapus Nasabah\n3. Tampil List Nasabah\n4. Tampil Saldo Nasabah\n5. Tambah/Tarik Saldo Nasabah\n6. Transfer Saldo\n7. Riwayat\n8. Exit\n");
}

int main()
{
  int pilMenu, ul;
  do
  {
    menu();
    printf("Pilihan Menu: ");
    scanf("%d", &pilMenu);
    switch (pilMenu)
    {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      exit(1);
      break;
    default:
      printf("Pilihan Invalid!!\n");
      break;
    }
    printf("Untuk ulang ketik 1: ");
    scanf("%d", &ul);
    system("cls");
  } while (ul == 1);
}
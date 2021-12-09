#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 7
int jmlHash;

typedef struct infoNasabah
{
  char *nama;
  int noRek;
  struct infoNasabah *next;
} nasabah;

nasabah *globalChain[max];

void init(nasabah *table[])
{
  int i;
  for (i = 0; i < jmlHash; i++)
  {
    table[i] = NULL;
  }
}

unsigned int hash(int rek)
{
  int index = rek % jmlHash;
  return index;
}

void input(nasabah *table[], char nama[75], int rek)
{
  nasabah *baru = (nasabah *)malloc(sizeof(nasabah));
  baru->nama = strdup(nama);
  baru->noRek = rek;
  baru->next = NULL;

  int index = hash(rek);
  if (table[index] == NULL)
  {
    table[index] = baru;
  }
  else
  {
    nasabah *bantu = table[index];
    while (bantu->next)
    {
      bantu = bantu->next;
    }
    bantu->next = baru;
  }
}

void display(nasabah *chain[])
{
  int i;
  for (i = 0; i < jmlHash; i++)
  {
    nasabah *baru = chain[i];
    printf("chain[%d] >>> ", i + 1);
    while (baru)
    {
      printf("Nama: %s\n", baru->nama);
      printf("No Rek: %d\n", baru->noRek);
      baru = baru->next;
    }
    printf("NULL\n");
  }
}

void menu()
{
  printf("Operator Bank\n\n");
  printf("Menu:\n");
  printf("1. Tambah Nasabah\n2. Hapus Nasabah\n3. Tampil List Nasabah\n4. Tampil Saldo Nasabah\n5. Tambah/Tarik Saldo Nasabah\n6. Transfer Saldo\n7. Riwayat\n8. Exit\n");
}

int main()
{
  int pilMenu, ul;
  int i, rekTemp;
  char namaTemp[75];
  do
  {
    menu();
    printf("Pilihan Menu: ");
    scanf("%d", &pilMenu);
    if (pilMenu == 1)
    {
      printf("Masukkan jumlah nasabah: ");
      scanf("%d", &jmlHash);
      nasabah *chain[jmlHash];
      init(chain);
      printf("\n");
      for (i = 0; i < jmlHash; i++)
      {
        printf("Masukkan nama nasabah ke-%d: ", i + 1);
        scanf(" %75[^\n]s", &namaTemp);
        printf("Masukkan No. Rekening nasabah: ");
        scanf("%d", &rekTemp);
        input(chain, namaTemp, rekTemp);
      }
      for (i = 0; i < jmlHash; i++)
      {
        globalChain[i] = chain[i];
      }
    }
    else if (pilMenu == 2)
    {
    }
    else if (pilMenu == 3)
    {
      display(globalChain);
    }
    else if (pilMenu == 4)
    {
    }
    else if (pilMenu == 5)
    {
    }
    else if (pilMenu == 6)
    {
    }
    else if (pilMenu == 7)
    {
    }
    else if (pilMenu == 8)
    {
      exit(1);
    }
    else
    {
      printf("Pilihan Invalid!!\n");
    }
    printf("Untuk ulang ketik 1: ");
    scanf("%d", &ul);
    system("cls");
  } while (ul == 1);
}
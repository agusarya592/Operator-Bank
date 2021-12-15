#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define max 5
//ngetest aja
int jumlahnode = 0;

struct node
{
  char nama[50];
  long int nomor, saldo, pass;
  struct node *prev;
  struct node *next;
} * head, *temp, *temp1;

void buatnode()
{
  int nomor, saldo, pass;
  char nama[30];
  temp = (struct node *)malloc(sizeof(struct node));
  temp->prev = NULL;
  temp->next = NULL;
  printf("|$|Masukkan nama nasabah        : ");
  scanf(" %49[^\n]", &nama);
  printf("|$|Masukkan nomor identitas     : ");
  scanf("%d", &nomor);
  printf("|$|Masukkan password identitas  : ");
  scanf("%d", &pass);
  printf("|$|Masukkan jumlah top up saldo : ");
  scanf("%d", &saldo);
  temp->nomor = nomor;
  temp->pass = pass;
  temp->saldo = saldo;
  strcpy(temp->nama, nama);
  jumlahnode++;
}

void tambahdatahead()
{
  printf("|$|-----------------------------------------|$|\n");
  printf("|$|          Tambah Data Nasabah            |$|\n");
  printf("|$|-----------------------------------------|$|\n");
  if (head == NULL)
  {
    buatnode();
    head = temp;
    temp1 = head;
  }
  else
  {
    buatnode();
    temp1->next = temp;
    temp->prev = temp1;
    temp1 = temp;
  }
}

int main()
{
  int menu, ulang;
  do
  {
    system("cls");
    printf("|$|-----------------------------------------|$|\n");
    printf("|$|----------------Menu Bank----------------|$|\n");
    printf("|$|-----------------------------------------|$|\n");
    printf("|$|     1. Tambah Data Nasabah              |$|\n");
    printf("|$|-----------------------------------------|$|\n");
    printf("|$|     2. Hapus Data Nasabah               |$|\n");
    printf("|$|-----------------------------------------|$|\n");
    printf("|$|     3. Tampilkan Data Nasabah           |$|\n");
    printf("|$|-----------------------------------------|$|\n");
    printf("|$|     4. Top Up Saldo Nasabah             |$|\n");
    printf("|$|-----------------------------------------|$|\n");
    printf("|$|     5. Tarik  Saldo Nasabah             |$|\n");
    printf("|$|-----------------------------------------|$|\n");
    printf("|$|     6. Transfer Saldo ke Nasabah Lain   |$|\n");
    printf("|$|-----------------------------------------|$|\n");
    printf("|$|     7. Cek Riwayat Transfer             |$|\n");
    printf("|$|-----------------------------------------|$|\n");
    printf("|$|     8. Cek Riwayat Transaksi            |$|\n");
    printf("|$|-----------------------------------------|$|\n");
    printf("|$|Masukkan pilihan : ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
      system("cls");
      tambahdatahead();
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
      break;
    default:
      printf("|$|Mohon maaf menu yg anda pilih salah");
      break;
    }
    printf("\n|$|Apakah anda ingin mengulang? Input 1 jika ya : ");
    scanf("%d", &ulang);

  } while (ulang == 1);
  return;
}

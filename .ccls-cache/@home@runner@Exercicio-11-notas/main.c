#include <stdio.h>

int main(void) {
  int mat,a=0,r=0,alunos=0;
  float n1, n2, n3, media = 0;

  do {
    printf("Digite a matricula: ");
    scanf("%d", &mat);
    if (mat == 9999) {
      break;
    }
    alunos++;
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    media = 0;
    media = ((2 * n1) + (3 * n2) + (4 * n3)) / 9;

    if (media >= 6) {
      printf(" \n");
      printf("Matricula %d\n", mat);
      printf("Média final %.2f\n", media);
      printf("APROVADO\n");
      printf(" \n");
      a++;
    } else if (media < 6) {
      printf(" \n");
      printf("Matricula %d\n", mat);
      printf("Média final %.2f\n", media);
      printf("REPROVADO\n");
      printf(" \n");
      r++;
    }

  } while (mat != 9999);

  printf("Total de aprovados %d\n", a);
  printf("Total de alunos na turma %d\n", alunos);
  printf("Total de reprovados %d\n", r);
}
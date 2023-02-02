#include<stdio.h>

int main() {
    int i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    char a[3][3];
    for (i = 0; i < 3; i++)
      for (j = 0; j < 3; j++) {
        a[i][j] = ' ';
      }
    for (k = 0; k < 3; k++) {
      printf("\n\t\t\t\t\t\t  %c | %c | %c \n\t\t\t\t\t\t ----------", a[k][0], a[k][1], a[k][2]);
    }
    printf("\n\n\t\t\t\t\t\t    1   2   3\n\n\t\t\t\t\t\t    4   5   6\n\n\t\t\t\t\t\t    7   8   9\n\n");
    for (l = 0; l < 9; l++) {
      printf("Player %d : ", l % 2 + 1);
      scanf("%d", & m);
      if (m == 1) {
        a[0][0] = (l % 2 == 0) ? 'X' : 'O';
      } else if (m == 2) {
        a[0][1] = (l % 2 == 0) ? 'X' : 'O';
      } else if (m == 3) {
        a[0][2] = (l % 2 == 0) ? 'X' : 'O';
      } else if (m == 4) {
        a[1][0] = (l % 2 == 0) ? 'X' : 'O';
      } else if (m == 5) {
        a[1][1] = (l % 2 == 0) ? 'X' : 'O';
      } else if (m == 6) {
        a[1][2] = (l % 2 == 0) ? 'X' : 'O';
      } else if (m == 7) {
        a[2][0] = (l % 2 == 0) ? 'X' : 'O';
      } else if (m == 8) {
        a[2][1] = (l % 2 == 0) ? 'X' : 'O';
      } else if (m == 9) {
        a[2][2] = (l % 2 == 0) ? 'X' : 'O';
      }
      for (n = 0; n < 3; n++) {
        printf("\n\t\t\t\t\t\t  %c | %c | %c \n\t\t\t\t\t\t ----------", a[n][0], a[n][1], a[n][2]);
      }
      printf("\n");
      for (o = 0; o < 3; o++)
        for (p = 0; p < 3; p++) {
          if (a[o][0] == a[o][1] && a[o][1] == a[o][2] && a[o][2] != ' ') {
            printf("\t\t\t\t\t\tPlayer %d won\n", l % 2 + 1);
            return 0;
          } else if (a[0][p] == a[1][p] && a[1][p] == a[2][p] && a[2][p] != ' ') {
            printf("\t\t\t\t\t\tPlayer %d won\n", l % 2 + 1);
            return 0;
          } else if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[2][2] != ' ') {
            printf("\t\t\t\t\t\tPlayer %d won\n", l % 2 + 1);
            return 0;
          } else if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[2][0] != ' ') {
            printf("\t\t\t\t\t\tPlayer %d won\n", l % 2 + 1);
            return 0;
          }
        }
      if (l == 8) {
        printf("\t\t\t\t\t\tIt's a draw\n");
        return 0;
      }
    }
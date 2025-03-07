#include <stdio.h>

void GetMatrix(int value[10][10], int *row, int *col);
void PrintMatrix(int value[10][10], int row, int col);

int main() {
    int data[10][10]; 
    int m, n;

    GetMatrix(data, &m, &n);  
    PrintMatrix(data, m, n); 

    return 0;
}

void GetMatrix(int value[10][10], int *row, int *col) {
    printf("Enter number of rows and columns: ");
    scanf("%d %d", row, col);  

    printf("Enter matrix values:\n");
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            scanf("%d", &value[i][j]); 
        }
    }
}

void PrintMatrix(int value[10][10], int row, int col) {
    printf("Matrix (%dx%d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", value[i][j]); 
        }
        printf("\n");
    }
}

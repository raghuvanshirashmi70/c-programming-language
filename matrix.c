//  printf("Second matrix is:\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d ", arr2[i][j]);
//         }
//         printf("\n");
//     }

//     // Matrix addition
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             sum[i][j] = arr[i][j] + arr2[i][j];
//         }
//     }

//     printf("Sum of the two matrices is:\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d ", sum[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


#include <stdio.h>


// int main() {
//     int i, j, n;

//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for(i = 1; i <= n; i++) {     
//         for(j = 1; j <= n; j++) {   
//             printf("*");
//         }
//         printf("\n");              
//     }

//     return 0;
// }


    


// int main() {
//     int rows, i, j;

//     printf("Enter number of rows: ");
//     scanf("%d", &rows);

//     for(i = 1; i <= rows; i++) {
//         for(j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main() {
//     int i, j, n;

//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for(i = n; i >= 1; i--) {       
//         for(j = 1; j <= i; j++) {   
//             printf("*");
//         }
//         printf("\n");                
//     }

//     return 0;
// }
    
       
// int main() {
//     int i, j;
//     int rows, cols;

//     printf("Enter number of rows: ");
//     scanf("%d", &rows);

//     printf("Enter number of columns: ");
//     scanf("%d", &cols);

//     for(i = 1; i <= rows; i++) {          
//         for(j = 1; j <= cols; j++) {
//                    if (i == 1 || i == rows || j == 1 || j == cols) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
        
//     }

//     return 0;
// }


// int main() {
//     for (int i = 1; i <= 5; i++) {
//         for (int j = 1; j <= 6 - i; j++) {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }

//     return 0;
// }
        
// int main() {
//     int size;
    
//     scanf("%d", &size);
//     for (int i = 1; i <= size; i++) {
//         for (int j = 1; j <= size; j++) {
//             if (i == j) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }
// int main() {
//     int n;
//     printf("Enter the size of the square: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (j == n - i + 1) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
       
//         printf("\n");
//     }

//     return 0;
// }

// int main() {
//     int rows;
    
//      printf("Enter number of rows: ");
//      scanf("%d", &rows);
//      for (int i = 1; i <= rows; i++) {
//          for (int j = 1; j <= i; j++) {
//              if ((i + j) % 2 == 0) {
//                  printf("1 ");
//              } else {
//                  printf("0 ");
//              }
//          }
         
//          printf("\n");
//      }
//      return 0;
//  }


//    int main() {
//     int rows;
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);
//     for (int i = 1; i <= rows; i++) {
        
//         for (int space = 1; space <= rows - i; space++) {
//             printf("  ");
//         }
//         for (int num = 1; num <= i; num++) {
//             printf("%d ", num);
//         }
//         printf("\n");
//     }

//     return 0;
// }

//  int main() {
//     int rows;
//     char ch = 'A';
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);
//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%c ", ch+j);
//         }
//         printf("\n");
//     }

//     return 0;
// }
  

// int main() {
//     int i, j, rows;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for(i = 1; i <= rows; i++) {
//         for(j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }
    

// int main() {
//     int i, j;
//     for(i = 4; i >= 1; i--) {
//         for(j = 1; j <= i; j++) {
//             printf(" *");
//         } 
//        printf("\n");
//     }
//     for(i = 2; i <= 4; i++) {
//         for(j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }
           
//    

//    int main() {
//        int i, j;
//        int rows = 5;
//           for(i = 1; i <= rows; i++) {
//               for(j = 1; j <= i; j++) {
//                   printf("* ");
//               }
//               printf("\n");
//           }
//           for(i = rows - 1; i >= 1; i--) {
//               for(j = 1; j <= i; j++) {
//                   printf("* ");
//               }
//               printf("\n");
//           }
//           return 0;
//       }
//         int main() {
//     int i, j;
//     int size = 4; 
//     for(i = 0; i < size; i++) {
//         for(j = 0; j < size; j++) {
           
//             if(i == 0 || i == size - 1 || j == 0 || j == size - 1)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main() {
//     int rows, cols;

//     printf("Enter number of rows and columns: ");
//     scanf("%d %d", &rows, &cols);

//     int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

   
//     printf("Enter elements of first matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix1[i][j]);
//         }
//     }

    
//     printf("Enter elements of second matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix2[i][j]);
//         }
//     }

    
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             result[i][j] = matrix1[i][j] - matrix2[i][j];
//         }
//     }

    
//     printf("Resultant matrix after subtraction:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main(){
//     int matrix[3][3];
//     // int matrix2[3][3];
//     int transpose[10][10];
//     printf("enter your first matrix :");
//     for(int i = 0;i < 3;i++){
//         for(int j = 0; j < 3;j++){
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//      for(int i = 0;i < 3;i++){
//       for(int j = 0; j < 3;j++){
//         transpose[j][i] = matrix[i][j];
//       }  
//      }
//      printf("\n transpose of the matrix :");
//      for(int i = 0;i < 3;i++){
//        for(int j = 0; j < 3;j++){
// printf("%d",transpose[i][j]);
//        } 
//        printf("\n");
//      }
//      return 0;
// }


// int main(){
//     int arr1[3][3];
//     int arr2[3][3];
//     int multiplication[3][3];
//     printf("enter your first matrix :");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d", &arr1[i][j]);
//         }
//     }
  
// printf("enter your second matrix :");
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         scanf("%d", &arr2[i][j]);
//     }
// }


// printf("matrix multiply");
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         multiplication[i][j] =0;
//         for(int k=0;k<3;k++){
//             multiplication[i][j] += arr1[k][i] * arr2[k][j];
//         }
//     }
// }
// printf("multiplication of matrix : \n");
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         printf("%d", multiplication[i][j]);
//     }
//     printf("\n");
// }
// return 0;
// }




   

 





   


       

        
   

    

   










    

    
        
       

    

 

       

       
           



    
        
           

    

    
        
            
        

        
    
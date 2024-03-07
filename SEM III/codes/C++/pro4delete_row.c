#include<stdio.h>
void display(int arr[3][4],int m,int n){
    int i,j;
    for(i = 0; i<m; i++){
        for(j=0; j<n; j++){
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void delete_row(int a[3][4],int r,int c,int row_number){
    int i,j;
    for(i = 0; i<r; i++){
        for(j=0; j<c; j++){
                a[row_number][j] = a[row_number+1][j];
        }
        row_number++;
    } 
    display(a,--r,c);
}

void insert_row(int a[3][4],int r,int c,int index){
    int in[4]={0,0,0,0};
    int row = r+1;
    int arr[row][4];
    int i,j,k;
   
    for(i = 0; i<row; i++){
        for(j=0; j<c; j++){
            if (i < index){
               arr[i][j] = a[i][j];
            }
            else if(index == i){
               arr[i][j] = in[j];
            }
            else{
                arr[i][j] = a[i-1][j];                
            }
    }
    }
    display(arr,++r,c);
}

int main(){
        int r=3,c=4,row_number,i,j,k,ch;
        int arr[3][4];
    //read array
    printf("Enter the array elements : ");
        for(i = 0; i<r; i++){
            for(j=0; j<c; j++){
                scanf("%d",&arr[i][j]);
            }
        }
        printf("Array is:  \n");
        display(arr,r,c);

        printf("enter 1 to insert row and 2 to delete row  \n");
        scanf("%d",&ch);
        switch (ch) {
        case 1:
            printf("after inserting the row \n");
            insert_row(arr,r,c,1);
            break;
        case 2:
            printf("which row index to delete? ");
            scanf("%d",&row_number);        
            delete_row(arr,r,c,row_number);
            break;
        }
      
    return 0;
}
/*Input: 
Row:3,
Columm:5

Output:
a  b    c   d   e   f   
a  b    c   d   e   f   
a  b    c   d   e   f   
*/

#include <stdio.h>

void Display(int iRow,int  iCol){
    //Logic
    int i=0, j=0;
    char ch = 'a';
   for( i =1; i<= iRow; i++){
    for(j=1, ch ='a';j<=iCol; j++, ch++){
        printf("%c\t",ch);
    }
    printf("\n");
   }
}

int main(){
    int iValue1 =0, iValue2=0;

    printf("Enter Number of rows \n");
    scanf("%d", &iValue1);
    printf("Enter Number of Columns \n");
    scanf("%d", &iValue2);
    Display(iValue1, iValue2);
    return 0;
}
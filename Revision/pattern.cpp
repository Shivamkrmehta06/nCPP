#include <iostream>
using namespace std;

/* 
*
**
***
****
*****
*/

void patt(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

/* 
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

void patte(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

/* 
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/


void patter(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

/* 
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/

void pattern(int n){
    for(int i=1;i<=n;i++){
        int a=i;
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
    }
}

/* 
A
A B
A B C
A B C D
A B C D E
*/

void pattAB(int n){
    for(int i=1;i<=n;i++){
        char c='A';
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}

/* 
A
B B
C C C
D D D D
E E E E E
*/

void patternAB(int n){
    char c='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
        }
        c++;
        cout<<endl;
    }
}

/* 
A
B C
D E F
G H I J
K L M N O
*/

void patternCO(int n){
    char c='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}

/* 
    *
   ***
  *****
 *******
*********
*/

void patternCX(int n){
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space>0){
            cout<<" ";
            space--;
        }
        int j=2*i-1;
        while(j>0){
            cout<<"*";
            j--; 
        }
        cout<<endl;
        i++;
    }
}

/* 
*********
 *******
  *****
   ***
    *
*/
void patternIN(int n){
    int i = 1;
    while(i<=n){
        int spaces=i-1;
        while(spaces>0){
            cout<<" ";
            spaces--;
        }
        int j=2*n-2*i;
        while(j>=0){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
}

/* 
*
**
***
****
*****
****
***
**
*
*/

void halfpat(int n){
    int row=1;
    while(row<=n){
        int col=1;
        while(row>=col){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }         
    int r1=1;
    while(r1<=n-1){
        int str=n-r1;
        while(str){
            cout<<"*";
            str--;
        }
        cout<<endl;
        r1++;
    }
}

/* 
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

void patternXA(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<1;
            }else{
                cout<<0;
            }
        }
        cout<<endl;
    }
}

/* 
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/

void butterfly(int n){
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        int spaces=(2*n)-(2*row);
        while(spaces){
            cout<<" ";
            spaces--;
        }
        int col1=1;
        while(col1<=row){
            cout<<"*";
            col1++;
        }
        cout<<endl;
        row++;
    }
    int r1=0;
    while(r1<n){
        int str=n-r1;
        while(str>0){
            cout<<"*";
            str--;
        }
        int sp=2*r1;
        while(sp>0){
            cout<<" ";
            sp--;
        }
        int st=n-r1;
        while(st>0){
            cout<<"*";
            st--;
        }
        cout<<endl;
        r1++;
    }
}

/* 
    1
   121
  12321
 1234321
123454321                                                                       
*/

void idnum(int n){
    int row=1;
    while(row<=n){
        int spaces=n-row;
        while(spaces){
            cout<<" ";
            spaces--;
        }
        int j=1;
        while(j<=row){
            cout<<j;
            j++;
        }
        int pat=row-1;
        while(pat>0){
            cout<<pat;
            pat--;
        }
        cout<<endl;
        row++;
    }
}

/* 
    *
   * *
  *   *
 *     *
*********
*/

void holpy(int n){
    int row=1;
    while(row<=n){
        int spaces=n-row;
        while(spaces){
            cout<<" ";
            spaces--;
        }
        int col=1;
        int width=2*row-1;
        while(col<=width){
            if(col==1||col==width||row==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
            col++;
        }
        cout<<endl;
        row++;
    }
}

/* 
* * * * *
*       *
*       *
*       *
* * * * *
*/

void hollow(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

/* 
*******
*     *
*     *
*******
*/

void hlrect(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*n)-1;j++){
            if(i==1||i==n||j==1||j==(2*n)-1){
                cout<<"*";
            }
            else cout<<" ";
            
        }
        cout<<endl;
    }
}

/* 
*
**
* *
*  *
*****
*/

void hltria(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==1||i==n||j==1||j==i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

/* 
*****
*  *
* *
**
*
*/

void hlInvTria(int n){
    n=n+1;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            if(i==1||j==1||j==n-i){
                cout<<"*";
            }else cout<<" ";
        }
        cout<<endl;
    }
}

/* 
    *
   * *
  *   *
 *     *
*********
*/

void hlpyramid(int n){
    for(int i=0;i<n;i++){
        for(int s=0;s<n-i;s++){
            cout<<" ";
        }
        for(int j=0;j<(2*i)+1;j++){
            if(i==0||i==n-1||j==0||j==(2*i)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

/* 
*********
 *     *
  *   *
   * *
    * 
*/

void hlinvpyra(int n){
    n=n+1;
    for(int i=1;i<=n;i++){
        for(int s=i-1;s>=0;s--){
            cout<<" ";
        }
        for(int j=1;j<(2*n)-2*i;j++){
            if(i==1||i==n||j==1||j==(2*n)-2*i-1)
                cout<<"*";
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

/* 
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
*/

void hldia(int n){
    for(int i=0;i<n;i++){
        for(int s=0;s<n-i;s++){
            cout<<" ";
        }
        for(int j=0;j<(2*i)+1;j++){
            if(j==0||j==(2*i)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    n=n+1;
    for(int i=1;i<=n;i++){
        for(int s=i-1;s>=0;s--){
            cout<<" ";
        }
        for(int j=1;j<(2*n)-2*i;j++){
            if(j==1||j==(2*n)-2*i-1)
                cout<<"*";
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}

int main() {
    hldia(5);
    return 0;
}

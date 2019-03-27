#include<string.h>
#include<limits.h>
#include<assert.h>
#include<time.h>
#include<math.h>
#include<memory.h>


int n, a, b, p1, p2, ctn;
void cls(void){
    system("clear || @cls");
}
int main(){
    scanf("%d", &n);
    int arr[n][n];
    int res[n];
    int ar1[n];
    int ar2[n];
    ctn = n*n;
    memset(arr, 0, sizeof(arr));
    memset(res, 0, sizeof(res));
    memset(ar1, 0, sizeof(ar1));
    memset(ar2, 0, sizeof(ar2));
    while(ctn){

        printf("\n");
        printf("player 1:enter your item\n");
        scanf("%d", &a);
        while(res[a-1] == n){
            printf("this cell is full enter another item\n");
            scanf("%d", &a);
        }
        ctn--;
        arr[n-1-res[a-1]][a-1] = 1, res[a-1]+=1;
        ar1[a-1]++;
        if(ar1[a-1] == n) p1++;
        if(ctn == 0) break;

        printf("Player 2:enter your item\n");
        scanf("%d", &b);
        while(res[b-1] == n){
            printf("this cell is full enter another item\n");
            scanf("%d", &b);
        }
        ctn--;
        arr[n-1-res[b-1]][b-1] = 2, res[b-1]+=1;
        ar2[b-1]++;
        if(ar2[b-1] == n) p2++;
        printf("\n\n");
        cls();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("%d\t", arr[i][j]);
            }
            printf("\n");
        }
    }
    cls();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n%d\n%d", p1, p2);
}


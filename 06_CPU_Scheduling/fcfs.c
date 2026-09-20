#include <stdio.h>

int main(){
    int n,i,j,stock,discount;
    printf("Enter number of buyers: "); scanf("%d",&n);

    int id[n], at[n];
    printf("Enter stock & discount slots: ");
    scanf("%d%d",&stock,&discount);

    for(i=0;i<n;i++){
        printf("Enter buyer id & arrival time: ");
        scanf("%d%d",&id[i],&at[i]);
    }

    for(i=0;i<n;i++) for(j=i+1;j<n;j++)
        if(at[i]>at[j]){
            int t=at[i]; at[i]=at[j]; at[j]=t;
            t=id[i]; id[i]=id[j]; id[j]=t;
        }

    for(i=0;i<n;i++){
        if(stock==0) printf("P%d: SOLD OUT\n",id[i]);
        else if(discount-->0){ printf("P%d: DISCOUNT\n",id[i]); stock--; }
        else { printf("P%d: FULL PRICE\n",id[i]); stock--; }
    }
}

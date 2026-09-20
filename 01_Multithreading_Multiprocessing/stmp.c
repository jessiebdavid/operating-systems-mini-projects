#include <stdio.h>
#include <pthread.h>

char *item[]={"Shirt","Jeans","Shoes","Leggins"};
int price[]={500,1200,2000,400};

void* invoice(void* a){
    int *x=(int*)a;
    int amt=price[x[0]]*x[1];
    printf("%s x%d = Total %d\n",
           item[x[0]],x[1],amt+amt*5/100);
    return NULL;
}

int main(){
    int n;
    printf("Enter number of orders: ");
    scanf("%d",&n);

    pthread_t t[n];
    int d[n][2];

    for(int i=0;i<n;i++){
        printf("\nOrder %d\n1.Shirt 2.Jeans 3.Shoes 4.Leggins\nEnter choice & qty: ",i+1);
        scanf("%d%d",&d[i][0],&d[i][1]);
        d[i][0]--;
        pthread_create(&t[i],0,invoice,d[i]);
    }

    for(int i=0;i<n;i++)
        pthread_join(t[i],0);
}
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/wait.h>

char *item[]={"Shirt","Jeans","Shoes","Leggins"};
int price[]={500,1200,2000,400};

void* invoice(void* a){
    int *x=(int*)a;
    int amt=price[x[0]]*x[1];
    printf("PID %d -> %s x%d = Total %d\n",
           getpid(),item[x[0]],x[1],amt+amt*5/100);
    return NULL;
}

int main(){
    int n;
    printf("Enter number of orders: ");
    scanf("%d",&n);

    int d[n][2];

    for(int i=0;i<n;i++){
        printf("\nOrder %d\n1.Shirt 2.Jeans 3.Shoes 4.Leggins\nEnter choice & qty: ",i+1);
        scanf("%d%d",&d[i][0],&d[i][1]);
        d[i][0]--;
    }

    for(int i=0;i<n;i++){
        if(!fork()){
            pthread_t t;
            pthread_create(&t,0,invoice,d[i]);
            pthread_join(t,0);
            _exit(0);
        }
    }

    while(wait(0)>0);
}
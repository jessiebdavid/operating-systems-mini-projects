#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t mutex,wrt; int count=0,balance;
void* reader(void* id){
    sem_wait(&mutex); count++;
    if(count==1) sem_wait(&wrt); sem_post(&mutex);
    printf("Reader %ld: Balance = %d\n",(long)id,balance);
    sem_wait(&mutex); count--;
    if(count==0) sem_post(&wrt); sem_post(&mutex); return NULL;
}
void* writer(void* a){
    sem_wait(&wrt); balance+=*(int*)a;
    printf("Writer: Balance = %d\n",balance);
    sem_post(&wrt); return NULL;
}
int main(){
    int r,w,x,i; printf("Enter balance, readers, writers, amount: ");
    scanf("%d%d%d%d",&balance,&r,&w,&x);
    pthread_t rt[r],wt[w]; sem_init(&mutex,0,1); sem_init(&wrt,0,1);
    for(i=0;i<r;i++) pthread_create(&rt[i],0,reader,(void*)(long)(i+1));
    for(i=0;i<w;i++) pthread_create(&wt[i],0,writer,&x);
    for(i=0;i<r;i++) pthread_join(rt[i],0);
    for(i=0;i<w;i++) pthread_join(wt[i],0);
}
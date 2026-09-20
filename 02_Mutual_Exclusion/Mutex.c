#include <stdio.h>
#include <pthread.h>

pthread_mutex_t m = PTHREAD_MUTEX_INITIALIZER;
int lock = 0;

void* door(void* id){
    pthread_mutex_lock(&m);
    lock = !lock;
    printf("User %ld: Door %s\n",(long)id,lock?"LOCKED":"UNLOCKED");
    pthread_mutex_unlock(&m);
    return NULL;
}

int main(){
    int n; printf("Enter users: "); scanf("%d",&n);
    pthread_t t[n];
    for(long i=0;i<n;i++) pthread_create(&t[i],0,door,(void*)(i+1));
    for(int i=0;i<n;i++) pthread_join(t[i],0);
    pthread_mutex_destroy(&m);
}

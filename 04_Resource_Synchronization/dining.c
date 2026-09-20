#include <stdio.h>
#include <pthread.h>
pthread_mutex_t gpu[3];
void* worker(void* id){ 
long i=(long)id, l=i, r=(i+1)%3; 
if(l>r){int t=l;l=r;r=t;}
    pthread_mutex_lock(&gpu[l]); 
    pthread_mutex_lock(&gpu[r]);
    printf("AI Worker %ld training model using GPUs %ld & %ld\n", i, l, r);
    pthread_mutex_unlock(&gpu[r]); 
    pthread_mutex_unlock(&gpu[l]); 
    return NULL; 
    }
int main(){ 
pthread_t t[3];
    for(int i=0;i<3;i++) 
    pthread_mutex_init(&gpu[i],NULL);
    for(long i=0;i<3;i++) 
    pthread_create(&t[i],NULL,worker,(void*)i);
    for(int i=0;i<3;i++) 
    pthread_join(t[i],NULL); 
    }
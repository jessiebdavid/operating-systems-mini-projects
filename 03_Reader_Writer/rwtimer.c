#include <stdio.h>
#include <pthread.h>
pthread_rwlock_t rw = PTHREAD_RWLOCK_INITIALIZER; 
int time_left = 3600;
void* student(void* id){ 
pthread_rwlock_rdlock(&rw); 
printf("Student %ld views timer: %d sec left\n",(long)id,time_left); 
pthread_rwlock_unlock(&rw); 
return NULL; 
}
void* clock_tick(void* id){ 
pthread_rwlock_wrlock(&rw); 
time_left -= 60; 
printf("Master Clock updated timer to: %d sec\n",time_left); 
pthread_rwlock_unlock(&rw); 
return NULL; 
}
int main(){
    pthread_t s1, s2, c;
    pthread_create(&s1,NULL,student,(void*)101); 
    pthread_create(&c,NULL,clock_tick,NULL); 
    pthread_create(&s2,NULL,student,(void*)102);
    pthread_join(s1,NULL); 
    pthread_join(c,NULL); 
    pthread_join(s2,NULL); 
    pthread_rwlock_destroy(&rw);
}
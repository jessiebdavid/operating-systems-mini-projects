#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t s;
int is_locked = 1;

void* toggle(void* arg){
    long id = (long)arg;

    sem_wait(&s);

    is_locked = !is_locked;
    printf("User %ld toggled lock: %s\n",
           id, is_locked ? "LOCKED" : "UNLOCKED");

    sem_post(&s);

    return NULL;
}

int main(){
    int n;

    printf("Enter number of users: ");
    scanf("%d", &n);

    pthread_t t[n];

    sem_init(&s, 0, 1);

    for(long i = 0; i < n; i++)
        pthread_create(&t[i], NULL, toggle, (void*)(i+1));

    for(int i = 0; i < n; i++)
        pthread_join(t[i], NULL);

    sem_destroy(&s);

    return 0;
}
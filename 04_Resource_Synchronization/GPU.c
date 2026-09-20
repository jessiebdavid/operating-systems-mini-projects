#include <stdio.h>
#include <pthread.h>

pthread_mutex_t gpu[100]; // max limit
int n;

void* worker(void* arg){
    long i = (long)arg;

    int l = i;
    int r = (i + 1) % n;

    if(l > r){
        int t = l;
        l = r;
        r = t;
    }

    pthread_mutex_lock(&gpu[l]);
    pthread_mutex_lock(&gpu[r]);

    printf("AI Worker %ld using GPUs %d & %d\n", i, l, r);

    pthread_mutex_unlock(&gpu[r]);
    pthread_mutex_unlock(&gpu[l]);

    return NULL;
}

int main(){

    printf("Enter number of workers: ");
    scanf("%d", &n);

    pthread_t t[n];

    for(int i = 0; i < n; i++)
        pthread_mutex_init(&gpu[i], NULL);

    for(long i = 0; i < n; i++)
        pthread_create(&t[i], NULL, worker, (void*)i);

    for(int i = 0; i < n; i++)
        pthread_join(t[i], NULL);

    for(int i = 0; i < n; i++)
        pthread_mutex_destroy(&gpu[i]);

    return 0;
}
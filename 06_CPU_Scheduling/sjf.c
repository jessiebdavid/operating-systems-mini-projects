#include <stdio.h>

int main(){
    int n,i,j; float speed=20.0; // km/hr
    printf("Enter number of orders: "); scanf("%d",&n);

    int id[n]; float dist[n], time[n];

    for(i=0;i<n;i++){
        printf("Enter id & distance(km): ");
        scanf("%d%f",&id[i],&dist[i]);
        time[i] = (dist[i]/speed)*60; // convert to minutes
    }

    for(i=0;i<n;i++) for(j=i+1;j<n;j++)
        if(time[i]>time[j]){
            float t=time[i]; time[i]=time[j]; time[j]=t;
            int x=id[i]; id[i]=id[j]; id[j]=x;
        }

    printf("Delivery order (SJF): ");
    for(i=0;i<n;i++) printf("P%d ",id[i]);
}
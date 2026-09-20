#include <stdio.h>

int main(){
    int n,q,i,done=0,water[20],id[20];

    printf("Enter number of equally dry zones & water time: ");
    scanf("%d%d",&n,&q);

    for(i=0;i<n;i++){
        id[i]=i+1;
        water[i]=q;
    }

    printf("Watering Rotation: ");
    while(done<n){
        for(i=0;i<n;i++) if(water[i]>0){
            printf("Zone%d ",id[i]);
            water[i]--;
            if(water[i]==0) done++;
        }
    }
}
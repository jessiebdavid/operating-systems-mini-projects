#include <stdio.h>

int main(){
    int n,i,j,id[20],dry[20],t;

    printf("Enter number of garden zones: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter zone ID & dryness priority: ");
        scanf("%d%d",&id[i],&dry[i]);
    }

    for(i=0;i<n;i++) for(j=i+1;j<n;j++)
        if(dry[i]<dry[j]){
            t=dry[i]; dry[i]=dry[j]; dry[j]=t;
            t=id[i]; id[i]=id[j]; id[j]=t;
        }

    printf("Watering Priority: ");
    for(i=0;i<n;i++) printf("Zone%d ",id[i]);
}
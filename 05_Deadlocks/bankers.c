#include <stdio.h>
int main(){
 int n,m,i,j,k,c=0,ok,need[10][10],a[10][10],max[10][10],av[10],f[10]={0},s[10];
 printf("Enter sessions & resources: ");scanf("%d%d",&n,&m);
 printf("Enter Allocation:\n");
 for(i=0;i<n;i++)for(j=0;j<m;j++)scanf("%d",&a[i][j]);
 printf("Enter Maximum:\n");
 for(i=0;i<n;i++)for(j=0;j<m;j++)scanf("%d",&max[i][j]),need[i][j]=max[i][j]-a[i][j];
 printf("Enter Available:\n");for(j=0;j<m;j++)scanf("%d",&av[j]);
 while(c<n){ok=0;for(i=0;i<n;i++)if(!f[i]){for(j=0;j<m;j++)if(need[i][j]>av[j])break;
 if(j==m){for(k=0;k<m;k++)av[k]+=a[i][k];f[i]=1;s[c++]=i;ok=1;}}if(!ok)break;}
 if(c<n)printf("Unsafe State\n");else{printf("Safe Sequence: ");for(i=0;i<n;i++)printf("Session-%d ",s[i]);}
}
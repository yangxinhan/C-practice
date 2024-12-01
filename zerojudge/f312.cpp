#include<cstdio>
int main(){
    int a1,a2,b1,b2,c1,c2,n,i,bn,ans=-1000000,x11,x1,x22,x2;
    scanf("%d%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2,&n);
for(i=0;i<=n;i++){
           x1=i;
           x11=x1*x1;
           x2=n-x1;
           x22=x2*x2;
           bn=a1*x11+b1*x1+c1+a2*x22+b2*x2+c2;
    if(ans<bn)
        ans=bn;
}
printf("%d\n",ans);
return 0;
}
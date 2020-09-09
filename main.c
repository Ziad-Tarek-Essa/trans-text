#include <stdio.h>
#include <stdlib.h>
void copy(char *from,char *to){
FILE *p=fopen(from,"r");
if(p==NULL)
    exit(1);
FILE *x=fopen(to,"w");
if(x==NULL)
    exit(2);
char a;
while(!feof(p-1)){
    fscanf(p,"%c",&a);
    fprintf(x,"%c",a);

}
fclose(x);
fclose(p);
}
int main()
{
   copy("a.txt","b.txt");
    return 0;
}

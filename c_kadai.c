#include <stdio.h>

void func51(char str[])
{
    int i=0, j=0, end;
    char tmp;
    while (str[j]!='\0') j++;
    j--;
    end=j;
    for (i=0; i<=end; i++, j--) {
        tmp=str[i];
        str[i]=str[j];
        str[j]=tmp;
    }
    str[end]='\0';
}
void func52(char str[])
{
    int i=0, j=0;
    char tmp;
    while (str[j]!='\0') j++;
    j--;
    for (i=0; i<j-1; i++, j--) {
        tmp=str[i];
        str[i]=str[j];
        str[j]=tmp;
	}
}

int main() {
    char string1[32]="Twelve";
    char string2[32]="Nvember";
    printf("string1=%s\n",string1);
    printf("string2=%s\n",string2);
    func51(string1);
    func52(string2);
    printf("string1=%s\n",string1);
    printf("string2=%s\n",string2);
    func52(string2);
    printf("string2=%s\n",string2);
}


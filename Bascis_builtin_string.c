#include <stdio.h>
#include<string.h>

int main() {

    char str[] = "Alhamdulillah";
    char s1[] = "Hey Shrabon";
    char s2[] = "How are you?";
    char s3[1000] = "I am studing at UIU ";
    char s4[1000] = "Where you are studing?";
    char first_string[] ="Apple";
    char second_string[] = "Banana";
    printf("%d\n",strcmp(first_string , second_string));
    strcat(s3 , s4);
    printf("%s\n",s3); /*// array size should be more at least it can contain the other array which intended to assign/ concatinate here.*/
    strcpy(s2,s1);
    printf("%s\n",s2);
    int x = strlen(str);
    printf("%d\n",x);
    return 0;
}

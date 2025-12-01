# Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int v=0, c=0;

    fp = fopen("input.txt","r");
    if(fp==NULL) return 1;

    while((ch=fgetc(fp))!=EOF) {
        ch = tolower(ch);
        if(ch>='a' && ch<='z') {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }
    fclose(fp);

    printf("Vowels: %d\nConsonants: %d\n", v, c);
    return 0;
}

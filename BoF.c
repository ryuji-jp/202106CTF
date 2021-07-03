#include <stdio.h>

void pwn(){
    printf("flag{fnets_youkoso}");
}

void vuln(){
    char overflowme[8];
    scanf("%[^¥n], overflowme")
}

int main(){
    vuln();
    printf("failed");
    return 0;
}
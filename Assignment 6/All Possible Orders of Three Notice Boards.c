#include <stdio.h>
#include <string.h>
void swap(char *x, char *y){
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char word[], int start, int end){
    int i;
    if(start == end){
        printf("%s ", word);
        return;
    }
    for(i = start; i <= end; i++){
        swap(&word[start], &word[i]);
        permute(word, start+1, end);
        swap(&word[start], &word[i]);
    }
}
int main(){
    char word[4] = "SAC";
    printf("All possible permutations: ");
    permute(word, 0, (int) strlen(word)-1);
    return 0;
}
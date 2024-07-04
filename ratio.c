#include <stdio.h>

int main(){
    int replies;
    int likes;
    printf("How many likes did your post get?\n");
    scanf("%d", &likes);
    printf("Your input: %d likes\n", likes);
    printf("How many replies did your post get?\n");
    scanf("%d", &replies);
    printf("Your post got %d likes and %d replies\n", likes, replies);
    if (likes > replies * 1.5 && likes > 10000){
        printf("Nice post!");
    }
    else if (likes < replies * 1.5 && likes < 100){
        printf("ratio + didn't appeal to enough people");
    }
        else if (likes < replies * 1.5 ){
        printf("ratio");
    }
    else{
        printf("Your post didn't appeal to enough people");
    }
    return 0;
}
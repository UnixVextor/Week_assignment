#include <stdio.h>
#include <stdlib.h>
int main(){
    char name[250];
    int score;
    int level;
    FILE *file;
    file = fopen("Information.txt","w");

    if(file == NULL){
        printf("Error");
        exit(1);
    }

    for(int i = 1; i <= 5;i++){
        printf("Enter player %d name : ",i);
        scanf("%s",&name);
        printf("Enter player %d score: ",i);
        scanf("%d",&score);
        printf("Enter player %d level: ",i);
        scanf("%d",&level);

        fprintf(file,"plyer %d  name : %s score : %d level : %d \n",i,name,score,level);
        
    }
    fclose(file);

}
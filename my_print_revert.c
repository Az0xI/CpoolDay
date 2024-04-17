void print_char(char c);
int length(char *chaine);

void my_print_revert(char *toRevert)
{   
    int i = length(toRevert);
    for(i ; i >= 0; i--){
    print_char(toRevert[i]);
    }
}



int length(char chaine[])
{
    int iterateur=0;
    while(chaine[iterateur] != '\0') { 
    iterateur++;
    }
return iterateur;
}

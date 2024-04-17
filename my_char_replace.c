void print_char(char c);
int length(char chaine[]);

char *my_char_replace(char *origin, char toFind, char toReplace)
{
   int longueur = lenght(origin);
   char new_str[longueur];
   for(int i = 0; i <= longueur ; i++){
    if(origin[i] == toFind){
        new_str[i] = toReplace;
    }
    else{
        new_str[i] = origin[i];
    }
   }
   return new_str;
}



int length(char chaine[])
{
    int iterateur=0;
    while(chaine[iterateur] != '\0') { 
    iterateur++;
    }
return iterateur;
}

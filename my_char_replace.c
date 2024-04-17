void print_char(char c);
int length(char chaine[]);


char *my_char_replace(char *origin, char toFind, char toReplace)
{
   int longueur = length(origin);
   for(int i = 0; i <= longueur ; i++){
    if(origin[i] == toFind){
        origin[i] = toReplace;
    }
   }
   return origin;
}


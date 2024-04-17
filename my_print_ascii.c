
void print_char(char c);

void my_print_ascii(void)
{
    for(int compteur = 32 ; compteur < 127 ; compteur++)
    {
        print_char(compteur);
    }
}

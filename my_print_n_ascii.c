void print_char(char c);

void my_print_n_ascii(int HowMany)
{
    if ((33 + HowMany) < 127)
    {
        for(int compteur = 32 ; compteur <= (32 + HowMany) ; compteur++)
        {
            print_char(compteur);
        }
    }
}
int str_len(char s1[])
{
    int i=0;
    int count=0;
    while(s1[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}


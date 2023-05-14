int romanToInt(char *s)
{
    int I = 0, V = 0, X = 0, L = 0, C = 0, D = 0, M = 0, sum = 0, iv = 0, ix = 0, xl = 0, xc = 0, cd = 0, cm = 0;
    int len = strlen(s);

    for (int i = 0; i <= len; i++)
    {
        if (s[i] == 'I')
        {
            I++;
        }
        else if (s[i] == 'V')
        {
            V += 5;
        }
        else if (s[i] == 'X')
        {
            X += 10;
        }
        else if (s[i] == 'L')
        {
            L += 50;
        }
        else if (s[i] == 'C')
        {
            C += 100;
        }
        else if (s[i] == 'D')
        {
            D += 500;
        }
        else if (s[i] == 'M')
        {
            M += 1000;
        }
    }

    for (int i = 1; i < len; i++)
    {
        if (s[i - 1] == 'I' && s[i] == 'V')
        {
            iv += 2;
        }
        if (s[i - 1] == 'I' && s[i] == 'X')
        {
            ix += 2;
        }
        if (s[i - 1] == 'X' && s[i] == 'L')
        {
            xl += 20;
        }
        if (s[i - 1] == 'X' && s[i] == 'C')
        {
            xc += 20;
        }
        if (s[i - 1] == 'C' && s[i] == 'D')
        {
            cd += 200;
        }
        if (s[i - 1] == 'C' && s[i] == 'M')
        {
            cm += 200;
        }
    }

    sum = I + V + X + L + C + D + M - iv - ix - xl - xc - cd - cm;
    printf("%d", sum);
    return sum;
}
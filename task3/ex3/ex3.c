#include<stdio.h>
#include<math.h>
#include<string.h>

void reverse(const char *s)
{
    int ras = strlen(s);
    char mass[ras];
    char mass1[ras];
    int ras1 = 0, i= 0, j = 0, i1 = 0, i2 = 0, i3 = 0; //Индексы массива

   for(i; i<=ras+1; i++) //цикл записывающий строку задом наперёд
    {
        if((s[i3] != '\0')&&(s[ras-i] != '.')) //Условие проверяющее оконченость  слова
        {
            mass[i1] = s[ras-(i3+1)]; //Слово записывается с конца задом наперёд
            i1++;
            i3++;
            i2 = 0;
        }
        else
        {
            if(mass[i1-1]=='.') //условие убирающее лишние точки
                mass[i1-1] = '\0';
            else
                i3++;
            ras1 = strlen(mass);
            for(j; i2 != ras1;j++) //цикл, который разворачивает слово
            {
               mass1[j] = mass[ras1-(i2+1)]; //Слово переворачивается и записывается правильно
               i2++;
               i1 = 0;
               if(i2 == ras1) //цикл добавляющий недостоющие точки в конце слова, а также освобождающии память массива mass
               {
                   mass1[j+1] = '.';
                   memset(mass, 0, sizeof mass);
                   j++;
               }
            }
        }
    }
   strcpy(s, mass1); // копирование в строку S строку MASS1
   memset(mass, 0, sizeof mass);
   memset(mass1, 0, sizeof mass1);
}

int main()
{
    char a[12] = "hello.world";
    reverse(a);
    printf("\n %s \n", a);

    char b[17] = "where.is.my.mind";
    reverse(b);
    printf("\n %s \n", b);

    return 0;
}

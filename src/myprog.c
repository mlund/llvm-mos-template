#include <mega65.h>
#include <mega65/fcio.h>

int main()
{
    byte i;
    fc_init(1, 1, 0, 60, 0);
    fc_bordercolor(6);
    for (i = 0; i < 60; ++i)
    {
        fc_textcolor(1 + (i % 14));
        fc_gotoxy(i, i);
        fc_printf("Hello world #%d", i);
    }
    while (1);
}

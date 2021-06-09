#include  <stdio.h>
#include <stdbool.h>

#define SOLID 0
#define DOTED 1
#define DASHED 2

#define BLUE 4
#define GREEN 2
#define RED 1

#define BLACK 0
#define YELLOW (RED | GREEN) 
#define MAGENTA (RED | BLUE)
#define CYAN (GREEN | BLUE)
#define WHITE (RED | GREEN | BLUE)

const char * colors[8] = {"black", "red", "green", "yellow", "blue", " magenta", "cyan", "white"};

struct box_props
{
    bool opaque : 1;
    unsigned int fill_color : 3;
    unsigned int : 4;
    bool show_border : 1;
    unsigned int border_color : 3;
    unsigned int border_style : 2;
    unsigned int : 2;
};

void show_setting(const struct box_props * pb);

int main(void){
    struct box_props box = { true, YELLOW, true, GREEN, DASHED};

    printf("Original box setting:\n");
    show_setting(&box);

    box.border_color = MAGENTA;
    box.opaque = false;
    box.fill_color = WHITE;
    box.border_style = SOLID;

    printf("\nModified box settings:\n");
    show_setting(&box);

    return 0;
}

void show_setting(const struct box_props * pb){
    printf("Box is %s.\n", pb->opaque == true ? "opaque" : "transparent");
    printf("The fill color is %s.\n", colors[pb->fill_color]);
    printf("Border %s.\n", pb->show_border == true ? "shown" : "not shown");
    printf("The border color is %s.\n", colors[pb->border_color]);
    printf("The border style is ");
    switch (pb->border_style)
    {
    case SOLID: printf("Solid.\n"); break;
    case DOTED: printf("DOTTED.\n"); break;
    case DASHED: printf("DASHED.\n"); break;
    default : printf("unknown type");
    }
}

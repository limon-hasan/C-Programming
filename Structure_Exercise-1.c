/* 
Let color be the following structure:
struct color {
int red;
int green;
int blue;
};
Now, write the following functions:
(a) struct color make_color(int red, int green, int blue);
Returns a color structure containing the specified red, green and blue values. If
any argument is less than zero, the corresponding member of the structure will
contain zero instead. If any argument is greater than 255, the corresponding
member of the structure will contain 255.
(b) int getRed(struct color c);
Returns the value of c's red member.
(c) bool equal_color(struct color color1, struct color color2);
Returns true if the corresponding members of color1 and color2 are equal.
*/


(a)--------

struct color
{
    int red;
    int green;
    int blue;
};

struct color make_color(int  red, int green, int blue)
{
    struct color c;

    // Check and adjust the red value
    if(red < 0)
        c.red = 0;
    else if(red > 255)
        c.red = 255;
    else
        c.red = red;

    // Check and adjust the green value
    if(green < 0)
        c.green = 0;
    else if(green > 255)
        c.green = 255;
    else
        c.green = green;

    // Check and adjust the blue value
    if(blue< 0)
        c.blue = 0;
    else if(blue > 255)
        c.blue = 255;
    else
        c.blue = blue;

    return c;

}


(b)---------

    
int getRed(struct color c);

int getRed(struct color c)
{
    return c.red;
}



(c)------------

#include<stdbool.h>

bool equal_color(struct color color1, struct color color2);

bool equal_color(struct color color1, struct color color2)
{
    if (color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue)
        return true;
    else
        return false;
}

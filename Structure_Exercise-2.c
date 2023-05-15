(a)---------------
  
struct point 
{
    int x,y;
};

struct rectangle
{
    struct point upper_left, lower_right;
};

int compute_area(struct rectangle r)
{
    int width = r.lower_right.x - r.upper_left.x;
    int height = r.lower_right.y - r.upper_left.y;
    return width * height;
}  


(b)-----------------------
  
struct point {
    int x, y;
};

struct rectangle {
    struct point upper_left, lower_right;
};

struct point compute_center(struct rectangle r) {
    struct point center;
    
    center.x = (r.upper_left.x + r.lower_right.x) / 2;
    center.y = (r.upper_left.y + r.lower_right.y) / 2;
    
    return center;
}


(c)----------------------------
  
 struct point 
{
    int x,y;
};

struct rectangle
{
    struct point upper_left, lower_right;
};

struct rectangle move_rectangle(struct rectangle r, int x, int y)
{
    r.upper_left.x = r.upper_left.x + x;
    r.lower_right.x = r.lower_right.x + x;
    r.upper_left.y = r.upper_left.y + y;
    r.lower_right.y = r.lower_right.y + y;
    
    return r;
}


(d)-----------------------------------
  
#include,stdbool.h>

struct point
{
    int x,y;
};

struct rectangle
{
    struct point upper_left, lower_right;
};

bool is_point_inside(struct rectangle r, int p)
{
    if(p.x>=r.upper_left.x && p.x<=r.lower_right.x && p.y<=r.lower_right.y && p.y>=r.upper_left.y)
        return true;
    else
        return false;
}
  

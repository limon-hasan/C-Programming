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

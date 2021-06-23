int minimum_distance(int sx,int sy,int dx,int dy)
{
    // Your code here
    if(dx - sx < 0 || dy - sy < 0) return -1;
    return (dx - sx) + (dy - sy);
}
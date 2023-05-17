/*
 * E89 Pedagogical & Technical Lab
 * project:     tp_window_git/
 * created on:  Wed May 17 19:42:23 2023
 * 1st author:  user
 * description: put_pixel.c
*/

#include <lapin.h> // For all bunny_ things
#include <unistd.h> // For usleep
#include <stdlib.h> // For EXIT_SUCCESS
void put_pixel(t_bunny_pixelarray *pxa,
               t_bunny_position *pos,
               unsigned int color)
{
    int width = pxa->clipable.clip_width;
    int height = pxa->clipable.clip_height;
    int i;
    unsigned int *tmp =  (unsigned int *) pxa -> pixels;
    i = (width * pos -> y) + pos -> x;
    if(pos -> x <= width && pos -> y <= height
       && pos -> x >= 0 && pos -> y >= 0)
        {
            tmp[i]= color;
        }

}

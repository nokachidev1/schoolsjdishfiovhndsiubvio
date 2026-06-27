#include <stdio.h>
#include <math.h>

int main() {
    double area = 52.0;
    double tile_area = 1.8;
    
    int tiles_needed = (int)ceil(area / tile_area);
    
    printf("Need %d tile\n", tiles_needed);
    
    return 0;
}

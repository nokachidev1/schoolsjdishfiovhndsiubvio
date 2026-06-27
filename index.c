#include <stdio.h>
#include <math.h>

int main() {
    double area = 52.0;
    double tile_area = 1.8;
    
    int tiles_needed = (int)ceil(area / tile_area);
    
    printf("Area to cover: %.1f m²\n", area);
    printf("Tile size: %.1f m²\n", tile_area);
    printf("Tiles needed: %d\n", tiles_needed);
    
    return 0;
}

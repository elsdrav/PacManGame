#include "utilities.h"

bool utilities::isInside(float x, float y, float rectX, float rectY, float width, float height) {
    return x >= rectX && x <= rectX + width && y >= rectY && y <= rectY + height;
}

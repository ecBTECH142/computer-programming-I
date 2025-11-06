#include <stdio.h>

int main() {
    float bytes = 3072;
    float kb = bytes/1024;
    float mb = kb/1024;
    float gb = mb/1024;
    printf("The value of %f bytes in kb is %f kb\n",bytes,kb);
    printf("The value of %f bytes in mb is %f mb\n",bytes,mb);
    printf("The value of %f bytes in gb is %f gb\n",bytes,gb);
    return 0;
}
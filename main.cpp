#include <stdio.h>
#include <gfx.hpp>
using namespace gfx;
using color32_t = color<rgba_pixel<32>>;

int main(int argc, char** argv) {
    rgba_pixel<32> px32 = color32_t::orange;
    rgba_pixel<16> px16;
    convert(px32,&px16);
    printf("px16: 0x%04x\r\n",px16.native_value);
    return 0;
}
/*
 * Author: Thomas Ingleby <thomas.c.ingleby@intel.com>
 * Copyright (c) 2014 Intel Corporation.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include <stdlib.h>
#include <string.h>

#include "maa.h"

maa_board_t*
maa_intel_galileo_rev_d()
{
    maa_board_t* b = (maa_board_t*) malloc(sizeof(maa_board_t));
    if(b == NULL)
        return NULL;

    b->gpio_count = 14;
    b->aio_count = 6;
    b->pwm_count = 5;

    b->i2c_bus_count = 1;
    b->i2c_bus[0] = 0;

    b->spi_bus_count = 1;
    b->spi_bus[0] = 1.0;

    b->pins = (maa_pininfo_t*) malloc(sizeof(maa_pininfo_t)*25);

    //GPIO
    strncpy(b->pins[0].name, "IO0", 8);
    b->pins[0].pin = 50;
    b->pins[0].parent_id = 0;
    b->pins[0].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,0};
    b->pins[0].mux_total = 1;
    b->pins[0].mux[0].pin = 40;
    b->pins[0].mux[0].value = 1;

    strncpy(b->pins[1].name, "IO1", 8);
    b->pins[1].pin = 51;
    b->pins[1].parent_id = 0;
    b->pins[1].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,0};
    b->pins[1].mux_total = 1;
    b->pins[1].mux[0].pin = 41;
    b->pins[1].mux[0].value = 1;

    strncpy(b->pins[2].name, "IO2", 8);
    b->pins[2].pin = 32;
    b->pins[2].parent_id = 0;
    b->pins[2].capabilites = (maa_pincapabilities_t) {1,1,0,1,0,0,0};
    b->pins[2].mux_total = 1;
    b->pins[2].mux[0].pin = 31;
    b->pins[2].mux[0].value = 1;

    strncpy(b->pins[3].name, "IO3", 8);
    b->pins[3].pin = 18;
    b->pins[3].parent_id = 0;
    b->pins[3].capabilites = (maa_pincapabilities_t) {1,1,1,1,0,0,0};
    b->pins[3].mux_total = 1;
    b->pins[3].mux[0].pin = 30;
    b->pins[3].mux[0].value = 1;

    strncpy(b->pins[4].name, "IO4", 8);
    b->pins[4].pin = 28;
    b->pins[4].parent_id = 0;
    b->pins[4].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,0};
    b->pins[4].mux_total = 0;

    strncpy(b->pins[5].name, "IO5", 8);
    b->pins[5].pin = 17;
    b->pins[5].parent_id = 0;
    b->pins[5].capabilites = (maa_pincapabilities_t) {1,1,1,0,0,0,0};
    b->pins[5].mux_total = 0;

    strncpy(b->pins[6].name, "IO6", 8);
    b->pins[6].pin = 24;
    b->pins[6].parent_id = 0;
    b->pins[6].capabilites = (maa_pincapabilities_t) {1,1,1,0,0,0,0};
    b->pins[6].mux_total = 0;

    strncpy(b->pins[7].name, "IO7", 8);
    b->pins[7].pin = 27;
    b->pins[7].parent_id = 0;
    b->pins[7].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,0};
    b->pins[7].mux_total = 0;

    strncpy(b->pins[8].name, "IO8", 8);
    b->pins[8].pin = 26;
    b->pins[8].parent_id = 0;
    b->pins[8].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,0};
    b->pins[8].mux_total = 0;

    strncpy(b->pins[9].name, "IO9", 8);
    b->pins[9].pin = 19;
    b->pins[9].parent_id = 0;
    b->pins[9].capabilites = (maa_pincapabilities_t) {1,1,1,0,0,0,0};
    b->pins[9].mux_total = 0;

    strncpy(b->pins[10].name, "IO10", 8);
    b->pins[10].pin = 16;
    b->pins[10].parent_id = 0;
    b->pins[10].capabilites = (maa_pincapabilities_t) {1,1,1,0,1,0,0};
    b->pins[10].mux_total = 1;
    b->pins[10].mux[0].pin = 42;
    b->pins[10].mux[0].value = 1;

    strncpy(b->pins[11].name, "IO11", 8);
    b->pins[11].pin = 25;
    b->pins[11].parent_id = 0;
    b->pins[11].capabilites = (maa_pincapabilities_t) {1,1,1,0,1,0,0};
    b->pins[11].mux_total = 1;
    b->pins[11].mux[0].pin = 43;
    b->pins[11].mux[0].value = 1;

    strncpy(b->pins[12].name, "IO12", 8);
    b->pins[12].pin = 38;
    b->pins[12].parent_id = 0;
    b->pins[12].capabilites = (maa_pincapabilities_t) {1,1,1,0,1,0,0};
    b->pins[12].mux_total = 1;
    b->pins[12].mux[0].pin = 54;
    b->pins[12].mux[0].value = 1;

    strncpy(b->pins[13].name, "IO13", 8);
    b->pins[13].pin = 39;
    b->pins[13].parent_id = 0;
    b->pins[13].capabilites = (maa_pincapabilities_t) {1,1,1,0,1,0,0};
    b->pins[13].mux_total = 1;
    b->pins[13].mux[0].pin = 55;
    b->pins[13].mux[0].value = 1;

    //Analog in mapping and mux.
    strncpy(b->pins[14].name, "A0", 8);
    b->pins[14].pin = 0;
    b->pins[14].parent_id = 0;
    b->pins[14].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,1};
    b->pins[14].mux_total = 1;
    b->pins[14].mux[0].pin = 37;
    b->pins[14].mux[0].value = 0;

    strncpy(b->pins[15].name, "A1", 8);
    b->pins[15].pin = 1;
    b->pins[15].parent_id = 0;
    b->pins[15].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,1};
    b->pins[15].mux_total = 1;
    b->pins[15].mux[0].pin = 36;
    b->pins[15].mux[0].value = 0;

    strncpy(b->pins[16].name, "A2", 8);
    b->pins[16].pin = 2;
    b->pins[16].parent_id = 0;
    b->pins[16].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,1};
    b->pins[16].mux_total = 1;
    b->pins[16].mux[0].pin = 23;
    b->pins[16].mux[0].value = 0;

    strncpy(b->pins[17].name, "A3", 8);
    b->pins[17].pin = 3;
    b->pins[17].parent_id = 0;
    b->pins[17].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,1};
    b->pins[17].mux_total = 1;
    b->pins[17].mux[0].pin = 22;
    b->pins[17].mux[0].value = 0;

    strncpy(b->pins[18].name, "A4", 8);
    b->pins[18].pin = 4;
    b->pins[18].parent_id = 0;
    b->pins[18].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,1,1};
    b->pins[18].mux_total = 2;
    b->pins[18].mux[0].pin = 29;
    b->pins[18].mux[0].value = 1;
    b->pins[18].mux[1].pin = 21;
    b->pins[18].mux[1].value = 0;

    strncpy(b->pins[19].name, "A5", 8);
    b->pins[19].pin = 5;
    b->pins[19].parent_id = 0;
    b->pins[19].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,1,1};
    b->pins[19].mux_total = 2;
    b->pins[19].mux[0].pin = 29;
    b->pins[19].mux[0].value = 1;
    b->pins[19].mux[1].pin = 20;
    b->pins[19].mux[1].value = 0;

    strncpy(b->pins[20].name, "I2C", 8);
    b->pins[20].pin = 0;
    b->pins[20].parent_id = 0;
    b->pins[20].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,1,1};
    b->pins[20].mux_total = 1;
    b->pins[20].mux[0].pin = 29;
    b->pins[20].mux[0].value = 0;

    strncpy(b->pins[21].name, "SPI-1.0", 8);
    b->pins[21].pin = 1;
    b->pins[21].parent_id = 0;
    b->pins[21].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,1,1};
    b->pins[21].mux_total = 4;
    b->pins[21].mux[0].pin = 42;
    b->pins[21].mux[0].value = 0;
    b->pins[21].mux[1].pin = 43;
    b->pins[21].mux[1].value = 0;
    b->pins[21].mux[2].pin = 54;
    b->pins[21].mux[2].value = 0;
    b->pins[21].mux[3].pin = 55;
    b->pins[21].mux[3].value = 0;

    return b;
}
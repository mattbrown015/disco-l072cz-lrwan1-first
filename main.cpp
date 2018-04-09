#include <mbed.h>

namespace
{

DigitalOut green_led(LED1);

}

int main() {
    puts("disco-l072cz-lrwan1-first");

    while (1) {
        wait(2);

        green_led = !green_led;
        puts("running");
    }
}

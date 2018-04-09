#include <mbed.h>

namespace
{

DigitalOut green_led(LED1);

EventQueue event_queue;

void demonstrateStillRunning() {
    green_led = !green_led;
    puts("running");
}

}

int main() {
    puts("disco-l072cz-lrwan1-first");

    event_queue.call_every(2000, demonstrateStillRunning);

    puts("dispatch_forever");
    event_queue.dispatch_forever();
}

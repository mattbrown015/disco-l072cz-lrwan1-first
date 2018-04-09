#include <mbed.h>

namespace
{

DigitalOut green_led(LED1);

unsigned char event_queue_buffer[EVENTS_QUEUE_SIZE];
EventQueue event_queue(EVENTS_QUEUE_SIZE, event_queue_buffer);

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

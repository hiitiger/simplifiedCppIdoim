#include "stable.h"
#include "example/example.h"


int main(int /*argc*/, char* /*argv*/[])
{
    example_throttle();
    example_snowflake();
    example_signal_slot();

    return 0;
}
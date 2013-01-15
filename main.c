#include "footswitch.c"
//#include "common.c"
//#include "debug.c"

int main()
{
/*
    init();
    read_pedals();
    deinit();*/
    

    init_pedals();
    curr_pedal = &pd.pedals[1];
    compile_key("i");
    init();
    write_pedals();
    deinit();
    return 0;
}

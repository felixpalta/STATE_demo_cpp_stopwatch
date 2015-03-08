#include <iostream>

#include "watchcontext.h"

using namespace std;

int main()
try
{
    WatchContext watch;

    watch.pause_watch();

    watch.stop_watch();
    watch.pause_watch();
    watch.start_watch();
    watch.pause_watch();
    watch.pause_watch();
    watch.start_watch();
    watch.pause_watch();
    watch.stop_watch();
    return 0;
}
catch (exception& e)
{
    cerr << e.what() << endl;
    return 1;
}


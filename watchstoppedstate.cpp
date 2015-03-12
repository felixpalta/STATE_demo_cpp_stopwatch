#include "watchstoppedstate.h"
#include "watchstartedstate.h"
#include "iwatchcontext.h"
#include <iostream>
#include <cassert>

using namespace std;

WatchStoppedState::WatchStoppedState(IWatchContext *context)
    : IWatchState(context)
{
}

void WatchStoppedState::_start()
{
    cout << "Start watch: new STATE = STARTED\n";
    w->set_state(new WatchStartedState(w));
}

void WatchStoppedState::_stop()
{
    cout << "Stop watch: already stopped\n";
}

void WatchStoppedState::_pause()
{
    cout << "Pause watch: already stopped\n";
}

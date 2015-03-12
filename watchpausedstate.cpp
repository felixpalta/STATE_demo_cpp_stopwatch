#include "watchpausedstate.h"
#include "watchstartedstate.h"
#include "watchstoppedstate.h"
#include "iwatchcontext.h"

#include <iostream>
#include <cassert>

using namespace std;

WatchPausedState::WatchPausedState(IWatchContext *context)
    : IWatchState(context)
{
}


void WatchPausedState::_start()
{
    cout << "Restart watch: new state STARTED\n";
    w->set_state(new WatchStartedState(w));
}

void WatchPausedState::_stop()
{
    cout << "Stop watch: new state STOPPED\n";
    w->set_state(new WatchStoppedState(w));
}

void WatchPausedState::_pause()
{
    cout << "Pause watch: already paused\n";
}

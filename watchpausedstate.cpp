#include "watchpausedstate.h"
#include "watchstartedstate.h"
#include "watchstoppedstate.h"
#include "watchcontext.h"

#include <iostream>
#include <cassert>

using namespace std;

WatchPausedState::WatchPausedState()
{
}

void WatchPausedState::_start(WatchContext *w)
{
    assert(w != nullptr);
    cout << "Restart watch: new state STARTED\n";
    w->set_state(new WatchStartedState());
}

void WatchPausedState::_stop(WatchContext *w)
{
    assert(w != nullptr);
    cout << "Stop watch: new state STOPPED\n";
    w->set_state(new WatchStoppedState());
}

void WatchPausedState::_pause(WatchContext *)
{
    cout << "Pause watch: already paused\n";
}

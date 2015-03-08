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

void WatchPausedState::start(WatchContext *w)
{
    assert(w != nullptr);
    cout << "Restart watch: new state STARTED\n";
    w->set_state(new WatchStartedState());
}

void WatchPausedState::stop(WatchContext *w)
{
    assert(w != nullptr);
    cout << "Stop watch: new state STOPPED\n";
    w->set_state(new WatchStoppedState());
}

void WatchPausedState::pause(WatchContext *)
{
    cout << "Pause watch: already paused\n";
}

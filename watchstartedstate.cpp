#include "watchstartedstate.h"
#include "watchcontext.h"
#include "watchstoppedstate.h"
#include "watchpausedstate.h"

#include <iostream>
#include <cassert>

using namespace std;

WatchStartedState::WatchStartedState()
{
}

void WatchStartedState::start(WatchContext *)
{
    cout << "Start watch: already started\n";
}

void WatchStartedState::stop(WatchContext *w)
{
    assert(w != nullptr);

    cout << "Stop watch: new STATE = STOPPED\n";
    w->set_state(new WatchStoppedState());
}

void WatchStartedState::pause(WatchContext *w)
{
    assert(w != nullptr);

    cout << "Pause watch: new STATE = PAUSED\n";
    w->set_state(new WatchPausedState());
}

#include "watchstoppedstate.h"
#include "watchstartedstate.h"
#include "watchcontext.h"
#include <iostream>
#include <cassert>

using namespace std;

WatchStoppedState::WatchStoppedState()
{
}

void WatchStoppedState::start(WatchContext *w)
{
    assert(w != nullptr);

    cout << "Start watch: new STATE = STARTED\n";
    w->set_state(new WatchStartedState());
}

void WatchStoppedState::stop(WatchContext *)
{
    cout << "Stop watch: already stopped\n";
}

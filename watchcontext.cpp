#include "watchcontext.h"
#include "watchstoppedstate.h"

WatchContext::WatchContext()
    : state(new WatchStoppedState(this))
{
}

WatchContext::~WatchContext()
{
}

void WatchContext::set_state(IWatchState *new_state)
{
    state.reset(new_state);
}

void WatchContext::start_watch()
{
    state->start();
}

void WatchContext::stop_watch()
{
    state->stop();
}

void WatchContext::pause_watch()
{
    state->pause();
}

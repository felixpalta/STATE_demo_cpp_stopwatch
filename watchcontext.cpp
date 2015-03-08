#include "watchcontext.h"
#include "watchstartedstate.h"
#include "watchstoppedstate.h"

WatchContext::WatchContext()
    : state(new WatchStoppedState())
{
}

WatchContext::~WatchContext()
{
    delete state;
}

void WatchContext::set_state(IWatchState *new_state)
{
    delete state;
    state = new_state;
}

void WatchContext::start_watch()
{
    state->start(this);
}

void WatchContext::stop_watch()
{
    state->stop(this);
}
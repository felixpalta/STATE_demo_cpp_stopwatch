#ifndef WATCHSTARTEDSTATE_H
#define WATCHSTARTEDSTATE_H

#include "iwatchstate.h"

class WatchStartedState : public IWatchState
{
public:
    WatchStartedState();
    void start(WatchContext *) override;
    void stop(WatchContext *w) override;
    ~WatchStartedState() = default;

};

#endif // WATCHSTARTEDSTATE_H

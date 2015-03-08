#ifndef WATCHSTARTEDSTATE_H
#define WATCHSTARTEDSTATE_H

#include "iwatchstate.h"

class WatchStartedState : public IWatchState
{
public:
    WatchStartedState();
    void start(WatchContext *) override;
    void stop(WatchContext *w) override;
    void pause(WatchContext *w) override;
    ~WatchStartedState() override = default;

};

#endif // WATCHSTARTEDSTATE_H

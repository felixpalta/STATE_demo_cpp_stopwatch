#ifndef WATCHSTARTEDSTATE_H
#define WATCHSTARTEDSTATE_H

#include "iwatchstate.h"

class WatchStartedState : public IWatchState
{
public:
    WatchStartedState();
private:
    void _start(WatchContext *) override;
    void _stop(WatchContext *w) override;
    void _pause(WatchContext *w) override;
public:
    ~WatchStartedState() override = default;

};

#endif // WATCHSTARTEDSTATE_H

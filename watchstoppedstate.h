#ifndef WATCHSTOPPEDSTATE_H
#define WATCHSTOPPEDSTATE_H

#include "iwatchstate.h"

class WatchStoppedState : public IWatchState
{
public:
    WatchStoppedState();
    void start(WatchContext *w) override;
    void stop(WatchContext *) override;
    ~WatchStoppedState() = default;
};

#endif // WATCHSTOPPEDSTATE_H

#ifndef WATCHSTOPPEDSTATE_H
#define WATCHSTOPPEDSTATE_H

#include "iwatchstate.h"

class WatchStoppedState : public IWatchState
{
public:
    WatchStoppedState();
    void start(WatchContext *w) override;
    void stop(WatchContext *) override;
    void pause(WatchContext *) override;
    ~WatchStoppedState() override = default;
};

#endif // WATCHSTOPPEDSTATE_H

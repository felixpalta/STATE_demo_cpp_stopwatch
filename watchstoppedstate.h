#ifndef WATCHSTOPPEDSTATE_H
#define WATCHSTOPPEDSTATE_H

#include "iwatchstate.h"

class WatchStoppedState : public IWatchState
{
public:
    WatchStoppedState();
private:
    void _start(WatchContext *w) override;
    void _stop(WatchContext *) override;
    void _pause(WatchContext *) override;
public:
    ~WatchStoppedState() override = default;
};

#endif // WATCHSTOPPEDSTATE_H

#ifndef WATCHPAUSEDSTATE_H
#define WATCHPAUSEDSTATE_H

#include "iwatchstate.h"

class WatchPausedState : public IWatchState
{
public:
    WatchPausedState();
private:
    void _start(WatchContext *w) override;
    void _stop(WatchContext *w) override;
    void _pause(WatchContext *) override;
public:
    ~WatchPausedState() override = default;
};

#endif // WATCHPAUSEDSTATE_H

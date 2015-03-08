#ifndef WATCHPAUSEDSTATE_H
#define WATCHPAUSEDSTATE_H

#include "iwatchstate.h"

class WatchPausedState : public IWatchState
{
public:
    WatchPausedState();
    void start(WatchContext *w) override;
    void stop(WatchContext *w) override;
    void pause(WatchContext *) override;
    ~WatchPausedState() override = default;
};

#endif // WATCHPAUSEDSTATE_H

#ifndef WATCHPAUSEDSTATE_H
#define WATCHPAUSEDSTATE_H

#include "iwatchstate.h"

class WatchPausedState : public IWatchState
{
public:
    WatchPausedState(IWatchContext *context);
private:
    void _start() override;
    void _stop() override;
    void _pause() override;
public:
    ~WatchPausedState() override = default;
};

#endif // WATCHPAUSEDSTATE_H

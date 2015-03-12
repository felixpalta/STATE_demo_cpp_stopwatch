#ifndef WATCHSTOPPEDSTATE_H
#define WATCHSTOPPEDSTATE_H

#include "iwatchstate.h"

class WatchStoppedState : public IWatchState
{
public:
    WatchStoppedState(IWatchContext *context);
private:
    void _start() override;
    void _stop() override;
    void _pause() override;
public:
    ~WatchStoppedState() override = default;
};

#endif // WATCHSTOPPEDSTATE_H

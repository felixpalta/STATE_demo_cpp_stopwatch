#ifndef WATCHSTARTEDSTATE_H
#define WATCHSTARTEDSTATE_H

#include "iwatchstate.h"

class WatchStartedState : public IWatchState
{
public:
    WatchStartedState(IWatchContext *context);
private:
    void _start() override;
    void _stop() override;
    void _pause() override;
public:
    ~WatchStartedState() override = default;

};

#endif // WATCHSTARTEDSTATE_H

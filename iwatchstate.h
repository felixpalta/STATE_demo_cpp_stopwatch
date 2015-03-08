#ifndef IWATCHSTATE_H
#define IWATCHSTATE_H

class WatchContext;

class IWatchState
{
public:
    IWatchState() {}

    virtual void start(WatchContext *w) = 0;
    virtual void stop(WatchContext *w) = 0;
    virtual ~IWatchState() {}
};

#endif // IWATCHSTATE_H

#ifndef IWATCHSTATE_H
#define IWATCHSTATE_H

class WatchContext;

class IWatchState
{
public:
    IWatchState() {}

    virtual ~IWatchState() {}

    void start(WatchContext *w)
    {
        _start(w);
    }

    void stop(WatchContext *w)
    {
        _stop(w);
    }

    void pause(WatchContext *w)
    {
        _pause(w);
    }

private:
    virtual void _start(WatchContext *w) = 0;
    virtual void _stop(WatchContext *w) = 0;
    virtual void _pause(WatchContext *w) = 0;
};

#endif // IWATCHSTATE_H

#ifndef WATCHCONTEXT_H
#define WATCHCONTEXT_H

class IWatchState;

class WatchContext
{
public:
    WatchContext();

    void start_watch();
    void stop_watch();

    void set_state(IWatchState *new_state);
    ~WatchContext();

private:
    IWatchState *state;
    WatchContext(const WatchContext&) = delete;
    WatchContext& operator=(const WatchContext&) = delete;
};

#endif // WATCHCONTEXT_H

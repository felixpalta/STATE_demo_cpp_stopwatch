#ifndef WATCHCONTEXT_H
#define WATCHCONTEXT_H

#include <memory>

class IWatchState;

class WatchContext
{
public:
    WatchContext();

    void start_watch();
    void stop_watch();
    void pause_watch();

    void set_state(IWatchState *new_state);
    ~WatchContext();

private:
    std::unique_ptr<IWatchState> state;
    WatchContext(const WatchContext&) = delete;
    WatchContext& operator=(const WatchContext&) = delete;
};

#endif // WATCHCONTEXT_H

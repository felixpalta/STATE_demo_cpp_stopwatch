#ifndef WATCHCONTEXT_H
#define WATCHCONTEXT_H

#include "iwatchcontext.h"

#include <memory>

class IWatchState;

class WatchContext : public IWatchContext
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
    WatchContext(WatchContext&&) = delete;
    WatchContext& operator=(WatchContext&&) = delete;
};

#endif // WATCHCONTEXT_H

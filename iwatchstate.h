#ifndef IWATCHSTATE_H
#define IWATCHSTATE_H

class IWatchContext;

class IWatchState
{
public:
    IWatchState(IWatchContext *context)
        : w(context)
    {
    }

    virtual ~IWatchState() = default;

    void start()
    {
        _start();
    }

    void stop()
    {
        _stop();
    }

    void pause()
    {
        _pause();
    }

private:
    virtual void _start() = 0;
    virtual void _stop() = 0;
    virtual void _pause() = 0;
protected:
    IWatchContext *w;
private:
    IWatchState(const IWatchState&) = delete;
    IWatchState(IWatchState&&) = delete;
    IWatchState& operator=(const IWatchState&) = delete;
    IWatchState& operator=(IWatchState&&) = delete;
};

#endif // IWATCHSTATE_H

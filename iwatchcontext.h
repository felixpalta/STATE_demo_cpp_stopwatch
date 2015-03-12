#ifndef IWATCHCONTEXT_H
#define IWATCHCONTEXT_H

class IWatchState;

class IWatchContext
{
public:
    virtual void set_state(IWatchState *new_state) = 0;
    virtual ~IWatchContext() = default;
};

#endif // IWATCHCONTEXT_H

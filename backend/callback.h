#ifndef CALLBACK_H
#define CALLBACK_H

#include <cstdint>
#include <functional>
#include <string>

namespace lc3
{
namespace core
{
    class MachineState;

    using CallbackTypeUnderlying = int64_t;

    enum class CallbackType : CallbackTypeUnderlying
    {
          BREAKPOINT = -3
        , PRE_INST = -2
        , INT_ENTER = -1
        , EX_ENTER = 1
        , EX_EXIT = 2
        , INT_EXIT = 3
        , SUB_ENTER = 4
        , SUB_EXIT = 5
        , INPUT_POLL = 6
        , POST_INST = 7
        , INVALID
    };

    std::string callbackTypeToString(CallbackType type);
    CallbackTypeUnderlying callbackTypeToUnderlying(CallbackType type);
};
};

#endif

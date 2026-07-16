#pragma once

#include <basis/seadTypes.h>
#include <nn/font/font_Util.h>
#include <nn/util/util_IntrusiveList.h>

namespace eui {

class ControlBase {
public:
    virtual const char* getClassName() const;

    NN_RUNTIME_TYPEINFO_BASE()

    ControlBase();
    virtual ~ControlBase();

    virtual void Update(f32);

private:
    nn::util::IntrusiveListNode m_Link;
    s64 _0x18 = 0;
    s64 _0x20 = 0;
};

}  // namespace eui

#include "eui/ctrl/euiControlBase.h"

namespace eui {

const char* ControlBase::getClassName() const {
    return "ControlBase";
}

ControlBase::ControlBase() = default;

ControlBase::~ControlBase() = default;

void ControlBase::Update(f32) {}

}  // namespace eui

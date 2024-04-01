#pragma once

#include "esphome/core/component.h"
#include "esphome/core/automation.h"
#include "tu2c_link.h"

namespace esphome
{
  namespace tu2c_link
  {

    class Tu2cLinkOnDataReceivedTrigger : public Trigger<std::vector<uint8_t>>
    {
    public:
      Tu2cLinkOnDataReceivedTrigger(Tu2cLinkClimate *climate)
      {
        climate->add_on_data_received_callback(
            [this](const struct DataFrame *frame)
            {
              this->trigger(frame->get_data());
            });
      }
    };

  } // namespace tu2c_link
} // namespace esphome
#
# Auto-generated file for MCP9808 v0.1.0.
# Generated from peripherals/MCP9808.yaml using Cyanobyte Codegen v0.1.0
"""
Class for MCP9808
"""

import sys
try:
    import smbus
except ImportError:
    print("Fatal error! Make sure to install smbus!")
    sys.exit(1)
from enum import Enum
class LimitHysteresisValues(Enum):
    """
    Valid values for TUPPER and TLOWER Limit Hysteresis bits

    """
    TEMP_0C = 0 # 0°C (power-up default)
    TEMP_1C5 = 1 # +1.5°C
    TEMP_3C = 2 # +3.0°C
    TEMP_6C = 3 # +6.0°C
class ShutdownModeValues(Enum):
    """
    Valid values for Shutdown Mode bit

    """
    CONTINOUSCONVERSION = 0 # Continuous conversion (power-up default)
    SHUTDOWN = 1 # Shutdown (Low-Power mode)



class MCP9808:
    """
    This is a test description

    """
    DEVICE_ADDRESS = 24
    REGISTER_CONFIGURATION = 1

    def __init__(self):
        # Initialize connection to peripheral
        self.bus = smbus.SMBus(1)

    def get_configuration(self):
        """
        The MCP9808 has a 16-bit Configuration register (CONFIG) that
        allows the user to set various functions for a robust temperature
        monitoring system.
        Bits 10 through 0 are used to select the temperature alert output
        hysteresis, device shutdown or Low-Power mode, temperature boundary
        and critical temperature lock, and temperature Alert output
        enable/disable.
        In addition, Alert output condition (output set for TUPPER and
        TLOWER temperature boundary or TCRIT only), Alert output status
        and Alert output polarity and mode (Comparator Output or Interrupt
        Output mode) are user-configurable.

        """
        val = self.bus.read_word_data(
            self.DEVICE_ADDRESS,
            self.REGISTER_CONFIGURATION
        )
        return val

    def set_configuration(self, data):
        """
        The MCP9808 has a 16-bit Configuration register (CONFIG) that
        allows the user to set various functions for a robust temperature
        monitoring system.
        Bits 10 through 0 are used to select the temperature alert output
        hysteresis, device shutdown or Low-Power mode, temperature boundary
        and critical temperature lock, and temperature Alert output
        enable/disable.
        In addition, Alert output condition (output set for TUPPER and
        TLOWER temperature boundary or TCRIT only), Alert output status
        and Alert output polarity and mode (Comparator Output or Interrupt
        Output mode) are user-configurable.

        """
        self.bus.write_word_data(
            self.DEVICE_ADDRESS,
            self.REGISTER_CONFIGURATION,
            data
        )


    def get_limithysteresis(self):
        """
        This bit can not be altered when either of the Lock bits are set
        (bit 6 and bit 7). This bit can be programmed in Shutdown mode.

        """
        # Read register data
        # '#/registers/configuration' > 'configuration'
        val = self.get_configuration()
        # Mask register value
        val = val & 0b0000001100000000
        # Bitshift value
        val = val >> 9
        return val

    def get_shutdownmode(self):
        """
        In shutdown, all power-consuming activities are disabled, though
        all registers can be written to or read. This bit cannot be set
        to ‘1’ when either of the Lock bits is set (bit 6 and bit 7).
        However, it can be cleared to ‘0’ for continuous conversion while
        locked.

        """
        # Read register data
        # '#/registers/configuration' > 'configuration'
        val = self.get_configuration()
        # Mask register value
        val = val & 0b0000000010000000
        # Bitshift value
        val = val >> 8
        return val

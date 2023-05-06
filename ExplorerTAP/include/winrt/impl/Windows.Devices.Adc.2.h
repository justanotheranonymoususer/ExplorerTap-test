// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.221121.5

#pragma once
#ifndef WINRT_Windows_Devices_Adc_2_H
#define WINRT_Windows_Devices_Adc_2_H
#include "winrt/impl/Windows.Devices.Adc.Provider.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Adc.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Adc
{
    struct WINRT_IMPL_EMPTY_BASES AdcChannel : winrt::Windows::Devices::Adc::IAdcChannel
    {
        AdcChannel(std::nullptr_t) noexcept {}
        AdcChannel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Adc::IAdcChannel(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AdcController : winrt::Windows::Devices::Adc::IAdcController
    {
        AdcController(std::nullptr_t) noexcept {}
        AdcController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Adc::IAdcController(ptr, take_ownership_from_abi) {}
        static auto GetControllersAsync(winrt::Windows::Devices::Adc::Provider::IAdcProvider const& provider);
        static auto GetDefaultAsync();
    };
}
#endif

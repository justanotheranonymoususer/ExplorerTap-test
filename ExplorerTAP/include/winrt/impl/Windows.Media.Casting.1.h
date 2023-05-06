// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.221121.5

#pragma once
#ifndef WINRT_Windows_Media_Casting_1_H
#define WINRT_Windows_Media_Casting_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.Casting.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Casting
{
    struct WINRT_IMPL_EMPTY_BASES ICastingConnection :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICastingConnection>,
        impl::require<winrt::Windows::Media::Casting::ICastingConnection, winrt::Windows::Foundation::IClosable>
    {
        ICastingConnection(std::nullptr_t = nullptr) noexcept {}
        ICastingConnection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ICastingConnectionErrorOccurredEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICastingConnectionErrorOccurredEventArgs>
    {
        ICastingConnectionErrorOccurredEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICastingConnectionErrorOccurredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ICastingDevice :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICastingDevice>
    {
        ICastingDevice(std::nullptr_t = nullptr) noexcept {}
        ICastingDevice(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ICastingDevicePicker :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICastingDevicePicker>
    {
        ICastingDevicePicker(std::nullptr_t = nullptr) noexcept {}
        ICastingDevicePicker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ICastingDevicePickerFilter :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICastingDevicePickerFilter>
    {
        ICastingDevicePickerFilter(std::nullptr_t = nullptr) noexcept {}
        ICastingDevicePickerFilter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ICastingDeviceSelectedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICastingDeviceSelectedEventArgs>
    {
        ICastingDeviceSelectedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ICastingDeviceSelectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ICastingDeviceStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICastingDeviceStatics>
    {
        ICastingDeviceStatics(std::nullptr_t = nullptr) noexcept {}
        ICastingDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ICastingSource :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ICastingSource>
    {
        ICastingSource(std::nullptr_t = nullptr) noexcept {}
        ICastingSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif

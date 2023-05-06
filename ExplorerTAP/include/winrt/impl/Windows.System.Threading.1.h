// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.221121.5

#pragma once
#ifndef WINRT_Windows_System_Threading_1_H
#define WINRT_Windows_System_Threading_1_H
#include "winrt/impl/Windows.System.Threading.0.h"
WINRT_EXPORT namespace winrt::Windows::System::Threading
{
    struct WINRT_IMPL_EMPTY_BASES IThreadPoolStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IThreadPoolStatics>
    {
        IThreadPoolStatics(std::nullptr_t = nullptr) noexcept {}
        IThreadPoolStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IThreadPoolTimer :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IThreadPoolTimer>
    {
        IThreadPoolTimer(std::nullptr_t = nullptr) noexcept {}
        IThreadPoolTimer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IThreadPoolTimerStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IThreadPoolTimerStatics>
    {
        IThreadPoolTimerStatics(std::nullptr_t = nullptr) noexcept {}
        IThreadPoolTimerStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif

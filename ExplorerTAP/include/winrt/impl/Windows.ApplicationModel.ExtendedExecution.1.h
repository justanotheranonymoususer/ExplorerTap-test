// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.221121.5

#pragma once
#ifndef WINRT_Windows_ApplicationModel_ExtendedExecution_1_H
#define WINRT_Windows_ApplicationModel_ExtendedExecution_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.ApplicationModel.ExtendedExecution.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::ExtendedExecution
{
    struct WINRT_IMPL_EMPTY_BASES IExtendedExecutionRevokedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IExtendedExecutionRevokedEventArgs>
    {
        IExtendedExecutionRevokedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IExtendedExecutionRevokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IExtendedExecutionSession :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IExtendedExecutionSession>,
        impl::require<winrt::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession, winrt::Windows::Foundation::IClosable>
    {
        IExtendedExecutionSession(std::nullptr_t = nullptr) noexcept {}
        IExtendedExecutionSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif

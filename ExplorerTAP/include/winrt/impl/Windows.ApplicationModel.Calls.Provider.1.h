// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.221121.5

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Calls_Provider_1_H
#define WINRT_Windows_ApplicationModel_Calls_Provider_1_H
#include "winrt/impl/Windows.ApplicationModel.Calls.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Provider
{
    struct WINRT_IMPL_EMPTY_BASES IPhoneCallOrigin :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneCallOrigin>
    {
        IPhoneCallOrigin(std::nullptr_t = nullptr) noexcept {}
        IPhoneCallOrigin(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPhoneCallOrigin2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneCallOrigin2>,
        impl::require<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2, winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin>
    {
        IPhoneCallOrigin2(std::nullptr_t = nullptr) noexcept {}
        IPhoneCallOrigin2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPhoneCallOrigin3 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneCallOrigin3>,
        impl::require<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin3, winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin, winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOrigin2>
    {
        IPhoneCallOrigin3(std::nullptr_t = nullptr) noexcept {}
        IPhoneCallOrigin3(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPhoneCallOriginManagerStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneCallOriginManagerStatics>
    {
        IPhoneCallOriginManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IPhoneCallOriginManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPhoneCallOriginManagerStatics2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneCallOriginManagerStatics2>,
        impl::require<winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics2, winrt::Windows::ApplicationModel::Calls::Provider::IPhoneCallOriginManagerStatics>
    {
        IPhoneCallOriginManagerStatics2(std::nullptr_t = nullptr) noexcept {}
        IPhoneCallOriginManagerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPhoneCallOriginManagerStatics3 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPhoneCallOriginManagerStatics3>
    {
        IPhoneCallOriginManagerStatics3(std::nullptr_t = nullptr) noexcept {}
        IPhoneCallOriginManagerStatics3(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif

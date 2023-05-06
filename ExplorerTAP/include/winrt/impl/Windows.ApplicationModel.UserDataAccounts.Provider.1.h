// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.221121.5

#pragma once
#ifndef WINRT_Windows_ApplicationModel_UserDataAccounts_Provider_1_H
#define WINRT_Windows_ApplicationModel_UserDataAccounts_Provider_1_H
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts::Provider
{
    struct WINRT_IMPL_EMPTY_BASES IUserDataAccountPartnerAccountInfo :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountPartnerAccountInfo>
    {
        IUserDataAccountPartnerAccountInfo(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountPartnerAccountInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUserDataAccountProviderAddAccountOperation :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountProviderAddAccountOperation>,
        impl::require<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation, winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
    {
        IUserDataAccountProviderAddAccountOperation(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountProviderAddAccountOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUserDataAccountProviderOperation :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountProviderOperation>
    {
        IUserDataAccountProviderOperation(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountProviderOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUserDataAccountProviderResolveErrorsOperation :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountProviderResolveErrorsOperation>,
        impl::require<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation, winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
    {
        IUserDataAccountProviderResolveErrorsOperation(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountProviderResolveErrorsOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUserDataAccountProviderSettingsOperation :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUserDataAccountProviderSettingsOperation>,
        impl::require<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation, winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
    {
        IUserDataAccountProviderSettingsOperation(std::nullptr_t = nullptr) noexcept {}
        IUserDataAccountProviderSettingsOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif

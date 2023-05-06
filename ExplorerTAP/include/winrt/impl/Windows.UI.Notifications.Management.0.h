// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.221121.5

#pragma once
#ifndef WINRT_Windows_UI_Notifications_Management_0_H
#define WINRT_Windows_UI_Notifications_Management_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct WINRT_IMPL_EMPTY_BASES TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::UI::Notifications
{
    enum class NotificationKinds : uint32_t;
    struct UserNotification;
    struct UserNotificationChangedEventArgs;
}
WINRT_EXPORT namespace winrt::Windows::UI::Notifications::Management
{
    enum class UserNotificationListenerAccessStatus : int32_t
    {
        Unspecified = 0,
        Allowed = 1,
        Denied = 2,
    };
    struct IUserNotificationListener;
    struct IUserNotificationListenerStatics;
    struct UserNotificationListener;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::UI::Notifications::Management::IUserNotificationListener>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Notifications::Management::IUserNotificationListenerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::Notifications::Management::UserNotificationListener>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Notifications::Management::UserNotificationListener> = L"Windows.UI.Notifications.Management.UserNotificationListener";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> = L"Windows.UI.Notifications.Management.UserNotificationListenerAccessStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Notifications::Management::IUserNotificationListener> = L"Windows.UI.Notifications.Management.IUserNotificationListener";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::Notifications::Management::IUserNotificationListenerStatics> = L"Windows.UI.Notifications.Management.IUserNotificationListenerStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Notifications::Management::IUserNotificationListener>{ 0x62553E41,0x8A06,0x4CEF,{ 0x82,0x15,0x60,0x33,0xA5,0xBE,0x4B,0x03 } }; // 62553E41-8A06-4CEF-8215-6033A5BE4B03
    template <> inline constexpr guid guid_v<winrt::Windows::UI::Notifications::Management::IUserNotificationListenerStatics>{ 0xFF6123CF,0x4386,0x4AA3,{ 0xB7,0x3D,0xB8,0x04,0xE5,0xB6,0x3B,0x23 } }; // FF6123CF-4386-4AA3-B73D-B804E5B63B23
    template <> struct default_interface<winrt::Windows::UI::Notifications::Management::UserNotificationListener>{ using type = winrt::Windows::UI::Notifications::Management::IUserNotificationListener; };
    template <> struct abi<winrt::Windows::UI::Notifications::Management::IUserNotificationListener>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAccessStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_NotificationChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_NotificationChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetNotificationsAsync(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetNotification(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ClearNotifications() noexcept = 0;
            virtual int32_t __stdcall RemoveNotification(uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::Notifications::Management::IUserNotificationListenerStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Notifications_Management_IUserNotificationListener
    {
        auto RequestAccessAsync() const;
        auto GetAccessStatus() const;
        auto NotificationChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Notifications::Management::UserNotificationListener, winrt::Windows::UI::Notifications::UserNotificationChangedEventArgs> const& handler) const;
        using NotificationChanged_revoker = impl::event_revoker<winrt::Windows::UI::Notifications::Management::IUserNotificationListener, &impl::abi_t<winrt::Windows::UI::Notifications::Management::IUserNotificationListener>::remove_NotificationChanged>;
        [[nodiscard]] auto NotificationChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Notifications::Management::UserNotificationListener, winrt::Windows::UI::Notifications::UserNotificationChangedEventArgs> const& handler) const;
        auto NotificationChanged(winrt::event_token const& token) const noexcept;
        auto GetNotificationsAsync(winrt::Windows::UI::Notifications::NotificationKinds const& kinds) const;
        auto GetNotification(uint32_t notificationId) const;
        auto ClearNotifications() const;
        auto RemoveNotification(uint32_t notificationId) const;
    };
    template <> struct consume<winrt::Windows::UI::Notifications::Management::IUserNotificationListener>
    {
        template <typename D> using type = consume_Windows_UI_Notifications_Management_IUserNotificationListener<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Notifications_Management_IUserNotificationListenerStatics
    {
        [[nodiscard]] auto Current() const;
    };
    template <> struct consume<winrt::Windows::UI::Notifications::Management::IUserNotificationListenerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Notifications_Management_IUserNotificationListenerStatics<D>;
    };
}
#endif
// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.221121.5

#pragma once
#ifndef WINRT_Windows_System_Display_0_H
#define WINRT_Windows_System_Display_0_H
WINRT_EXPORT namespace winrt::Windows::System::Display
{
    struct IDisplayRequest;
    struct DisplayRequest;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::System::Display::IDisplayRequest>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::Display::DisplayRequest>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::System::Display::DisplayRequest> = L"Windows.System.Display.DisplayRequest";
    template <> inline constexpr auto& name_v<winrt::Windows::System::Display::IDisplayRequest> = L"Windows.System.Display.IDisplayRequest";
    template <> inline constexpr guid guid_v<winrt::Windows::System::Display::IDisplayRequest>{ 0xE5732044,0xF49F,0x4B60,{ 0x8D,0xD4,0x5E,0x7E,0x3A,0x63,0x2A,0xC0 } }; // E5732044-F49F-4B60-8DD4-5E7E3A632AC0
    template <> struct default_interface<winrt::Windows::System::Display::DisplayRequest>{ using type = winrt::Windows::System::Display::IDisplayRequest; };
    template <> struct abi<winrt::Windows::System::Display::IDisplayRequest>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall RequestActive() noexcept = 0;
            virtual int32_t __stdcall RequestRelease() noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_Display_IDisplayRequest
    {
        auto RequestActive() const;
        auto RequestRelease() const;
    };
    template <> struct consume<winrt::Windows::System::Display::IDisplayRequest>
    {
        template <typename D> using type = consume_Windows_System_Display_IDisplayRequest<D>;
    };
}
#endif

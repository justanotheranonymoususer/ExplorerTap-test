// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.221121.5

#pragma once
#ifndef WINRT_Windows_System_Threading_Core_0_H
#define WINRT_Windows_System_Threading_Core_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IAsyncAction;
}
WINRT_EXPORT namespace winrt::Windows::System::Threading
{
    struct WorkItemHandler;
    enum class WorkItemOptions : uint32_t;
    enum class WorkItemPriority : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::System::Threading::Core
{
    struct IPreallocatedWorkItem;
    struct IPreallocatedWorkItemFactory;
    struct ISignalNotifier;
    struct ISignalNotifierStatics;
    struct PreallocatedWorkItem;
    struct SignalNotifier;
    struct SignalHandler;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::System::Threading::Core::IPreallocatedWorkItem>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::Threading::Core::IPreallocatedWorkItemFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::Threading::Core::ISignalNotifier>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::Threading::Core::ISignalNotifierStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::Threading::Core::PreallocatedWorkItem>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::Threading::Core::SignalNotifier>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::Threading::Core::SignalHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::System::Threading::Core::PreallocatedWorkItem> = L"Windows.System.Threading.Core.PreallocatedWorkItem";
    template <> inline constexpr auto& name_v<winrt::Windows::System::Threading::Core::SignalNotifier> = L"Windows.System.Threading.Core.SignalNotifier";
    template <> inline constexpr auto& name_v<winrt::Windows::System::Threading::Core::IPreallocatedWorkItem> = L"Windows.System.Threading.Core.IPreallocatedWorkItem";
    template <> inline constexpr auto& name_v<winrt::Windows::System::Threading::Core::IPreallocatedWorkItemFactory> = L"Windows.System.Threading.Core.IPreallocatedWorkItemFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::System::Threading::Core::ISignalNotifier> = L"Windows.System.Threading.Core.ISignalNotifier";
    template <> inline constexpr auto& name_v<winrt::Windows::System::Threading::Core::ISignalNotifierStatics> = L"Windows.System.Threading.Core.ISignalNotifierStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::System::Threading::Core::SignalHandler> = L"Windows.System.Threading.Core.SignalHandler";
    template <> inline constexpr guid guid_v<winrt::Windows::System::Threading::Core::IPreallocatedWorkItem>{ 0xB6DAA9FC,0xBC5B,0x401A,{ 0xA8,0xB2,0x6E,0x75,0x4D,0x14,0xDA,0xA6 } }; // B6DAA9FC-BC5B-401A-A8B2-6E754D14DAA6
    template <> inline constexpr guid guid_v<winrt::Windows::System::Threading::Core::IPreallocatedWorkItemFactory>{ 0xE3D32B45,0xDFEA,0x469B,{ 0x82,0xC5,0xF6,0xE3,0xCE,0xFD,0xEA,0xFB } }; // E3D32B45-DFEA-469B-82C5-F6E3CEFDEAFB
    template <> inline constexpr guid guid_v<winrt::Windows::System::Threading::Core::ISignalNotifier>{ 0x14285E06,0x63A7,0x4713,{ 0xB6,0xD9,0x62,0xF6,0x4B,0x56,0xFB,0x8B } }; // 14285E06-63A7-4713-B6D9-62F64B56FB8B
    template <> inline constexpr guid guid_v<winrt::Windows::System::Threading::Core::ISignalNotifierStatics>{ 0x1C4E4566,0x8400,0x46D3,{ 0xA1,0x15,0x7D,0x0C,0x0D,0xFC,0x9F,0x62 } }; // 1C4E4566-8400-46D3-A115-7D0C0DFC9F62
    template <> inline constexpr guid guid_v<winrt::Windows::System::Threading::Core::SignalHandler>{ 0x923C402E,0x4721,0x440E,{ 0x9D,0xDA,0x55,0xB6,0xF2,0xE0,0x77,0x10 } }; // 923C402E-4721-440E-9DDA-55B6F2E07710
    template <> struct default_interface<winrt::Windows::System::Threading::Core::PreallocatedWorkItem>{ using type = winrt::Windows::System::Threading::Core::IPreallocatedWorkItem; };
    template <> struct default_interface<winrt::Windows::System::Threading::Core::SignalNotifier>{ using type = winrt::Windows::System::Threading::Core::ISignalNotifier; };
    template <> struct abi<winrt::Windows::System::Threading::Core::IPreallocatedWorkItem>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall RunAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::Threading::Core::IPreallocatedWorkItemFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateWorkItem(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWorkItemWithPriority(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall CreateWorkItemWithPriorityAndOptions(void*, int32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::Threading::Core::ISignalNotifier>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall Enable() noexcept = 0;
            virtual int32_t __stdcall Terminate() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::Threading::Core::ISignalNotifierStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall AttachToEvent(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall AttachToEventWithTimeout(void*, void*, int64_t, void**) noexcept = 0;
            virtual int32_t __stdcall AttachToSemaphore(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall AttachToSemaphoreWithTimeout(void*, void*, int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::Threading::Core::SignalHandler>
    {
        struct WINRT_IMPL_NOVTABLE type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, bool) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_Threading_Core_IPreallocatedWorkItem
    {
        auto RunAsync() const;
    };
    template <> struct consume<winrt::Windows::System::Threading::Core::IPreallocatedWorkItem>
    {
        template <typename D> using type = consume_Windows_System_Threading_Core_IPreallocatedWorkItem<D>;
    };
    template <typename D>
    struct consume_Windows_System_Threading_Core_IPreallocatedWorkItemFactory
    {
        auto CreateWorkItem(winrt::Windows::System::Threading::WorkItemHandler const& handler) const;
        auto CreateWorkItemWithPriority(winrt::Windows::System::Threading::WorkItemHandler const& handler, winrt::Windows::System::Threading::WorkItemPriority const& priority) const;
        auto CreateWorkItemWithPriorityAndOptions(winrt::Windows::System::Threading::WorkItemHandler const& handler, winrt::Windows::System::Threading::WorkItemPriority const& priority, winrt::Windows::System::Threading::WorkItemOptions const& options) const;
    };
    template <> struct consume<winrt::Windows::System::Threading::Core::IPreallocatedWorkItemFactory>
    {
        template <typename D> using type = consume_Windows_System_Threading_Core_IPreallocatedWorkItemFactory<D>;
    };
    template <typename D>
    struct consume_Windows_System_Threading_Core_ISignalNotifier
    {
        auto Enable() const;
        auto Terminate() const;
    };
    template <> struct consume<winrt::Windows::System::Threading::Core::ISignalNotifier>
    {
        template <typename D> using type = consume_Windows_System_Threading_Core_ISignalNotifier<D>;
    };
    template <typename D>
    struct consume_Windows_System_Threading_Core_ISignalNotifierStatics
    {
        auto AttachToEvent(param::hstring const& name, winrt::Windows::System::Threading::Core::SignalHandler const& handler) const;
        auto AttachToEvent(param::hstring const& name, winrt::Windows::System::Threading::Core::SignalHandler const& handler, winrt::Windows::Foundation::TimeSpan const& timeout) const;
        auto AttachToSemaphore(param::hstring const& name, winrt::Windows::System::Threading::Core::SignalHandler const& handler) const;
        auto AttachToSemaphore(param::hstring const& name, winrt::Windows::System::Threading::Core::SignalHandler const& handler, winrt::Windows::Foundation::TimeSpan const& timeout) const;
    };
    template <> struct consume<winrt::Windows::System::Threading::Core::ISignalNotifierStatics>
    {
        template <typename D> using type = consume_Windows_System_Threading_Core_ISignalNotifierStatics<D>;
    };
}
#endif

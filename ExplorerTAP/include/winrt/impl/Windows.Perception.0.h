// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.221121.5

#pragma once
#ifndef WINRT_Windows_Perception_0_H
#define WINRT_Windows_Perception_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
}
WINRT_EXPORT namespace winrt::Windows::Perception
{
    struct IPerceptionTimestamp;
    struct IPerceptionTimestamp2;
    struct IPerceptionTimestampHelperStatics;
    struct IPerceptionTimestampHelperStatics2;
    struct PerceptionTimestamp;
    struct PerceptionTimestampHelper;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Perception::IPerceptionTimestamp>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::IPerceptionTimestamp2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::IPerceptionTimestampHelperStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::IPerceptionTimestampHelperStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Perception::PerceptionTimestamp>{ using type = class_category; };
    template <> struct category<winrt::Windows::Perception::PerceptionTimestampHelper>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::PerceptionTimestamp> = L"Windows.Perception.PerceptionTimestamp";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::PerceptionTimestampHelper> = L"Windows.Perception.PerceptionTimestampHelper";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::IPerceptionTimestamp> = L"Windows.Perception.IPerceptionTimestamp";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::IPerceptionTimestamp2> = L"Windows.Perception.IPerceptionTimestamp2";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::IPerceptionTimestampHelperStatics> = L"Windows.Perception.IPerceptionTimestampHelperStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Perception::IPerceptionTimestampHelperStatics2> = L"Windows.Perception.IPerceptionTimestampHelperStatics2";
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::IPerceptionTimestamp>{ 0x87C24804,0xA22E,0x4ADB,{ 0xBA,0x26,0xD7,0x8E,0xF6,0x39,0xBC,0xF4 } }; // 87C24804-A22E-4ADB-BA26-D78EF639BCF4
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::IPerceptionTimestamp2>{ 0xE354B7ED,0x2BD1,0x41B7,{ 0x9E,0xD0,0x74,0xA1,0x5C,0x35,0x45,0x37 } }; // E354B7ED-2BD1-41B7-9ED0-74A15C354537
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::IPerceptionTimestampHelperStatics>{ 0x47A611D4,0xA9DF,0x4EDC,{ 0x85,0x5D,0xF4,0xD3,0x39,0xD9,0x67,0xAC } }; // 47A611D4-A9DF-4EDC-855D-F4D339D967AC
    template <> inline constexpr guid guid_v<winrt::Windows::Perception::IPerceptionTimestampHelperStatics2>{ 0x73D1A7FE,0x3FB9,0x4571,{ 0x87,0xD4,0x3C,0x92,0x0A,0x5E,0x86,0xEB } }; // 73D1A7FE-3FB9-4571-87D4-3C920A5E86EB
    template <> struct default_interface<winrt::Windows::Perception::PerceptionTimestamp>{ using type = winrt::Windows::Perception::IPerceptionTimestamp; };
    template <> struct abi<winrt::Windows::Perception::IPerceptionTimestamp>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_PredictionAmount(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::IPerceptionTimestamp2>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_SystemRelativeTargetTime(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::IPerceptionTimestampHelperStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall FromHistoricalTargetTime(int64_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Perception::IPerceptionTimestampHelperStatics2>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall FromSystemRelativeTargetTime(int64_t, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Perception_IPerceptionTimestamp
    {
        [[nodiscard]] auto TargetTime() const;
        [[nodiscard]] auto PredictionAmount() const;
    };
    template <> struct consume<winrt::Windows::Perception::IPerceptionTimestamp>
    {
        template <typename D> using type = consume_Windows_Perception_IPerceptionTimestamp<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_IPerceptionTimestamp2
    {
        [[nodiscard]] auto SystemRelativeTargetTime() const;
    };
    template <> struct consume<winrt::Windows::Perception::IPerceptionTimestamp2>
    {
        template <typename D> using type = consume_Windows_Perception_IPerceptionTimestamp2<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_IPerceptionTimestampHelperStatics
    {
        auto FromHistoricalTargetTime(winrt::Windows::Foundation::DateTime const& targetTime) const;
    };
    template <> struct consume<winrt::Windows::Perception::IPerceptionTimestampHelperStatics>
    {
        template <typename D> using type = consume_Windows_Perception_IPerceptionTimestampHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Perception_IPerceptionTimestampHelperStatics2
    {
        auto FromSystemRelativeTargetTime(winrt::Windows::Foundation::TimeSpan const& targetTime) const;
    };
    template <> struct consume<winrt::Windows::Perception::IPerceptionTimestampHelperStatics2>
    {
        template <typename D> using type = consume_Windows_Perception_IPerceptionTimestampHelperStatics2<D>;
    };
}
#endif

// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.221121.5

#pragma once
#ifndef WINRT_Windows_Media_Transcoding_1_H
#define WINRT_Windows_Media_Transcoding_1_H
#include "winrt/impl/Windows.Media.Transcoding.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Transcoding
{
    struct WINRT_IMPL_EMPTY_BASES IMediaTranscoder :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaTranscoder>
    {
        IMediaTranscoder(std::nullptr_t = nullptr) noexcept {}
        IMediaTranscoder(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaTranscoder2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaTranscoder2>
    {
        IMediaTranscoder2(std::nullptr_t = nullptr) noexcept {}
        IMediaTranscoder2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPrepareTranscodeResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPrepareTranscodeResult>
    {
        IPrepareTranscodeResult(std::nullptr_t = nullptr) noexcept {}
        IPrepareTranscodeResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif

// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.221121.5

#pragma once
#ifndef WINRT_Windows_Storage_Compression_2_H
#define WINRT_Windows_Storage_Compression_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Storage.Compression.1.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Compression
{
    struct WINRT_IMPL_EMPTY_BASES Compressor : winrt::Windows::Storage::Compression::ICompressor
    {
        Compressor(std::nullptr_t) noexcept {}
        Compressor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Compression::ICompressor(ptr, take_ownership_from_abi) {}
        explicit Compressor(winrt::Windows::Storage::Streams::IOutputStream const& underlyingStream);
        Compressor(winrt::Windows::Storage::Streams::IOutputStream const& underlyingStream, winrt::Windows::Storage::Compression::CompressAlgorithm const& algorithm, uint32_t blockSize);
    };
    struct WINRT_IMPL_EMPTY_BASES Decompressor : winrt::Windows::Storage::Compression::IDecompressor
    {
        Decompressor(std::nullptr_t) noexcept {}
        Decompressor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Compression::IDecompressor(ptr, take_ownership_from_abi) {}
        explicit Decompressor(winrt::Windows::Storage::Streams::IInputStream const& underlyingStream);
    };
}
#endif

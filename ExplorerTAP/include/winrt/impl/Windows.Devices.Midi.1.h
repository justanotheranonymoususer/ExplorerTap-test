// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.221121.5

#pragma once
#ifndef WINRT_Windows_Devices_Midi_1_H
#define WINRT_Windows_Devices_Midi_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Midi.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Midi
{
    struct WINRT_IMPL_EMPTY_BASES IMidiChannelPressureMessage :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiChannelPressureMessage>,
        impl::require<winrt::Windows::Devices::Midi::IMidiChannelPressureMessage, winrt::Windows::Devices::Midi::IMidiMessage>
    {
        IMidiChannelPressureMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiChannelPressureMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiChannelPressureMessageFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiChannelPressureMessageFactory>
    {
        IMidiChannelPressureMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiChannelPressureMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiControlChangeMessage :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiControlChangeMessage>,
        impl::require<winrt::Windows::Devices::Midi::IMidiControlChangeMessage, winrt::Windows::Devices::Midi::IMidiMessage>
    {
        IMidiControlChangeMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiControlChangeMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiControlChangeMessageFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiControlChangeMessageFactory>
    {
        IMidiControlChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiControlChangeMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiInPort :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiInPort>,
        impl::require<winrt::Windows::Devices::Midi::IMidiInPort, winrt::Windows::Foundation::IClosable>
    {
        IMidiInPort(std::nullptr_t = nullptr) noexcept {}
        IMidiInPort(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiInPortStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiInPortStatics>
    {
        IMidiInPortStatics(std::nullptr_t = nullptr) noexcept {}
        IMidiInPortStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiMessage :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiMessage>
    {
        IMidiMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiMessageReceivedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiMessageReceivedEventArgs>
    {
        IMidiMessageReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMidiMessageReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiNoteOffMessage :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiNoteOffMessage>,
        impl::require<winrt::Windows::Devices::Midi::IMidiNoteOffMessage, winrt::Windows::Devices::Midi::IMidiMessage>
    {
        IMidiNoteOffMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiNoteOffMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiNoteOffMessageFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiNoteOffMessageFactory>
    {
        IMidiNoteOffMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiNoteOffMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiNoteOnMessage :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiNoteOnMessage>,
        impl::require<winrt::Windows::Devices::Midi::IMidiNoteOnMessage, winrt::Windows::Devices::Midi::IMidiMessage>
    {
        IMidiNoteOnMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiNoteOnMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiNoteOnMessageFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiNoteOnMessageFactory>
    {
        IMidiNoteOnMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiNoteOnMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiOutPort :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiOutPort>,
        impl::require<winrt::Windows::Devices::Midi::IMidiOutPort, winrt::Windows::Foundation::IClosable>
    {
        IMidiOutPort(std::nullptr_t = nullptr) noexcept {}
        IMidiOutPort(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiOutPortStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiOutPortStatics>
    {
        IMidiOutPortStatics(std::nullptr_t = nullptr) noexcept {}
        IMidiOutPortStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiPitchBendChangeMessage :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiPitchBendChangeMessage>,
        impl::require<winrt::Windows::Devices::Midi::IMidiPitchBendChangeMessage, winrt::Windows::Devices::Midi::IMidiMessage>
    {
        IMidiPitchBendChangeMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiPitchBendChangeMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiPitchBendChangeMessageFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiPitchBendChangeMessageFactory>
    {
        IMidiPitchBendChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiPitchBendChangeMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiPolyphonicKeyPressureMessage :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiPolyphonicKeyPressureMessage>,
        impl::require<winrt::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage, winrt::Windows::Devices::Midi::IMidiMessage>
    {
        IMidiPolyphonicKeyPressureMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiPolyphonicKeyPressureMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiPolyphonicKeyPressureMessageFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiPolyphonicKeyPressureMessageFactory>
    {
        IMidiPolyphonicKeyPressureMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiPolyphonicKeyPressureMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiProgramChangeMessage :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiProgramChangeMessage>,
        impl::require<winrt::Windows::Devices::Midi::IMidiProgramChangeMessage, winrt::Windows::Devices::Midi::IMidiMessage>
    {
        IMidiProgramChangeMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiProgramChangeMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiProgramChangeMessageFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiProgramChangeMessageFactory>
    {
        IMidiProgramChangeMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiProgramChangeMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiSongPositionPointerMessage :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSongPositionPointerMessage>,
        impl::require<winrt::Windows::Devices::Midi::IMidiSongPositionPointerMessage, winrt::Windows::Devices::Midi::IMidiMessage>
    {
        IMidiSongPositionPointerMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiSongPositionPointerMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiSongPositionPointerMessageFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSongPositionPointerMessageFactory>
    {
        IMidiSongPositionPointerMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiSongPositionPointerMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiSongSelectMessage :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSongSelectMessage>,
        impl::require<winrt::Windows::Devices::Midi::IMidiSongSelectMessage, winrt::Windows::Devices::Midi::IMidiMessage>
    {
        IMidiSongSelectMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiSongSelectMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiSongSelectMessageFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSongSelectMessageFactory>
    {
        IMidiSongSelectMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiSongSelectMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiSynthesizer :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSynthesizer>,
        impl::require<winrt::Windows::Devices::Midi::IMidiSynthesizer, winrt::Windows::Foundation::IClosable, winrt::Windows::Devices::Midi::IMidiOutPort>
    {
        IMidiSynthesizer(std::nullptr_t = nullptr) noexcept {}
        IMidiSynthesizer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiSynthesizerStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSynthesizerStatics>
    {
        IMidiSynthesizerStatics(std::nullptr_t = nullptr) noexcept {}
        IMidiSynthesizerStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiSystemExclusiveMessageFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiSystemExclusiveMessageFactory>
    {
        IMidiSystemExclusiveMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiSystemExclusiveMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiTimeCodeMessage :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiTimeCodeMessage>,
        impl::require<winrt::Windows::Devices::Midi::IMidiTimeCodeMessage, winrt::Windows::Devices::Midi::IMidiMessage>
    {
        IMidiTimeCodeMessage(std::nullptr_t = nullptr) noexcept {}
        IMidiTimeCodeMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMidiTimeCodeMessageFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMidiTimeCodeMessageFactory>
    {
        IMidiTimeCodeMessageFactory(std::nullptr_t = nullptr) noexcept {}
        IMidiTimeCodeMessageFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif

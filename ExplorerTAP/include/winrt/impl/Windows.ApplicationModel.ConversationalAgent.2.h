// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.221121.5

#pragma once
#ifndef WINRT_Windows_ApplicationModel_ConversationalAgent_2_H
#define WINRT_Windows_ApplicationModel_ConversationalAgent_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.ApplicationModel.ConversationalAgent.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::ConversationalAgent
{
    struct WINRT_IMPL_EMPTY_BASES ActivationSignalDetectionConfiguration : winrt::Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfiguration,
        impl::require<ActivationSignalDetectionConfiguration, winrt::Windows::Foundation::IClosable, winrt::Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfiguration2>
    {
        ActivationSignalDetectionConfiguration(std::nullptr_t) noexcept {}
        ActivationSignalDetectionConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ActivationSignalDetectionConfigurationCreationResult : winrt::Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfigurationCreationResult
    {
        ActivationSignalDetectionConfigurationCreationResult(std::nullptr_t) noexcept {}
        ActivationSignalDetectionConfigurationCreationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetectionConfigurationCreationResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ActivationSignalDetector : winrt::Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetector,
        impl::require<ActivationSignalDetector, winrt::Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetector2>
    {
        ActivationSignalDetector(std::nullptr_t) noexcept {}
        ActivationSignalDetector(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IActivationSignalDetector(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ConversationalAgentDetectorManager : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManager,
        impl::require<ConversationalAgentDetectorManager, winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManager2>
    {
        ConversationalAgentDetectorManager(std::nullptr_t) noexcept {}
        ConversationalAgentDetectorManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentDetectorManager(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Default();
    };
    struct WINRT_IMPL_EMPTY_BASES ConversationalAgentSession : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession,
        impl::require<ConversationalAgentSession, winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession2, winrt::Windows::Foundation::IClosable>
    {
        ConversationalAgentSession(std::nullptr_t) noexcept {}
        ConversationalAgentSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSession(ptr, take_ownership_from_abi) {}
        static auto GetCurrentSessionAsync();
        static auto GetCurrentSessionSync();
    };
    struct WINRT_IMPL_EMPTY_BASES ConversationalAgentSessionInterruptedEventArgs : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs
    {
        ConversationalAgentSessionInterruptedEventArgs(std::nullptr_t) noexcept {}
        ConversationalAgentSessionInterruptedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSessionInterruptedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ConversationalAgentSignal : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal,
        impl::require<ConversationalAgentSignal, winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal2>
    {
        ConversationalAgentSignal(std::nullptr_t) noexcept {}
        ConversationalAgentSignal(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignal(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ConversationalAgentSignalDetectedEventArgs : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs
    {
        ConversationalAgentSignalDetectedEventArgs(std::nullptr_t) noexcept {}
        ConversationalAgentSignalDetectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSignalDetectedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ConversationalAgentSystemStateChangedEventArgs : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs
    {
        ConversationalAgentSystemStateChangedEventArgs(std::nullptr_t) noexcept {}
        ConversationalAgentSystemStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IConversationalAgentSystemStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DetectionConfigurationAvailabilityChangedEventArgs : winrt::Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityChangedEventArgs
    {
        DetectionConfigurationAvailabilityChangedEventArgs(std::nullptr_t) noexcept {}
        DetectionConfigurationAvailabilityChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DetectionConfigurationAvailabilityInfo : winrt::Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityInfo,
        impl::require<DetectionConfigurationAvailabilityInfo, winrt::Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityInfo2>
    {
        DetectionConfigurationAvailabilityInfo(std::nullptr_t) noexcept {}
        DetectionConfigurationAvailabilityInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::ConversationalAgent::IDetectionConfigurationAvailabilityInfo(ptr, take_ownership_from_abi) {}
    };
}
#endif

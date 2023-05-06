// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.221121.5

#pragma once
#ifndef WINRT_Windows_Web_Http_Filters_H
#define WINRT_Windows_Web_Http_Filters_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.221121.5"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.221121.5"
#include "winrt/Windows.Web.Http.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Web.Http.2.h"
#include "winrt/impl/Windows.Web.Http.Filters.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AllowAutoRedirect() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_AllowAutoRedirect(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AllowAutoRedirect(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_AllowAutoRedirect(value));
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AllowUI() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_AllowUI(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AllowUI(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_AllowUI(value));
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AutomaticDecompression() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_AutomaticDecompression(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::AutomaticDecompression(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_AutomaticDecompression(value));
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::CacheControl() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_CacheControl(&value));
        return winrt::Windows::Web::Http::Filters::HttpCacheControl{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::CookieManager() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_CookieManager(&value));
        return winrt::Windows::Web::Http::HttpCookieManager{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ClientCertificate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_ClientCertificate(&value));
        return winrt::Windows::Security::Cryptography::Certificates::Certificate{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ClientCertificate(winrt::Windows::Security::Cryptography::Certificates::Certificate const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_ClientCertificate(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::IgnorableServerCertificateErrors() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_IgnorableServerCertificateErrors(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::MaxConnectionsPerServer() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_MaxConnectionsPerServer(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::MaxConnectionsPerServer(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_MaxConnectionsPerServer(value));
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ProxyCredential() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_ProxyCredential(&value));
        return winrt::Windows::Security::Credentials::PasswordCredential{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ProxyCredential(winrt::Windows::Security::Credentials::PasswordCredential const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_ProxyCredential(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ServerCredential() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_ServerCredential(&value));
        return winrt::Windows::Security::Credentials::PasswordCredential{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::ServerCredential(winrt::Windows::Security::Credentials::PasswordCredential const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_ServerCredential(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::UseProxy() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->get_UseProxy(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter<D>::UseProxy(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter)->put_UseProxy(value));
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter2<D>::MaxVersion() const
    {
        winrt::Windows::Web::Http::HttpVersion value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter2)->get_MaxVersion(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter2<D>::MaxVersion(winrt::Windows::Web::Http::HttpVersion const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter2)->put_MaxVersion(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter3<D>::CookieUsageBehavior() const
    {
        winrt::Windows::Web::Http::Filters::HttpCookieUsageBehavior value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter3)->get_CookieUsageBehavior(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter3<D>::CookieUsageBehavior(winrt::Windows::Web::Http::Filters::HttpCookieUsageBehavior const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter3)->put_CookieUsageBehavior(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4<D>::ServerCustomValidationRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Web::Http::Filters::HttpBaseProtocolFilter, winrt::Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter4)->add_ServerCustomValidationRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4<D>::ServerCustomValidationRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Web::Http::Filters::HttpBaseProtocolFilter, winrt::Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, ServerCustomValidationRequested_revoker>(this, ServerCustomValidationRequested(handler));
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4<D>::ServerCustomValidationRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter4)->remove_ServerCustomValidationRequested(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter4<D>::ClearAuthenticationCache() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter4)->ClearAuthenticationCache());
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilter5<D>::User() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter5)->get_User(&value));
        return winrt::Windows::System::User{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpBaseProtocolFilterStatics<D>::CreateForUser(winrt::Windows::System::User const& user) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics)->CreateForUser(*(void**)(&user), &result));
        return winrt::Windows::Web::Http::Filters::HttpBaseProtocolFilter{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpCacheControl<D>::ReadBehavior() const
    {
        winrt::Windows::Web::Http::Filters::HttpCacheReadBehavior value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpCacheControl)->get_ReadBehavior(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpCacheControl<D>::ReadBehavior(winrt::Windows::Web::Http::Filters::HttpCacheReadBehavior const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpCacheControl)->put_ReadBehavior(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpCacheControl<D>::WriteBehavior() const
    {
        winrt::Windows::Web::Http::Filters::HttpCacheWriteBehavior value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpCacheControl)->get_WriteBehavior(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpCacheControl<D>::WriteBehavior(winrt::Windows::Web::Http::Filters::HttpCacheWriteBehavior const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpCacheControl)->put_WriteBehavior(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpFilter<D>::SendRequestAsync(winrt::Windows::Web::Http::HttpRequestMessage const& request) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpFilter)->SendRequestAsync(*(void**)(&request), &operation));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpResponseMessage, winrt::Windows::Web::Http::HttpProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::RequestMessage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->get_RequestMessage(&value));
        return winrt::Windows::Web::Http::HttpRequestMessage{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::ServerCertificate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->get_ServerCertificate(&value));
        return winrt::Windows::Security::Cryptography::Certificates::Certificate{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::ServerCertificateErrorSeverity() const
    {
        winrt::Windows::Networking::Sockets::SocketSslErrorSeverity value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->get_ServerCertificateErrorSeverity(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::ServerCertificateErrors() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->get_ServerCertificateErrors(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::ServerIntermediateCertificates() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->get_ServerIntermediateCertificates(&value));
        return winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::Certificate>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::Reject() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->Reject());
    }
    template <typename D> auto consume_Windows_Web_Http_Filters_IHttpServerCustomValidationRequestedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs)->GetDeferral(&result));
        return winrt::Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter> : produce_base<D, winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter>
    {
        int32_t __stdcall get_AllowAutoRedirect(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowAutoRedirect());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowAutoRedirect(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowAutoRedirect(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowUI(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowUI());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowUI(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowUI(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AutomaticDecompression(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AutomaticDecompression());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AutomaticDecompression(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutomaticDecompression(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CacheControl(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::Filters::HttpCacheControl>(this->shim().CacheControl());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CookieManager(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpCookieManager>(this->shim().CookieManager());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ClientCertificate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::Cryptography::Certificates::Certificate>(this->shim().ClientCertificate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ClientCertificate(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClientCertificate(*reinterpret_cast<winrt::Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IgnorableServerCertificateErrors(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult>>(this->shim().IgnorableServerCertificateErrors());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MaxConnectionsPerServer(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxConnectionsPerServer());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxConnectionsPerServer(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxConnectionsPerServer(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProxyCredential(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::Credentials::PasswordCredential>(this->shim().ProxyCredential());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProxyCredential(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProxyCredential(*reinterpret_cast<winrt::Windows::Security::Credentials::PasswordCredential const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServerCredential(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::Credentials::PasswordCredential>(this->shim().ServerCredential());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ServerCredential(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerCredential(*reinterpret_cast<winrt::Windows::Security::Credentials::PasswordCredential const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UseProxy(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().UseProxy());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UseProxy(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UseProxy(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter2> : produce_base<D, winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter2>
    {
        int32_t __stdcall get_MaxVersion(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpVersion>(this->shim().MaxVersion());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_MaxVersion(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxVersion(*reinterpret_cast<winrt::Windows::Web::Http::HttpVersion const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter3> : produce_base<D, winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter3>
    {
        int32_t __stdcall get_CookieUsageBehavior(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::Filters::HttpCookieUsageBehavior>(this->shim().CookieUsageBehavior());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CookieUsageBehavior(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CookieUsageBehavior(*reinterpret_cast<winrt::Windows::Web::Http::Filters::HttpCookieUsageBehavior const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter4> : produce_base<D, winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter4>
    {
        int32_t __stdcall add_ServerCustomValidationRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().ServerCustomValidationRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Web::Http::Filters::HttpBaseProtocolFilter, winrt::Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_ServerCustomValidationRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerCustomValidationRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall ClearAuthenticationCache() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearAuthenticationCache();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter5> : produce_base<D, winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter5>
    {
        int32_t __stdcall get_User(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::System::User>(this->shim().User());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics> : produce_base<D, winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics>
    {
        int32_t __stdcall CreateForUser(void* user, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Web::Http::Filters::HttpBaseProtocolFilter>(this->shim().CreateForUser(*reinterpret_cast<winrt::Windows::System::User const*>(&user)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::Filters::IHttpCacheControl> : produce_base<D, winrt::Windows::Web::Http::Filters::IHttpCacheControl>
    {
        int32_t __stdcall get_ReadBehavior(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::Filters::HttpCacheReadBehavior>(this->shim().ReadBehavior());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ReadBehavior(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadBehavior(*reinterpret_cast<winrt::Windows::Web::Http::Filters::HttpCacheReadBehavior const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WriteBehavior(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::Filters::HttpCacheWriteBehavior>(this->shim().WriteBehavior());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_WriteBehavior(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteBehavior(*reinterpret_cast<winrt::Windows::Web::Http::Filters::HttpCacheWriteBehavior const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::Filters::IHttpFilter> : produce_base<D, winrt::Windows::Web::Http::Filters::IHttpFilter>
    {
        int32_t __stdcall SendRequestAsync(void* request, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Web::Http::HttpResponseMessage, winrt::Windows::Web::Http::HttpProgress>>(this->shim().SendRequestAsync(*reinterpret_cast<winrt::Windows::Web::Http::HttpRequestMessage const*>(&request)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs> : produce_base<D, winrt::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs>
    {
        int32_t __stdcall get_RequestMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Web::Http::HttpRequestMessage>(this->shim().RequestMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServerCertificate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Security::Cryptography::Certificates::Certificate>(this->shim().ServerCertificate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServerCertificateErrorSeverity(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Networking::Sockets::SocketSslErrorSeverity>(this->shim().ServerCertificateErrorSeverity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServerCertificateErrors(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::ChainValidationResult>>(this->shim().ServerCertificateErrors());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ServerIntermediateCertificates(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().ServerIntermediateCertificates());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Reject() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reject();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Web::Http::Filters
{
    inline HttpBaseProtocolFilter::HttpBaseProtocolFilter() :
        HttpBaseProtocolFilter(impl::call_factory_cast<HttpBaseProtocolFilter(*)(winrt::Windows::Foundation::IActivationFactory const&), HttpBaseProtocolFilter>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<HttpBaseProtocolFilter>(); }))
    {
    }
    inline auto HttpBaseProtocolFilter::CreateForUser(winrt::Windows::System::User const& user)
    {
        return impl::call_factory<HttpBaseProtocolFilter, IHttpBaseProtocolFilterStatics>([&](IHttpBaseProtocolFilterStatics const& f) { return f.CreateForUser(user); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter5> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilterStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpCacheControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpFilter> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::HttpBaseProtocolFilter> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::HttpCacheControl> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Web::Http::Filters::HttpServerCustomValidationRequestedEventArgs> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif

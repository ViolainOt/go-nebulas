// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: nvm.proto
// Original file comments:
// Copyright (C) 2017 go-nebulas authors
//
// This file is part of the go-nebulas library.
//
// the go-nebulas library is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// the go-nebulas library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with the go-nebulas library.  If not, see <http://www.gnu.org/licenses/>.
//
#ifndef GRPC_nvm_2eproto__INCLUDED
#define GRPC_nvm_2eproto__INCLUDED

#include "nvm.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

class NVMService final {
 public:
  static constexpr char const* service_full_name() {
    return "NVMService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::NVMDataRequest, ::NVMDataResponse>> SmartContractCall(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::NVMDataRequest, ::NVMDataResponse>>(SmartContractCallRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::NVMDataRequest, ::NVMDataResponse>> AsyncSmartContractCall(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::NVMDataRequest, ::NVMDataResponse>>(AsyncSmartContractCallRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::NVMDataRequest, ::NVMDataResponse>> PrepareAsyncSmartContractCall(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::NVMDataRequest, ::NVMDataResponse>>(PrepareAsyncSmartContractCallRaw(context, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void SmartContractCall(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::NVMDataRequest,::NVMDataResponse>* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientReaderWriterInterface< ::NVMDataRequest, ::NVMDataResponse>* SmartContractCallRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::NVMDataRequest, ::NVMDataResponse>* AsyncSmartContractCallRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::NVMDataRequest, ::NVMDataResponse>* PrepareAsyncSmartContractCallRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReaderWriter< ::NVMDataRequest, ::NVMDataResponse>> SmartContractCall(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::NVMDataRequest, ::NVMDataResponse>>(SmartContractCallRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::NVMDataRequest, ::NVMDataResponse>> AsyncSmartContractCall(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::NVMDataRequest, ::NVMDataResponse>>(AsyncSmartContractCallRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::NVMDataRequest, ::NVMDataResponse>> PrepareAsyncSmartContractCall(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::NVMDataRequest, ::NVMDataResponse>>(PrepareAsyncSmartContractCallRaw(context, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void SmartContractCall(::grpc::ClientContext* context, ::grpc::experimental::ClientBidiReactor< ::NVMDataRequest,::NVMDataResponse>* reactor) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientReaderWriter< ::NVMDataRequest, ::NVMDataResponse>* SmartContractCallRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::NVMDataRequest, ::NVMDataResponse>* AsyncSmartContractCallRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::NVMDataRequest, ::NVMDataResponse>* PrepareAsyncSmartContractCallRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SmartContractCall_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SmartContractCall(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::NVMDataResponse, ::NVMDataRequest>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_SmartContractCall : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SmartContractCall() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SmartContractCall() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SmartContractCall(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::NVMDataResponse, ::NVMDataRequest>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSmartContractCall(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::NVMDataResponse, ::NVMDataRequest>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SmartContractCall<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_SmartContractCall : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_SmartContractCall() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackBidiHandler< ::NVMDataRequest, ::NVMDataResponse>(
          [this] { return this->SmartContractCall(); }));
    }
    ~ExperimentalWithCallbackMethod_SmartContractCall() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SmartContractCall(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::NVMDataResponse, ::NVMDataRequest>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerBidiReactor< ::NVMDataRequest, ::NVMDataResponse>* SmartContractCall() {
      return new ::grpc::internal::UnimplementedBidiReactor<
        ::NVMDataRequest, ::NVMDataResponse>;}
  };
  typedef ExperimentalWithCallbackMethod_SmartContractCall<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SmartContractCall : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SmartContractCall() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SmartContractCall() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SmartContractCall(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::NVMDataResponse, ::NVMDataRequest>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SmartContractCall : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_SmartContractCall() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SmartContractCall() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SmartContractCall(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::NVMDataResponse, ::NVMDataRequest>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSmartContractCall(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_SmartContractCall : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_SmartContractCall() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this] { return this->SmartContractCall(); }));
    }
    ~ExperimentalWithRawCallbackMethod_SmartContractCall() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SmartContractCall(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::NVMDataResponse, ::NVMDataRequest>* stream)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* SmartContractCall() {
      return new ::grpc::internal::UnimplementedBidiReactor<
        ::grpc::ByteBuffer, ::grpc::ByteBuffer>;}
  };
  typedef Service StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef Service StreamedService;
};


#endif  // GRPC_nvm_2eproto__INCLUDED

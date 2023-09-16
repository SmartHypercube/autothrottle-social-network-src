/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "UserTimelineService.h"

namespace social_network {


UserTimelineService_ReadUserTimeline_args::~UserTimelineService_ReadUserTimeline_args() throw() {
}


uint32_t UserTimelineService_ReadUserTimeline_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->req_id);
          this->__isset.req_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->user_id);
          this->__isset.user_id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->start);
          this->__isset.start = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->stop);
          this->__isset.stop = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->carrier.clear();
            uint32_t _size257;
            ::apache::thrift::protocol::TType _ktype258;
            ::apache::thrift::protocol::TType _vtype259;
            xfer += iprot->readMapBegin(_ktype258, _vtype259, _size257);
            uint32_t _i261;
            for (_i261 = 0; _i261 < _size257; ++_i261)
            {
              std::string _key262;
              xfer += iprot->readString(_key262);
              std::string& _val263 = this->carrier[_key262];
              xfer += iprot->readString(_val263);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.carrier = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t UserTimelineService_ReadUserTimeline_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("UserTimelineService_ReadUserTimeline_args");

  xfer += oprot->writeFieldBegin("req_id", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->req_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("user_id", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->user_id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("start", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->start);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("stop", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->stop);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("carrier", ::apache::thrift::protocol::T_MAP, 5);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->carrier.size()));
    std::map<std::string, std::string> ::const_iterator _iter264;
    for (_iter264 = this->carrier.begin(); _iter264 != this->carrier.end(); ++_iter264)
    {
      xfer += oprot->writeString(_iter264->first);
      xfer += oprot->writeString(_iter264->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


UserTimelineService_ReadUserTimeline_pargs::~UserTimelineService_ReadUserTimeline_pargs() throw() {
}


uint32_t UserTimelineService_ReadUserTimeline_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("UserTimelineService_ReadUserTimeline_pargs");

  xfer += oprot->writeFieldBegin("req_id", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64((*(this->req_id)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("user_id", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64((*(this->user_id)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("start", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32((*(this->start)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("stop", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32((*(this->stop)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("carrier", ::apache::thrift::protocol::T_MAP, 5);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRING, static_cast<uint32_t>((*(this->carrier)).size()));
    std::map<std::string, std::string> ::const_iterator _iter265;
    for (_iter265 = (*(this->carrier)).begin(); _iter265 != (*(this->carrier)).end(); ++_iter265)
    {
      xfer += oprot->writeString(_iter265->first);
      xfer += oprot->writeString(_iter265->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


UserTimelineService_ReadUserTimeline_result::~UserTimelineService_ReadUserTimeline_result() throw() {
}


uint32_t UserTimelineService_ReadUserTimeline_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->success.clear();
            uint32_t _size266;
            ::apache::thrift::protocol::TType _etype269;
            xfer += iprot->readListBegin(_etype269, _size266);
            this->success.resize(_size266);
            uint32_t _i270;
            for (_i270 = 0; _i270 < _size266; ++_i270)
            {
              xfer += this->success[_i270].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->se.read(iprot);
          this->__isset.se = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t UserTimelineService_ReadUserTimeline_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("UserTimelineService_ReadUserTimeline_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_LIST, 0);
    {
      xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->success.size()));
      std::vector<Post> ::const_iterator _iter271;
      for (_iter271 = this->success.begin(); _iter271 != this->success.end(); ++_iter271)
      {
        xfer += (*_iter271).write(oprot);
      }
      xfer += oprot->writeListEnd();
    }
    xfer += oprot->writeFieldEnd();
  } else if (this->__isset.se) {
    xfer += oprot->writeFieldBegin("se", ::apache::thrift::protocol::T_STRUCT, 1);
    xfer += this->se.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


UserTimelineService_ReadUserTimeline_presult::~UserTimelineService_ReadUserTimeline_presult() throw() {
}


uint32_t UserTimelineService_ReadUserTimeline_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            (*(this->success)).clear();
            uint32_t _size272;
            ::apache::thrift::protocol::TType _etype275;
            xfer += iprot->readListBegin(_etype275, _size272);
            (*(this->success)).resize(_size272);
            uint32_t _i276;
            for (_i276 = 0; _i276 < _size272; ++_i276)
            {
              xfer += (*(this->success))[_i276].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->se.read(iprot);
          this->__isset.se = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void UserTimelineServiceClient::ReadUserTimeline(std::vector<Post> & _return, const int64_t req_id, const int64_t user_id, const int32_t start, const int32_t stop, const std::map<std::string, std::string> & carrier)
{
  send_ReadUserTimeline(req_id, user_id, start, stop, carrier);
  recv_ReadUserTimeline(_return);
}

void UserTimelineServiceClient::send_ReadUserTimeline(const int64_t req_id, const int64_t user_id, const int32_t start, const int32_t stop, const std::map<std::string, std::string> & carrier)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("ReadUserTimeline", ::apache::thrift::protocol::T_CALL, cseqid);

  UserTimelineService_ReadUserTimeline_pargs args;
  args.req_id = &req_id;
  args.user_id = &user_id;
  args.start = &start;
  args.stop = &stop;
  args.carrier = &carrier;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void UserTimelineServiceClient::recv_ReadUserTimeline(std::vector<Post> & _return)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("ReadUserTimeline") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  UserTimelineService_ReadUserTimeline_presult result;
  result.success = &_return;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    // _return pointer has now been filled
    return;
  }
  if (result.__isset.se) {
    throw result.se;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "ReadUserTimeline failed: unknown result");
}

bool UserTimelineServiceProcessor::dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return true;
  }
  (this->*(pfn->second))(seqid, iprot, oprot, callContext);
  return true;
}

void UserTimelineServiceProcessor::process_ReadUserTimeline(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("UserTimelineService.ReadUserTimeline", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "UserTimelineService.ReadUserTimeline");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "UserTimelineService.ReadUserTimeline");
  }

  UserTimelineService_ReadUserTimeline_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "UserTimelineService.ReadUserTimeline", bytes);
  }

  UserTimelineService_ReadUserTimeline_result result;
  try {
    iface_->ReadUserTimeline(result.success, args.req_id, args.user_id, args.start, args.stop, args.carrier);
    result.__isset.success = true;
  } catch (ServiceException &se) {
    result.se = se;
    result.__isset.se = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "UserTimelineService.ReadUserTimeline");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("ReadUserTimeline", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "UserTimelineService.ReadUserTimeline");
  }

  oprot->writeMessageBegin("ReadUserTimeline", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "UserTimelineService.ReadUserTimeline", bytes);
  }
}

::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > UserTimelineServiceProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< UserTimelineServiceIfFactory > cleanup(handlerFactory_);
  ::apache::thrift::stdcxx::shared_ptr< UserTimelineServiceIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > processor(new UserTimelineServiceProcessor(handler));
  return processor;
}

void UserTimelineServiceConcurrentClient::ReadUserTimeline(std::vector<Post> & _return, const int64_t req_id, const int64_t user_id, const int32_t start, const int32_t stop, const std::map<std::string, std::string> & carrier)
{
  int32_t seqid = send_ReadUserTimeline(req_id, user_id, start, stop, carrier);
  recv_ReadUserTimeline(_return, seqid);
}

int32_t UserTimelineServiceConcurrentClient::send_ReadUserTimeline(const int64_t req_id, const int64_t user_id, const int32_t start, const int32_t stop, const std::map<std::string, std::string> & carrier)
{
  int32_t cseqid = this->sync_.generateSeqId();
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  oprot_->writeMessageBegin("ReadUserTimeline", ::apache::thrift::protocol::T_CALL, cseqid);

  UserTimelineService_ReadUserTimeline_pargs args;
  args.req_id = &req_id;
  args.user_id = &user_id;
  args.start = &start;
  args.stop = &stop;
  args.carrier = &carrier;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();

  sentry.commit();
  return cseqid;
}

void UserTimelineServiceConcurrentClient::recv_ReadUserTimeline(std::vector<Post> & _return, const int32_t seqid)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  // the read mutex gets dropped and reacquired as part of waitForWork()
  // The destructor of this sentry wakes up other clients
  ::apache::thrift::async::TConcurrentRecvSentry sentry(&this->sync_, seqid);

  while(true) {
    if(!this->sync_.getPending(fname, mtype, rseqid)) {
      iprot_->readMessageBegin(fname, mtype, rseqid);
    }
    if(seqid == rseqid) {
      if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
        ::apache::thrift::TApplicationException x;
        x.read(iprot_);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
        sentry.commit();
        throw x;
      }
      if (mtype != ::apache::thrift::protocol::T_REPLY) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
      }
      if (fname.compare("ReadUserTimeline") != 0) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();

        // in a bad state, don't commit
        using ::apache::thrift::protocol::TProtocolException;
        throw TProtocolException(TProtocolException::INVALID_DATA);
      }
      UserTimelineService_ReadUserTimeline_presult result;
      result.success = &_return;
      result.read(iprot_);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();

      if (result.__isset.success) {
        // _return pointer has now been filled
        sentry.commit();
        return;
      }
      if (result.__isset.se) {
        sentry.commit();
        throw result.se;
      }
      // in a bad state, don't commit
      throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "ReadUserTimeline failed: unknown result");
    }
    // seqid != rseqid
    this->sync_.updatePending(fname, mtype, rseqid);

    // this will temporarily unlock the readMutex, and let other clients get work done
    this->sync_.waitForWork(seqid);
  } // end while(true)
}

} // namespace

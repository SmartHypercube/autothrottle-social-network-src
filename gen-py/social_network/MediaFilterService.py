#
# Autogenerated by Thrift Compiler (0.12.0)
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
#  options string: py
#

from thrift.Thrift import TType, TMessageType, TFrozenDict, TException, TApplicationException
from thrift.protocol.TProtocol import TProtocolException
from thrift.TRecursive import fix_spec

import sys
import logging
from .ttypes import *
from thrift.Thrift import TProcessor
from thrift.transport import TTransport
all_structs = []


class Iface(object):
    def UploadMedia(self, req_id, media_types, medium, carrier):
        """
        Parameters:
         - req_id
         - media_types
         - medium
         - carrier

        """
        pass


class Client(Iface):
    def __init__(self, iprot, oprot=None):
        self._iprot = self._oprot = iprot
        if oprot is not None:
            self._oprot = oprot
        self._seqid = 0

    def UploadMedia(self, req_id, media_types, medium, carrier):
        """
        Parameters:
         - req_id
         - media_types
         - medium
         - carrier

        """
        self.send_UploadMedia(req_id, media_types, medium, carrier)
        return self.recv_UploadMedia()

    def send_UploadMedia(self, req_id, media_types, medium, carrier):
        self._oprot.writeMessageBegin('UploadMedia', TMessageType.CALL, self._seqid)
        args = UploadMedia_args()
        args.req_id = req_id
        args.media_types = media_types
        args.medium = medium
        args.carrier = carrier
        args.write(self._oprot)
        self._oprot.writeMessageEnd()
        self._oprot.trans.flush()

    def recv_UploadMedia(self):
        iprot = self._iprot
        (fname, mtype, rseqid) = iprot.readMessageBegin()
        if mtype == TMessageType.EXCEPTION:
            x = TApplicationException()
            x.read(iprot)
            iprot.readMessageEnd()
            raise x
        result = UploadMedia_result()
        result.read(iprot)
        iprot.readMessageEnd()
        if result.success is not None:
            return result.success
        if result.se is not None:
            raise result.se
        raise TApplicationException(TApplicationException.MISSING_RESULT, "UploadMedia failed: unknown result")


class Processor(Iface, TProcessor):
    def __init__(self, handler):
        self._handler = handler
        self._processMap = {}
        self._processMap["UploadMedia"] = Processor.process_UploadMedia

    def process(self, iprot, oprot):
        (name, type, seqid) = iprot.readMessageBegin()
        if name not in self._processMap:
            iprot.skip(TType.STRUCT)
            iprot.readMessageEnd()
            x = TApplicationException(TApplicationException.UNKNOWN_METHOD, 'Unknown function %s' % (name))
            oprot.writeMessageBegin(name, TMessageType.EXCEPTION, seqid)
            x.write(oprot)
            oprot.writeMessageEnd()
            oprot.trans.flush()
            return
        else:
            self._processMap[name](self, seqid, iprot, oprot)
        return True

    def process_UploadMedia(self, seqid, iprot, oprot):
        args = UploadMedia_args()
        args.read(iprot)
        iprot.readMessageEnd()
        result = UploadMedia_result()
        try:
            result.success = self._handler.UploadMedia(args.req_id, args.media_types, args.medium, args.carrier)
            msg_type = TMessageType.REPLY
        except TTransport.TTransportException:
            raise
        except ServiceException as se:
            msg_type = TMessageType.REPLY
            result.se = se
        except TApplicationException as ex:
            logging.exception('TApplication exception in handler')
            msg_type = TMessageType.EXCEPTION
            result = ex
        except Exception:
            logging.exception('Unexpected exception in handler')
            msg_type = TMessageType.EXCEPTION
            result = TApplicationException(TApplicationException.INTERNAL_ERROR, 'Internal error')
        oprot.writeMessageBegin("UploadMedia", msg_type, seqid)
        result.write(oprot)
        oprot.writeMessageEnd()
        oprot.trans.flush()

# HELPER FUNCTIONS AND STRUCTURES


class UploadMedia_args(object):
    """
    Attributes:
     - req_id
     - media_types
     - medium
     - carrier

    """


    def __init__(self, req_id=None, media_types=None, medium=None, carrier=None,):
        self.req_id = req_id
        self.media_types = media_types
        self.medium = medium
        self.carrier = carrier

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.I64:
                    self.req_id = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.LIST:
                    self.media_types = []
                    (_etype415, _size412) = iprot.readListBegin()
                    for _i416 in range(_size412):
                        _elem417 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.media_types.append(_elem417)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 3:
                if ftype == TType.LIST:
                    self.medium = []
                    (_etype421, _size418) = iprot.readListBegin()
                    for _i422 in range(_size418):
                        _elem423 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.medium.append(_elem423)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 4:
                if ftype == TType.MAP:
                    self.carrier = {}
                    (_ktype425, _vtype426, _size424) = iprot.readMapBegin()
                    for _i428 in range(_size424):
                        _key429 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        _val430 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.carrier[_key429] = _val430
                    iprot.readMapEnd()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('UploadMedia_args')
        if self.req_id is not None:
            oprot.writeFieldBegin('req_id', TType.I64, 1)
            oprot.writeI64(self.req_id)
            oprot.writeFieldEnd()
        if self.media_types is not None:
            oprot.writeFieldBegin('media_types', TType.LIST, 2)
            oprot.writeListBegin(TType.STRING, len(self.media_types))
            for iter431 in self.media_types:
                oprot.writeString(iter431.encode('utf-8') if sys.version_info[0] == 2 else iter431)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.medium is not None:
            oprot.writeFieldBegin('medium', TType.LIST, 3)
            oprot.writeListBegin(TType.STRING, len(self.medium))
            for iter432 in self.medium:
                oprot.writeString(iter432.encode('utf-8') if sys.version_info[0] == 2 else iter432)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.carrier is not None:
            oprot.writeFieldBegin('carrier', TType.MAP, 4)
            oprot.writeMapBegin(TType.STRING, TType.STRING, len(self.carrier))
            for kiter433, viter434 in self.carrier.items():
                oprot.writeString(kiter433.encode('utf-8') if sys.version_info[0] == 2 else kiter433)
                oprot.writeString(viter434.encode('utf-8') if sys.version_info[0] == 2 else viter434)
            oprot.writeMapEnd()
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(UploadMedia_args)
UploadMedia_args.thrift_spec = (
    None,  # 0
    (1, TType.I64, 'req_id', None, None, ),  # 1
    (2, TType.LIST, 'media_types', (TType.STRING, 'UTF8', False), None, ),  # 2
    (3, TType.LIST, 'medium', (TType.STRING, 'UTF8', False), None, ),  # 3
    (4, TType.MAP, 'carrier', (TType.STRING, 'UTF8', TType.STRING, 'UTF8', False), None, ),  # 4
)


class UploadMedia_result(object):
    """
    Attributes:
     - success
     - se

    """


    def __init__(self, success=None, se=None,):
        self.success = success
        self.se = se

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 0:
                if ftype == TType.LIST:
                    self.success = []
                    (_etype438, _size435) = iprot.readListBegin()
                    for _i439 in range(_size435):
                        _elem440 = iprot.readBool()
                        self.success.append(_elem440)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 1:
                if ftype == TType.STRUCT:
                    self.se = ServiceException()
                    self.se.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('UploadMedia_result')
        if self.success is not None:
            oprot.writeFieldBegin('success', TType.LIST, 0)
            oprot.writeListBegin(TType.BOOL, len(self.success))
            for iter441 in self.success:
                oprot.writeBool(iter441)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.se is not None:
            oprot.writeFieldBegin('se', TType.STRUCT, 1)
            self.se.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(UploadMedia_result)
UploadMedia_result.thrift_spec = (
    (0, TType.LIST, 'success', (TType.BOOL, None, False), None, ),  # 0
    (1, TType.STRUCT, 'se', [ServiceException, None], None, ),  # 1
)
fix_spec(all_structs)
del all_structs

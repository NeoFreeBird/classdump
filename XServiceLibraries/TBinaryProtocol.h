//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TBinaryProtocol_h
#define TBinaryProtocol_h
@import Foundation;

#include "TProtocol-Protocol.h"
#include "TTransport-Protocol.h"

@class NSObject, NSString;

@interface TBinaryProtocol : NSObject <TProtocol> {
    /* instance variables */
    id <TTransport> mTransport;
    _Bool mStrictRead;
    _Bool mStrictWrite;
    int mMessageSizeLimit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTransport:(id)transport;
- (id)initWithTransport:(id)transport strictRead:(_Bool)read strictWrite:(_Bool)write;
- (int)messageSizeLimit;
- (void)setMessageSizeLimit:(int)limit;
- (void)dealloc;
- (id)transport;
- (id)readStringBody:(int)body;
- (void)readMessageBeginReturningName:(id *)name type:(int *)type sequenceID:(int *)id;
- (void)readMessageEnd;
- (void)readStructBeginReturningName:(id *)name;
- (void)readStructEnd;
- (void)readFieldBeginReturningName:(id *)name type:(int *)type fieldID:(int *)id;
- (void)readFieldEnd;
- (int)readI32;
- (id)readString;
- (_Bool)readBool;
- (unsigned char)readByte;
- (short)readI16;
- (long long)readI64;
- (double)readDouble;
- (id)readBinary;
- (void)readMapBeginReturningKeyType:(int *)type valueType:(int *)type size:(int *)size;
- (void)readMapEnd;
- (void)readSetBeginReturningElementType:(int *)type size:(int *)size;
- (void)readSetEnd;
- (void)readListBeginReturningElementType:(int *)type size:(int *)size;
- (void)readListEnd;
- (void)writeByte:(unsigned char)byte;
- (void)writeMessageBeginWithName:(id)name type:(int)type sequenceID:(int)id;
- (void)writeMessageEnd;
- (void)writeStructBeginWithName:(id)name;
- (void)writeStructEnd;
- (void)writeFieldBeginWithName:(id)name type:(int)type fieldID:(int)id;
- (void)writeI32:(int)i32;
- (void)writeI16:(short)i16;
- (void)writeI64:(long long)i64;
- (void)writeDouble:(double)_double;
- (void)writeString:(id)string;
- (void)writeBinary:(id)binary;
- (void)writeFieldStop;
- (void)writeFieldEnd;
- (void)writeMapBeginWithKeyType:(int)type valueType:(int)type size:(int)size;
- (void)writeMapEnd;
- (void)writeSetBeginWithElementType:(int)type size:(int)size;
- (void)writeSetEnd;
- (void)writeListBeginWithElementType:(int)type size:(int)size;
- (void)writeListEnd;
- (void)writeBool:(_Bool)_bool;

@end

#endif /* TBinaryProtocol_h */

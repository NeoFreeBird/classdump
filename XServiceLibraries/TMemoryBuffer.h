//
#ifndef TMemoryBuffer_h
#define TMemoryBuffer_h
@import Foundation;

#include "TTransport-Protocol.h"

@class NSMutableData, NSObject, NSString;

@interface TMemoryBuffer : NSObject <TTransport> {
    /* instance variables */
    NSMutableData *mBuffer;
    unsigned long long mOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (int)readAll:(char *)all offset:(int)offset length:(int)length;
- (void)write:(const char *)write offset:(unsigned int)offset length:(unsigned int)length;
- (void)flush;
- (id)getBuffer;
- (void)dealloc;

@end

#endif /* TMemoryBuffer_h */

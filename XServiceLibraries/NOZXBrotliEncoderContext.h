//
#ifndef NOZXBrotliEncoderContext_h
#define NOZXBrotliEncoderContext_h
@import Foundation;

#include "NOZEncoder-Protocol.h"
#include "NOZEncoderContext-Protocol.h"

@class NSObject, NSString;

@interface NOZXBrotliEncoderContext : NSObject <NOZEncoderContext> {
    /* instance variables */
    struct BrotliEncoderStateStruct * _encoderState;
    struct { unsigned int initialized:1; unsigned int failureEncountered:1; } _flags;
    unsigned char _encoderBuffer[16384];
    char * _encoderBufferPointer;
    unsigned long long _encoderBufferRemainingBytesCount;
}

@property (readonly, nonatomic) _Bool encodedDataWasText;
@property (readonly, nonatomic) unsigned int quality;
@property (readonly, nonatomic) id <NOZEncoder> encoder;
@property (readonly, copy, nonatomic) id /* block */ flushCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEncoder:(id)encoder quality:(unsigned int)quality flushCallback:(id /* block */)callback;
- (void)dealloc;
- (_Bool)initializeContext;
- (_Bool)encodeBytes:(const char *)bytes length:(unsigned long long)length;
- (_Bool)finalizeEncoding;
- (void)flush;

@end

#endif /* NOZXBrotliEncoderContext_h */

//
#ifndef NOZDeflateEncoderContext_h
#define NOZDeflateEncoderContext_h
@import Foundation;

#include "NOZEncoderContext-Protocol.h"

@class NSObject, NSString;

@interface NOZDeflateEncoderContext : NSObject <NOZEncoderContext> {
    /* instance variables */
    struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void * /* function */ zalloc; void * /* function */ zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } _zStream;
    _Bool _zStreamOpen;
    int _compressionLevel;
    id /* block */ _flushCallback;
    char * _compressedDataBuffer;
    unsigned long long _compressedDataBufferSize;
    unsigned long long _compressedDataPosition;
}

@property (nonatomic) _Bool encodedDataWasText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;

@end

#endif /* NOZDeflateEncoderContext_h */

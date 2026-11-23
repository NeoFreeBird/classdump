//
#ifndef NOZEncodingInputStream_h
#define NOZEncodingInputStream_h
@import Foundation;

#include "NOZEncoder-Protocol.h"
#include "NOZEncoderContext-Protocol.h"
#include "NSStreamDelegate-Protocol.h"

@class NSError, NSInputStream, NSMutableData, NSString;

@interface NOZEncodingInputStream : NSInputStream <NSStreamDelegate> {
    /* instance variables */
    NSInputStream *_stream;
    id <NOZEncoder> _encoder;
    id <NOZEncoderContext> _encoderContext;
    float _compressionLevel;
    NSError *_encoderError;
    NSMutableData *_excessData;
    unsigned long long _excessDataRead;
    char * _currentReadBuffer;
    unsigned long long _currentReadBufferLength;
    unsigned long long _currentReadBufferUsed;
    void * /* function */ _copiedCallback;
    struct { long long version; void *info; void * /* function */ retain; void * /* function */ release; void * /* function */ copyDescription; } _copiedContext;
    unsigned long long _requestedEvents;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithInputStream:(id)stream encoder:(id)encoder compressionLevel:(float)level;
- (void)dealloc;
- (void)open;
- (void)close;
- (unsigned long long)streamStatus;
- (id)streamError;
- (long long)read:(char *)read maxLength:(unsigned long long)length;
- (_Bool)getBuffer:(char * *)buffer length:(unsigned long long *)length;
- (_Bool)hasBytesAvailable;
- (void)stream:(id)stream handleEvent:(unsigned long long)event;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)loop forMode:(struct __CFString *)mode;
- (_Bool)_setCFClientFlags:(unsigned long long)flags callback:(void * /* function */)callback context:(struct { long long x0; void *x1; void * /* function */ x2; void * /* function */ x3; void * /* function */ x4; } *)context;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)loop forMode:(struct __CFString *)mode;

@end

#endif /* NOZEncodingInputStream_h */

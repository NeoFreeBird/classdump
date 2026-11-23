//
#ifndef NOZRawEncoder_h
#define NOZRawEncoder_h
@import Foundation;

#include "NOZEncoder-Protocol.h"

@class NSObject, NSString;

@interface NOZRawEncoder : NSObject <NOZEncoder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (unsigned short)bitFlagsForEntry:(id)entry;
- (id)createContextWithBitFlags:(unsigned short)flags compressionLevel:(float)level flushCallback:(id /* block */)callback;
- (_Bool)initializeEncoderContext:(id)context;
- (_Bool)encodeBytes:(const char *)bytes length:(unsigned long long)length context:(id)context;
- (_Bool)finalizeEncoderContext:(id)context;

@end

#endif /* NOZRawEncoder_h */

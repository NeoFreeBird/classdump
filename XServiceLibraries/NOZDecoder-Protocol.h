//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NOZDecoder_Protocol_h
#define NOZDecoder_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol NOZDecoder <NSObject>

@required

/* required instance methods */
- (id)createContextForDecodingWithBitFlags:(unsigned short)flags flushCallback:(id /* block */)callback;
- (_Bool)initializeDecoderContext:(id)context;
- (_Bool)decodeBytes:(const char *)bytes length:(unsigned long long)length context:(id)context;
- (_Bool)finalizeDecoderContext:(id)context;

@optional

@end

#endif /* NOZDecoder_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSCircularFIFOBufferDelegate_Protocol_h
#define TFSCircularFIFOBufferDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSCircularFIFOBufferDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)circularFIFOBuffer:(id)fifobuffer purgedObject:(id)object;

@end

#endif /* TFSCircularFIFOBufferDelegate_Protocol_h */

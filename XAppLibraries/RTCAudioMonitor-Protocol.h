//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef RTCAudioMonitor_Protocol_h
#define RTCAudioMonitor_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol RTCAudioMonitor <NSObject>

@required

/* required instance methods */
- (void)onAudioBuffer:(const void *)buffer frames:(int)frames channels:(int)channels bits:(int)bits;

@optional

@end

#endif /* RTCAudioMonitor_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVWebRTCAudioMonitor_Protocol_h
#define PTVWebRTCAudioMonitor_Protocol_h
@import Foundation;

#include "RTCAudioMonitor-Protocol.h"

@protocol PTVWebRTCAudioMonitor <RTCAudioMonitor>

@required

@property (nonatomic, readonly) int audioLevel;

@optional

@end

#endif /* PTVWebRTCAudioMonitor_Protocol_h */

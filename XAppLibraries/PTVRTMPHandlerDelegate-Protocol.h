//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVRTMPHandlerDelegate_Protocol_h
#define PTVRTMPHandlerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVRTMPHandlerDelegate <NSObject>

@required

/* required instance methods */
- (void)sendData:(id)data isAudio:(_Bool)audio time:(double)time;

@optional

@end

#endif /* PTVRTMPHandlerDelegate_Protocol_h */

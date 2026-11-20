//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVRTMPTypeHandler_Protocol_h
#define PTVRTMPTypeHandler_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVRTMPTypeHandler <NSObject>

@required

/* required instance methods */
- (id)getTrackInfo;
- (void)sendData:(id)data pts:(double)pts decodeAt:(double)at;
- (void)setDelegate:(id)delegate;
- (void)sendHeader;
- (void)onDiscont;

@optional

@end

#endif /* PTVRTMPTypeHandler_Protocol_h */

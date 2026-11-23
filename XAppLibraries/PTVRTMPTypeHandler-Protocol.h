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

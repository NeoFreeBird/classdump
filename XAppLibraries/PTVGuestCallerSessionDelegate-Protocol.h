//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestCallerSessionDelegate_Protocol_h
#define PTVGuestCallerSessionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestCallerSessionDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)guestCallerSession:(id)session willTransitionFromState:(unsigned long long)state toState:(unsigned long long)state;
- (void)guestCallerSession:(id)session didTransitionFromState:(unsigned long long)state toState:(unsigned long long)state;
- (void)guestCallerSession:(id)session didUpdateIsMuted:(_Bool)muted;

@end

#endif /* PTVGuestCallerSessionDelegate_Protocol_h */

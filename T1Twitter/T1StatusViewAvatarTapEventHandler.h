//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusViewAvatarTapEventHandler_h
#define T1StatusViewAvatarTapEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewAvatarTapEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;
- (void)presentUser:(id)user event:(id)event controller:(id)controller scribeContext:(id)context;

@end

#endif /* T1StatusViewAvatarTapEventHandler_h */

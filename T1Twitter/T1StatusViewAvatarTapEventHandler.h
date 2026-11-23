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

//
#ifndef TUIFollowControlDelegate_Protocol_h
#define TUIFollowControlDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TUIFollowControlDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)followControl:(id)control shouldPerformAction:(unsigned long long)action;
- (_Bool)followControl:(id)control shouldPerformAction:(unsigned long long)action;
- (void)followControl:(id)control willPerformAction:(unsigned long long)action event:(id)event;
- (void)followControl:(id)control willPerformAction:(unsigned long long)action event:(id)event;
- (void)followControl:(id)control didPerformAction:(unsigned long long)action success:(_Bool)success error:(id)error;
- (void)followControl:(id)control didPerformAction:(unsigned long long)action success:(_Bool)success error:(id)error;
- (void)followControlNeedsLayout:(id)layout;
- (_Bool)followControlShouldUpdateHomeTimelineOnUnfollow:(id)unfollow;
- (_Bool)followControlShouldUpdateHomeTimelineOnUnfollow:(id)unfollow;

@end

#endif /* TUIFollowControlDelegate_Protocol_h */

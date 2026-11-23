//
#ifndef T1StatusViewInlineActionBrandedAnimationEventHandler_h
#define T1StatusViewInlineActionBrandedAnimationEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewInlineActionBrandedAnimationEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context isBrandedLikeOnTweetContentEnabled:(_Bool)enabled;
- (id)parametersForEvent:(id)event controller:(id)controller scribeContext:(id)context;
- (double)timeSinceLastEvent;

@end

#endif /* T1StatusViewInlineActionBrandedAnimationEventHandler_h */

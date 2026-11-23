//
#ifndef BrazeDelegate_Protocol_h
#define BrazeDelegate_Protocol_h
@import Foundation;

@protocol BrazeDelegate

@required

@optional

/* optional instance methods */
- (_Bool)braze:(id)braze shouldOpenURL:(id)url;
- (void)braze:(id)braze willPresentModalWithContext:(id)context;
- (void)braze:(id)braze noMatchingTriggerForEvent:(long long)event name:(id)name properties:(id)properties;

@end

#endif /* BrazeDelegate_Protocol_h */

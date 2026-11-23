//
#ifndef TUIFollowButtonV2Delegate_Protocol_h
#define TUIFollowButtonV2Delegate_Protocol_h
@import Foundation;

@protocol TUIFollowButtonV2Delegate

@required

@optional

/* optional instance methods */
- (_Bool)followButton:(id)button shouldPerform:(long long)perform;
- (void)followButton:(id)button willPerform:(long long)perform;
- (void)followButton:(id)button didPerform:(long long)perform success:(_Bool)success error:(id)error;

@end

#endif /* TUIFollowButtonV2Delegate_Protocol_h */

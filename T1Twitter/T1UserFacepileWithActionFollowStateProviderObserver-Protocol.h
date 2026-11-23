//
#ifndef T1UserFacepileWithActionFollowStateProviderObserver_Protocol_h
#define T1UserFacepileWithActionFollowStateProviderObserver_Protocol_h
@import Foundation;

@protocol T1UserFacepileWithActionFollowStateProviderObserver

@required

/* required instance methods */
- (void)userStateProvider:(id)provider didFollowUserID:(id)id;
- (void)userStateProvider:(id)provider didUnfollowUserID:(id)id;

@optional

@end

#endif /* T1UserFacepileWithActionFollowStateProviderObserver_Protocol_h */

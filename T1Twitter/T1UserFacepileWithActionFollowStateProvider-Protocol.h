//
#ifndef T1UserFacepileWithActionFollowStateProvider_Protocol_h
#define T1UserFacepileWithActionFollowStateProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1UserFacepileWithActionFollowStateProvider <NSObject>

@required

/* required instance methods */
- (void)addFollowStateObserver:(id)observer;
- (void)startObservingUser:(id)user;
- (void)stopObservingUser:(id)user;
- (_Bool)isFollowingUser:(id)user;
- (void)setIsFollowing:(_Bool)following forUsers:(id)users;

@optional

@end

#endif /* T1UserFacepileWithActionFollowStateProvider_Protocol_h */

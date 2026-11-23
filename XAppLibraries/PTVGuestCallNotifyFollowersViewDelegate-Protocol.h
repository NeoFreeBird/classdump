//
#ifndef PTVGuestCallNotifyFollowersViewDelegate_Protocol_h
#define PTVGuestCallNotifyFollowersViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestCallNotifyFollowersViewDelegate <NSObject>

@required

/* required instance methods */
- (void)notifyFollowersView:(id)view didChangeShouldNotifyFollowers:(_Bool)followers;

@optional

@end

#endif /* PTVGuestCallNotifyFollowersViewDelegate_Protocol_h */

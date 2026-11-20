//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

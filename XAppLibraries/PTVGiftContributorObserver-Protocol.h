//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGiftContributorObserver_Protocol_h
#define PTVGiftContributorObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGiftContributorObserver <NSObject>

@required

/* required instance methods */
- (void)giftContributorWatcher:(id)watcher didUpdateContributorList:(id)list;
- (void)giftContributorWatcher:(id)watcher didGetContribution:(id)contribution fromContributor:(id)contributor;
- (void)giftContributorWatcher:(id)watcher didUpdateStarTotal:(long long)total previousTotal:(long long)total;

@optional

@end

#endif /* PTVGiftContributorObserver_Protocol_h */

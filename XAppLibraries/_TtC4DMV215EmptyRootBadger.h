//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4DMV215EmptyRootBadger_h
#define _TtC4DMV215EmptyRootBadger_h
@import Foundation;

#include "XChatRootBadger-Protocol.h"

@class NSObject;

@interface DMV2.EmptyRootBadger : NSObject <XChatRootBadger> // (Swift)

/* instance methods */
- (void)updateBadgeCount:(long long)count;
- (void)updateGrokBotBadgeCount:(long long)count;
- (id)init;

@end

#endif /* _TtC4DMV215EmptyRootBadger_h */

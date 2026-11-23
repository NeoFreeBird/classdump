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

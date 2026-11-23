//
#ifndef TASCommunitySpaceBadgeDelegate_Protocol_h
#define TASCommunitySpaceBadgeDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TASCommunitySpaceBadgeDelegate <NSObject>

@required

/* required instance methods */
- (void)onCommunitySpaceBadgeTapWithSpaceBadge:(id)badge;

@optional

@end

#endif /* TASCommunitySpaceBadgeDelegate_Protocol_h */

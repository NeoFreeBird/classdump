//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusCommunitiesConversationBarViewDelegate_Protocol_h
#define T1StatusCommunitiesConversationBarViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1StatusCommunitiesConversationBarViewDelegate <NSObject>

@required

/* required instance methods */
- (void)conversationBarView:(id)view didTapInlineActionWithType:(unsigned long long)type;
- (void)conversationBarView:(id)view didTapReplyBarView:(id)view;

@optional

@end

#endif /* T1StatusCommunitiesConversationBarViewDelegate_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ConversationPresenting_Protocol_h
#define T1ConversationPresenting_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ConversationPresenting <NSObject>

@required

/* required instance methods */
- (_Bool)canPresentTweetWithID:(long long)id;
- (_Bool)canPresentTweetWithID:(long long)id;
- (void)presentTweetWithID:(long long)id;
- (void)presentTweetWithID:(long long)id;

@optional

@end

#endif /* T1ConversationPresenting_Protocol_h */

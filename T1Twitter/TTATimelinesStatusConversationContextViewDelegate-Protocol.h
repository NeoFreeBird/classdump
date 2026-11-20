//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTATimelinesStatusConversationContextViewDelegate_Protocol_h
#define TTATimelinesStatusConversationContextViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTATimelinesStatusConversationContextViewDelegate <NSObject>

@required

/* required instance methods */
- (void)conversationContextViewDidTap:(id)tap;

@optional

/* optional instance methods */
- (void)conversationContextViewDidLongPress:(id)press;

@end

#endif /* TTATimelinesStatusConversationContextViewDelegate_Protocol_h */

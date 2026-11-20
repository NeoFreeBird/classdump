//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1DirectMessageConversationFromCardsPresenter_h
#define T1DirectMessageConversationFromCardsPresenter_h
@import Foundation;

#include "T1DirectMessageConversationFromCardsPresenter-Protocol.h"

@class NSObject;

@interface T1DirectMessageConversationFromCardsPresenter : NSObject <T1DirectMessageConversationFromCardsPresenter>

/* instance methods */
- (void)presentConversationForContext:(id)context withRecipient:(id)recipient welcomeMessageId:(id)id;
- (id)private_initialComposerText:(id)text;
- (_Bool)private_validateCardType:(id)type;

@end

#endif /* T1DirectMessageConversationFromCardsPresenter_h */

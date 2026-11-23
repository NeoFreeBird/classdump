//
#ifndef T1DirectMessageConversationFromCardsPresenter_Protocol_h
#define T1DirectMessageConversationFromCardsPresenter_Protocol_h
@import Foundation;

@protocol T1DirectMessageConversationFromCardsPresenter

@required

/* required instance methods */
- (void)presentConversationForContext:(id)context withRecipient:(id)recipient welcomeMessageId:(id)id;
- (void)presentConversationForContext:(id)context withRecipient:(id)recipient welcomeMessageId:(id)id;

@optional

@end

#endif /* T1DirectMessageConversationFromCardsPresenter_Protocol_h */

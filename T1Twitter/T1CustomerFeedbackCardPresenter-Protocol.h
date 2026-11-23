//
#ifndef T1CustomerFeedbackCardPresenter_Protocol_h
#define T1CustomerFeedbackCardPresenter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CustomerFeedbackCardPresenter <NSObject>

@required

/* required instance methods */
- (void)presentTweetComposeForAccount:(id)account businessUser:(id)user dismissCompletion:(id /* block */)completion;
- (void)presentFeedbackCommentComposeForAccount:(id)account businessUser:(id)user feedbackID:(id)id score:(id)score feedbackType:(unsigned long long)type;
- (void)presentWebURL:(id)url fromViewController:(id)controller account:(id)account;

@optional

@end

#endif /* T1CustomerFeedbackCardPresenter_Protocol_h */

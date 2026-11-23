//
#ifndef T1CustomerFeedbackCardPresenter_h
#define T1CustomerFeedbackCardPresenter_h
@import Foundation;

#include "T1CustomerFeedbackCardPresenter-Protocol.h"
#include "TFCCustomerFeedbackCommentViewControllerDelegate-Protocol.h"

@class NSObject, NSString;

@interface T1CustomerFeedbackCardPresenter : NSObject <TFCCustomerFeedbackCommentViewControllerDelegate, T1CustomerFeedbackCardPresenter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)presentTweetComposeForAccount:(id)account businessUser:(id)user dismissCompletion:(id /* block */)completion;
- (void)presentFeedbackCommentComposeForAccount:(id)account businessUser:(id)user feedbackID:(id)id score:(id)score feedbackType:(unsigned long long)type;
- (void)presentWebURL:(id)url fromViewController:(id)controller account:(id)account;
- (void)feedbackCommentViewController:(id)controller didSubmitComments:(id)comments;
- (void)feedbackCommentViewControllerDidCancel:(id)cancel;

@end

#endif /* T1CustomerFeedbackCardPresenter_h */

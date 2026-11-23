//
#ifndef TFCCustomerFeedbackCommentViewControllerDelegate_Protocol_h
#define TFCCustomerFeedbackCommentViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFCCustomerFeedbackCommentViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)feedbackCommentViewController:(id)controller didSubmitComments:(id)comments;
- (void)feedbackCommentViewControllerDidCancel:(id)cancel;

@optional

@end

#endif /* TFCCustomerFeedbackCommentViewControllerDelegate_Protocol_h */

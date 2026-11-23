//
#ifndef TFCCustomerFeedbackRatingViewDelegate_Protocol_h
#define TFCCustomerFeedbackRatingViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFCCustomerFeedbackRatingViewDelegate <NSObject>

@required

/* required instance methods */
- (void)feedbackRatingView:(id)view didUpdateToValue:(unsigned long long)value;

@optional

@end

#endif /* TFCCustomerFeedbackRatingViewDelegate_Protocol_h */

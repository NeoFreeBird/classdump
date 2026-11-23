//
#ifndef TFSTwitterAPIFeedbackDismissResponse_h
#define TFSTwitterAPIFeedbackDismissResponse_h
@import Foundation;

#include "TFSTwitterAPIEndpointResponse.h"

@interface TFSTwitterAPIFeedbackDismissResponse : TFSTwitterAPIEndpointResponse

/* class methods */
+ (_Bool)HTTPStatusCodeShouldYieldRESTError:(long long)resterror;

/* instance methods */
- (void)prepare;

@end

#endif /* TFSTwitterAPIFeedbackDismissResponse_h */

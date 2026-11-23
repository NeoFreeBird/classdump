//
#ifndef TFSTwitterAPIFeedbackSubmitResponse_h
#define TFSTwitterAPIFeedbackSubmitResponse_h
@import Foundation;

#include "TFSTwitterAPIEndpointResponse.h"

@interface TFSTwitterAPIFeedbackSubmitResponse : TFSTwitterAPIEndpointResponse

/* class methods */
+ (_Bool)HTTPStatusCodeShouldYieldRESTError:(long long)resterror;

/* instance methods */
- (void)prepare;

@end

#endif /* TFSTwitterAPIFeedbackSubmitResponse_h */

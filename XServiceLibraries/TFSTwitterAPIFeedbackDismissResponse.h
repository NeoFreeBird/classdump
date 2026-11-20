//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

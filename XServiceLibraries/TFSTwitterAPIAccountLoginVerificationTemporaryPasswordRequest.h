//
#ifndef TFSTwitterAPIAccountLoginVerificationTemporaryPasswordRequest_h
#define TFSTwitterAPIAccountLoginVerificationTemporaryPasswordRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIAccountLoginVerificationTemporaryPasswordRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;
+ (long long)HTTPMethodValue;

/* instance methods */
- (id)initWithContext:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIAccountLoginVerificationTemporaryPasswordRequest_h */

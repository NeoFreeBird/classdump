//
#ifndef TFSTwitterAPIAccountLoginVerificationTOTPKeyRequest_h
#define TFSTwitterAPIAccountLoginVerificationTOTPKeyRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIAccountLoginVerificationTOTPKeyRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;
+ (long long)HTTPMethodValue;

/* instance methods */
- (id)initWithContext:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIAccountLoginVerificationTOTPKeyRequest_h */

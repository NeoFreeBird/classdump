//
#ifndef TFSTwitterAPIAccountLoginVerificationEnrollmentRequest_h
#define TFSTwitterAPIAccountLoginVerificationEnrollmentRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIAccountLoginVerificationEnrollmentRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithPublicKey:(id)key UDID:(id)udid environment:(id)environment token:(id)token context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIAccountLoginVerificationEnrollmentRequest_h */

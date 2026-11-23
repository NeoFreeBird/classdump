//
#ifndef TFSTwitterAPIUsersPhoneNumberAvailableRequest_h
#define TFSTwitterAPIUsersPhoneNumberAvailableRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIUsersPhoneNumberAvailableRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithRawPhoneNumber:(id)number countryCode:(id)code context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIUsersPhoneNumberAvailableRequest_h */

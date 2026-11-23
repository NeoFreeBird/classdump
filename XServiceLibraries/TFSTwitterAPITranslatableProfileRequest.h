//
#ifndef TFSTwitterAPITranslatableProfileRequest_h
#define TFSTwitterAPITranslatableProfileRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPITranslatableProfileRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (unsigned long long)baseURLType;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithProfileUserID:(long long)id destinationLanguage:(id)language translationSource:(id)source context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPITranslatableProfileRequest_h */

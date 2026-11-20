//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIContactsDestroyRequest_h
#define TFSTwitterAPIContactsDestroyRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIContactsDestroyRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)endpointPath;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithContactIdentifiersJSONData:(id)jsondata isLiveSyncRequest:(_Bool)request context:(id)context;

@end

#endif /* TFSTwitterAPIContactsDestroyRequest_h */

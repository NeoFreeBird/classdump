//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIFriendshipsListRequest_h
#define TFSTwitterAPIFriendshipsListRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIFriendshipsListRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithUserIDs:(id)ids context:(id)context responseModelBuilder:(id)builder;
- (id)initWithScreenNames:(id)names context:(id)context responseModelBuilder:(id)builder;
- (id)initWithUserIDs:(id)ids screenNames:(id)names context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIFriendshipsListRequest_h */

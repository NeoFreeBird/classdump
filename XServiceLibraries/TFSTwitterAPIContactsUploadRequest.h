//
#ifndef TFSTwitterAPIContactsUploadRequest_h
#define TFSTwitterAPIContactsUploadRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIContactsUploadRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;
+ (id)configuration;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithVcardsJSONData:(id)jsondata optInToLiveSync:(_Bool)sync isLiveSyncRequest:(_Bool)request isReupload:(_Bool)reupload context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIContactsUploadRequest_h */

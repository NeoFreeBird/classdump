//
#ifndef TFSTwitterAPILiveVideoStreamStatusRequest_h
#define TFSTwitterAPILiveVideoStreamStatusRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPILiveVideoStreamStatusRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (unsigned long long)supportedAuthenticationTypes;
+ (unsigned long long)responseHydrationFlags;
+ (long long)expectedRequestAnatomy;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithMediaID:(id)id clipID:(id)id locationSharingRulesEnforced:(_Bool)enforced latestReplayPlaylist:(_Bool)playlist streamType:(id)type context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPILiveVideoStreamStatusRequest_h */

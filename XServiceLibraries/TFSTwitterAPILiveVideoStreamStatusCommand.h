//
#ifndef TFSTwitterAPILiveVideoStreamStatusCommand_h
#define TFSTwitterAPILiveVideoStreamStatusCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"
#include "TNUServiceHTTPConfiguration.h"

@class NSString;

@interface TFSTwitterAPILiveVideoStreamStatusCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (retain, nonatomic) NSString *mediaID;
@property (nonatomic) _Bool locationSharingRulesEnforced;
@property (nonatomic) _Bool latestReplayPlaylist;
@property (copy, nonatomic) NSString *streamType;
@property (retain, nonatomic) TNUServiceHTTPConfiguration *HTTPRequestConfiguration;
@property (retain, nonatomic) NSString *clipID;

/* instance methods */
- (id)initWithAccountID:(id)id mediaID:(id)id locationSharingRulesEnforced:(_Bool)enforced latestReplayPlaylist:(_Bool)playlist clipID:(id)id streamType:(id)type context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;
- (id)requestConfigurationForAPIRequest:(id)apirequest requestConfiguration:(id)configuration;

@end

#endif /* TFSTwitterAPILiveVideoStreamStatusCommand_h */

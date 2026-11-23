//
#ifndef TFSTwitterAPI_h
#define TFSTwitterAPI_h
@import Foundation;

#include "TFSAPI.h"
#include "TFSTwitterAPIConfiguration-Protocol.h"

@interface TFSTwitterAPI : TFSAPI

@property (readonly, nonatomic) id <TFSTwitterAPIConfiguration> configuration;

/* instance methods */
- (id)initWithAuthenticator:(id)authenticator headerProvider:(id)provider cardsPlatformIdentifier:(id)identifier URLBaseProvider:(id)provider URLCacheProvider:(id /* block */)provider optionalEndpointAllowList:(id)list optionalStatusParametersDictionary:(id)dictionary optionalUserParametersDictionary:(id)dictionary additionalContentDecoders:(id)decoders additionalContentEncoders:(id)encoders;

@end

#endif /* TFSTwitterAPI_h */

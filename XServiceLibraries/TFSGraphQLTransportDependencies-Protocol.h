//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSGraphQLTransportDependencies_Protocol_h
#define TFSGraphQLTransportDependencies_Protocol_h
@import Foundation;

#include "TFSAuthenticating-Protocol.h"

@protocol TFSGraphQLTransportDependencies

@required

@property (nonatomic, readonly) id <TFSAuthenticating> graphQLAuthenticating;

@optional

@end

#endif /* TFSGraphQLTransportDependencies_Protocol_h */

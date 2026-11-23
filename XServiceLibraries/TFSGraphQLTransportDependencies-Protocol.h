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

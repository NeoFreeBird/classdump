//
#ifndef TFSGraphQLTransportDependencies_Protocol_h
#define TFSGraphQLTransportDependencies_Protocol_h
@import Foundation;

@protocol TFSAuthenticating;

@protocol TFSGraphQLTransportDependencies

@required

@property (readonly, nonatomic) id <TFSAuthenticating> graphQLAuthenticating;

@optional

@end

#endif /* TFSGraphQLTransportDependencies_Protocol_h */

//
#ifndef TFSURLProtocolHandler_Protocol_h
#define TFSURLProtocolHandler_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSURLProtocolHandler <NSObject>

@required

/* required instance methods */
- (unsigned long long)protocolRouter:(id)router handleURL:(id)url context:(id)context;
- (unsigned long long)protocolRouter:(id)router handleURL:(id)url context:(id)context;
- (_Bool)protocolRouter:(id)router supportsScheme:(id)scheme;

@optional

/* optional instance methods */
- (unsigned long long)protocolRouter:(id)router handleURL:(id)url context:(id)context routeCompletion:(id /* block */)completion;
- (unsigned long long)protocolRouter:(id)router handleURL:(id)url context:(id)context routeCompletion:(id /* block */)completion;

@end

#endif /* TFSURLProtocolHandler_Protocol_h */

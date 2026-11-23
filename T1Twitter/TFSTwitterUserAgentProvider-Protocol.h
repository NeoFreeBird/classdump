//
#ifndef TFSTwitterUserAgentProvider_Protocol_h
#define TFSTwitterUserAgentProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterUserAgentProvider <NSObject>

@required

/* required instance methods */
- (id)userAgent;
- (id)platform;
- (id)osVersion;
- (id)appName;
- (id)clientVersion;
- (id)webViewUserAgentAppName;
- (id)yearClass;

@optional

@end

#endif /* TFSTwitterUserAgentProvider_Protocol_h */

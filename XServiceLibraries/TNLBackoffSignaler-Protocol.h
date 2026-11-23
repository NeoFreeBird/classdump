//
#ifndef TNLBackoffSignaler_Protocol_h
#define TNLBackoffSignaler_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLBackoffSignaler <NSObject>

@required

/* required instance methods */
- (_Bool)tnl_shouldSignalBackoffForURL:(id)url host:(id)host statusCode:(long long)code responseHeaders:(id)headers;

@optional

@end

#endif /* TNLBackoffSignaler_Protocol_h */

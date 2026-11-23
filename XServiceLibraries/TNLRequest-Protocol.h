//
#ifndef TNLRequest_Protocol_h
#define TNLRequest_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLRequest <NSObject>

@required

/* required instance methods */
- (id)URL;

@optional

/* optional instance methods */
- (_Bool)isEqualToRequest:(id)request;
- (id)HTTPMethod;
- (long long)HTTPMethodValue;
- (id)allHTTPHeaderFields;
- (id)HTTPBody;
- (id)HTTPBodyFilePath;
- (id)HTTPBodyStream;

@end

#endif /* TNLRequest_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLRequest_Protocol_h
#define TNLRequest_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLRequest <NSObject>

@required

/* required instance methods */
- (id)URL;
- (id)URL;

@optional

/* optional instance methods */
- (_Bool)isEqualToRequest:(id)request;
- (_Bool)isEqualToRequest:(id)request;
- (id)HTTPMethod;
- (id)HTTPMethod;
- (long long)HTTPMethodValue;
- (long long)HTTPMethodValue;
- (id)allHTTPHeaderFields;
- (id)HTTPBody;
- (id)HTTPBody;
- (id)HTTPBodyFilePath;
- (id)HTTPBodyFilePath;
- (id)HTTPBodyStream;
- (id)HTTPBodyStream;

@end

#endif /* TNLRequest_Protocol_h */

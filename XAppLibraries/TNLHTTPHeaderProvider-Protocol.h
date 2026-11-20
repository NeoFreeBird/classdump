//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLHTTPHeaderProvider_Protocol_h
#define TNLHTTPHeaderProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLHTTPHeaderProvider <NSObject>

@required

@optional

/* optional instance methods */
- (id)tnl_allDefaultHTTPHeaderFieldsForRequest:(id)request URLRequest:(id)urlrequest;
- (id)tnl_allOverrideHTTPHeaderFieldsForRequest:(id)request URLRequest:(id)urlrequest;

@end

#endif /* TNLHTTPHeaderProvider_Protocol_h */

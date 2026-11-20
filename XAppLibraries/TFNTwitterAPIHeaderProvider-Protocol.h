//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterAPIHeaderProvider_Protocol_h
#define TFNTwitterAPIHeaderProvider_Protocol_h
@import Foundation;

#include "TNLHTTPHeaderProvider-Protocol.h"

@protocol TFNTwitterAPIHeaderProvider <TNLHTTPHeaderProvider>

@required

/* required instance methods */
- (id)userAgentProvider;
- (id)tnl_allDefaultHTTPHeaderFieldsForRequest:(id)request URLRequest:(id)urlrequest;

@optional

@end

#endif /* TFNTwitterAPIHeaderProvider_Protocol_h */

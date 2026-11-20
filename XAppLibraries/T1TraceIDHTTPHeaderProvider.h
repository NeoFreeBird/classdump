//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TraceIDHTTPHeaderProvider_h
#define T1TraceIDHTTPHeaderProvider_h
@import Foundation;

#include "TNLHTTPHeaderProvider-Protocol.h"

@class NSObject, NSString;

@interface T1TraceIDHTTPHeaderProvider : NSObject <TNLHTTPHeaderProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)tnl_allDefaultHTTPHeaderFieldsForRequest:(id)request URLRequest:(id)urlrequest;

@end

#endif /* T1TraceIDHTTPHeaderProvider_h */

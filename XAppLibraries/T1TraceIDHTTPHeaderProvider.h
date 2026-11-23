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

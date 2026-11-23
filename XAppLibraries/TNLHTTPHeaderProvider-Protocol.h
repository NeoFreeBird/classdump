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

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

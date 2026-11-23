//
#ifndef TNLRequestHydrater_Protocol_h
#define TNLRequestHydrater_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLRequestHydrater <NSObject>

@required

@optional

/* optional instance methods */
- (void)tnl_requestOperation:(id)operation hydrateRequest:(id)request completion:(id /* block */)completion;

@end

#endif /* TNLRequestHydrater_Protocol_h */

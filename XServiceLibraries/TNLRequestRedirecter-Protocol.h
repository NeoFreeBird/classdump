//
#ifndef TNLRequestRedirecter_Protocol_h
#define TNLRequestRedirecter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLRequestRedirecter <NSObject>

@required

@optional

/* optional instance methods */
- (void)tnl_requestOperation:(id)operation willRedirectFromRequest:(id)request withResponse:(id)response toRequest:(id)request completion:(id /* block */)completion;

@end

#endif /* TNLRequestRedirecter_Protocol_h */

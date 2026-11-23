//
#ifndef TNLRequestAuthorizer_Protocol_h
#define TNLRequestAuthorizer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLRequestAuthorizer <NSObject>

@required

@optional

/* optional instance methods */
- (void)tnl_requestOperation:(id)operation authorizeURLRequest:(id)urlrequest completion:(id /* block */)completion;

@end

#endif /* TNLRequestAuthorizer_Protocol_h */

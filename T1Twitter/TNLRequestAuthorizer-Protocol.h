//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

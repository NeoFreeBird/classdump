//
#ifndef TNLHostSanitizer_Protocol_h
#define TNLHostSanitizer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLHostSanitizer <NSObject>

@required

/* required instance methods */
- (void)tnl_host:(id)tnl_host wasEncounteredForURLRequest:(id)urlrequest asRedirect:(_Bool)redirect completion:(id /* block */)completion;

@optional

@end

#endif /* TNLHostSanitizer_Protocol_h */

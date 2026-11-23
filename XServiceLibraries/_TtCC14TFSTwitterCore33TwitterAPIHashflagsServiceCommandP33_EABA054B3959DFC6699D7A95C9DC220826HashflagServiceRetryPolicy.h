//
#ifndef _TtCC14TFSTwitterCore33TwitterAPIHashflagsServiceCommandP33_EABA054B3959DFC6699D7A95C9DC220826HashflagServiceRetryPolicy_h
#define _TtCC14TFSTwitterCore33TwitterAPIHashflagsServiceCommandP33_EABA054B3959DFC6699D7A95C9DC220826HashflagServiceRetryPolicy_h
@import Foundation;

#include "TNLRequestRetryPolicyProvider-Protocol.h"

@class NSObject;

@interface TFSTwitterCore.TwitterAPIHashflagsServiceCommand.(HashflagServiceRetryPolicy in _EABA054B3959DFC6699D7A95C9DC2208) : NSObject <TNLRequestRetryPolicyProvider> // (Swift)

/* instance methods */
- (_Bool)tnl_shouldRetryRequestOperation:(id)operation withResponse:(id)response;
- (double)tnl_delayBeforeRetryForRequestOperation:(id)operation withResponse:(id)response;
- (id)init;

@end

#endif /* _TtCC14TFSTwitterCore33TwitterAPIHashflagsServiceCommandP33_EABA054B3959DFC6699D7A95C9DC220826HashflagServiceRetryPolicy_h */

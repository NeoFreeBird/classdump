//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

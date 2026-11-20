//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TBCPeriscopeLifecycleAPIStopWatchingRequest_h
#define TBCPeriscopeLifecycleAPIStopWatchingRequest_h
@import Foundation;

#include "TBCPeriscopeLifecycleAPIRequest.h"

@interface TBCPeriscopeLifecycleAPIStopWatchingRequest : TBCPeriscopeLifecycleAPIRequest

/* instance methods */
- (id)initWithPeriscopeCookie:(id)cookie isDirectAccount:(_Bool)account session:(id)session component:(id)component section:(id)section completion:(id /* block */)completion;

@end

#endif /* TBCPeriscopeLifecycleAPIStopWatchingRequest_h */

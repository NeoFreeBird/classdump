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

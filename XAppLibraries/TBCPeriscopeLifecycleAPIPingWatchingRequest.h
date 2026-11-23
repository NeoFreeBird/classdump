//
#ifndef TBCPeriscopeLifecycleAPIPingWatchingRequest_h
#define TBCPeriscopeLifecycleAPIPingWatchingRequest_h
@import Foundation;

#include "TBCPeriscopeLifecycleAPIRequest.h"

@interface TBCPeriscopeLifecycleAPIPingWatchingRequest : TBCPeriscopeLifecycleAPIRequest

/* instance methods */
- (id)initWithPeriscopeCookie:(id)cookie isDirectAccount:(_Bool)account session:(id)session completion:(id /* block */)completion;

@end

#endif /* TBCPeriscopeLifecycleAPIPingWatchingRequest_h */

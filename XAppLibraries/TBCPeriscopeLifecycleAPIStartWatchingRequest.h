//
#ifndef TBCPeriscopeLifecycleAPIStartWatchingRequest_h
#define TBCPeriscopeLifecycleAPIStartWatchingRequest_h
@import Foundation;

#include "TBCPeriscopeLifecycleAPIRequest.h"

@interface TBCPeriscopeLifecycleAPIStartWatchingRequest : TBCPeriscopeLifecycleAPIRequest

/* class methods */
+ (Class)resultClass;

/* instance methods */
- (id)initWithPeriscopeCookie:(id)cookie isDirectAccount:(_Bool)account lifecycleToken:(id)token component:(id)component section:(id)section timeCode:(double)code completion:(id /* block */)completion;

@end

#endif /* TBCPeriscopeLifecycleAPIStartWatchingRequest_h */

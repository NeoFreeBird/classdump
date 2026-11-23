//
#ifndef TBCPeriscopeLifecycleAPIAccessVideoRequest_h
#define TBCPeriscopeLifecycleAPIAccessVideoRequest_h
@import Foundation;

#include "TBCPeriscopeLifecycleAPIRequest.h"

@interface TBCPeriscopeLifecycleAPIAccessVideoRequest : TBCPeriscopeLifecycleAPIRequest

/* class methods */
+ (Class)resultClass;

/* instance methods */
- (id)initWithPeriscopeCookie:(id)cookie isDirectAccount:(_Bool)account broadcastID:(id)id completion:(id /* block */)completion;

@end

#endif /* TBCPeriscopeLifecycleAPIAccessVideoRequest_h */

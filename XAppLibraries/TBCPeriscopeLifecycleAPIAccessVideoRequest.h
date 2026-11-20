//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

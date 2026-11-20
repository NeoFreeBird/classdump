//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TBCPeriscopeLifecycleAPI_Protocol_h
#define TBCPeriscopeLifecycleAPI_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TBCPeriscopeLifecycleAPI <NSObject>

@required

/* required instance methods */
- (void)performRequest:(id)request;

@optional

@end

#endif /* TBCPeriscopeLifecycleAPI_Protocol_h */

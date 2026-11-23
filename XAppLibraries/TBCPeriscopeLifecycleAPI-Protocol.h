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

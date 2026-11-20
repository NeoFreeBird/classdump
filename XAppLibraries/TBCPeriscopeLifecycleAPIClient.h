//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TBCPeriscopeLifecycleAPIClient_h
#define TBCPeriscopeLifecycleAPIClient_h
@import Foundation;

#include "TBCPeriscopeLifecycleAPI-Protocol.h"
#include "TNLRequestDelegate-Protocol.h"

@class NSObject, NSString;

@interface TBCPeriscopeLifecycleAPIClient : NSObject <TNLRequestDelegate, TBCPeriscopeLifecycleAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)performRequest:(id)request;
- (void)tnl_requestOperation:(id)operation didCompleteWithResponse:(id)response;

@end

#endif /* TBCPeriscopeLifecycleAPIClient_h */

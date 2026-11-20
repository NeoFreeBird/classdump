//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TBCPeriscopeJWTFetcher_Protocol_h
#define TBCPeriscopeJWTFetcher_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TBCPeriscopeJWTFetcher <NSObject>

@required

/* required instance methods */
- (void)fetchPeriscopeJWTForTwitterAccount:(id)account completion:(id /* block */)completion;

@optional

@end

#endif /* TBCPeriscopeJWTFetcher_Protocol_h */

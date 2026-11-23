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

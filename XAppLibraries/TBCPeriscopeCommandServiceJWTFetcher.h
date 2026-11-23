//
#ifndef TBCPeriscopeCommandServiceJWTFetcher_h
#define TBCPeriscopeCommandServiceJWTFetcher_h
@import Foundation;

#include "TBCPeriscopeJWTFetcher-Protocol.h"

@class NSObject, NSString;

@interface TBCPeriscopeCommandServiceJWTFetcher : NSObject <TBCPeriscopeJWTFetcher>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)fetchPeriscopeJWTForTwitterAccount:(id)account completion:(id /* block */)completion;

@end

#endif /* TBCPeriscopeCommandServiceJWTFetcher_h */

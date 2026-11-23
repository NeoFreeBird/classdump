//
#ifndef SKProductsRequestDelegate_Protocol_h
#define SKProductsRequestDelegate_Protocol_h
@import Foundation;

#include "SKRequestDelegate-Protocol.h"

@protocol SKProductsRequestDelegate <SKRequestDelegate>

@required

/* required instance methods */
- (void)productsRequest:(id)request didReceiveResponse:(id)response;

@optional

@end

#endif /* SKProductsRequestDelegate_Protocol_h */

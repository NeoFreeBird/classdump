//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

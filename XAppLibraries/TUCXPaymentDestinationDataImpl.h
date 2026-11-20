//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCXPaymentDestinationDataImpl_h
#define TUCXPaymentDestinationDataImpl_h
@import Foundation;

#include "TUCXPaymentDestinationData-Protocol.h"

@class NSObject, NSString;

@interface TUCXPaymentDestinationDataImpl : NSObject <TUCXPaymentDestinationData> // (Swift)

@property (nonatomic, readonly) NSString *variantID;

/* instance methods */
- (id)initWithVariantID:(id)id;
- (id)init;

@end

#endif /* TUCXPaymentDestinationDataImpl_h */

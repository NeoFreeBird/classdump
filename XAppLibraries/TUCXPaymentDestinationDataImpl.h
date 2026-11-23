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

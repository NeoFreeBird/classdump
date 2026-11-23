//
#ifndef TFNTwitterCompositionBeginNetworkTransactionMetricsOperation_h
#define TFNTwitterCompositionBeginNetworkTransactionMetricsOperation_h
@import Foundation;

#include "TFNTwitterCompositionUploadContext.h"

@class TFSDependentConcurrentOperation;

@interface TFNTwitterCompositionBeginNetworkTransactionMetricsOperation : TFSDependentConcurrentOperation

@property (readonly, nonatomic) TFNTwitterCompositionUploadContext *context;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context;
- (void)run;
- (void)_tfn_main_run;

@end

#endif /* TFNTwitterCompositionBeginNetworkTransactionMetricsOperation_h */

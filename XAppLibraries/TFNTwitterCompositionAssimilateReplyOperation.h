//
#ifndef TFNTwitterCompositionAssimilateReplyOperation_h
#define TFNTwitterCompositionAssimilateReplyOperation_h
@import Foundation;

#include "TFNTwitterCompositionUploadContext.h"

@class TFSDependentConcurrentOperation, TFSTwitterStatusCompositionPendingState;

@interface TFNTwitterCompositionAssimilateReplyOperation : TFSDependentConcurrentOperation

@property (readonly, nonatomic) TFNTwitterCompositionUploadContext *context;
@property (readonly, nonatomic) TFSTwitterStatusCompositionPendingState *pendingState;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context pendingState:(id)state;
- (void)run;

@end

#endif /* TFNTwitterCompositionAssimilateReplyOperation_h */

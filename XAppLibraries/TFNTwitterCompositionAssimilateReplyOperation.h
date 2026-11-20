//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

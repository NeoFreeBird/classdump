//
#ifndef TFNTwitterCompositionAssimilateReplyCompleteOperation_h
#define TFNTwitterCompositionAssimilateReplyCompleteOperation_h
@import Foundation;

#include "TFNTwitterCompositionUpdateStatusStateDependency-Protocol.h"
#include "TFNTwitterCompositionUploadContext.h"

@class NSError, NSString, TFSDependentConcurrentOperation, TFSTwitterStatusCompositionPendingState;

@interface TFNTwitterCompositionAssimilateReplyCompleteOperation : TFSDependentConcurrentOperation <TFNTwitterCompositionUpdateStatusStateDependency>

@property (readonly, nonatomic) TFNTwitterCompositionUploadContext *context;
@property (readonly, nonatomic) TFSTwitterStatusCompositionPendingState *pendingState;
@property unsigned long long updateStatusState;
@property (retain) NSError *updateStatusError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context pendingState:(id)state;
- (void)run;

@end

#endif /* TFNTwitterCompositionAssimilateReplyCompleteOperation_h */

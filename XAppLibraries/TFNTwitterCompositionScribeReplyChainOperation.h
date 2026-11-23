//
#ifndef TFNTwitterCompositionScribeReplyChainOperation_h
#define TFNTwitterCompositionScribeReplyChainOperation_h
@import Foundation;

#include "TFNTwitterComposition.h"
#include "TFNTwitterCompositionUpdateStatusStateDependency-Protocol.h"
#include "TFNTwitterCompositionUploadContext.h"

@class NSError, NSString, TFSDependentConcurrentOperation;

@interface TFNTwitterCompositionScribeReplyChainOperation : TFSDependentConcurrentOperation <TFNTwitterCompositionUpdateStatusStateDependency>

@property (readonly, nonatomic) TFNTwitterComposition *composition;
@property (readonly, nonatomic) TFNTwitterCompositionUploadContext *context;
@property unsigned long long updateStatusState;
@property (retain) NSError *updateStatusError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithComposition:(id)composition context:(id)context;
- (void)run;
- (void)_tfn_main_run;
- (void)_tfn_main_scribeAction:(id)action element:(id)element parameters:(id)parameters;
- (void)_tfn_main_scribeThreadInfoCompleted;
- (void)_tfn_main_scribeThreadInfoFailed;

@end

#endif /* TFNTwitterCompositionScribeReplyChainOperation_h */

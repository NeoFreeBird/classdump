//
#ifndef TFNTwitterCompositionCreateNudgeOperation_h
#define TFNTwitterCompositionCreateNudgeOperation_h
@import Foundation;

#include "TFNTwitterComposition.h"
#include "TFNTwitterCompositionUploadContext.h"
#include "TFNTwitterNudgeExperimentModel.h"
#include "TFSOperationDependencyResult-Protocol.h"

@class NSError, NSString, TASActionExecution, TFSDependentConcurrentOperation;

@interface TFNTwitterCompositionCreateNudgeOperation : TFSDependentConcurrentOperation <TFSOperationDependencyResult> {
    /* instance variables */
    NSError *_error;
}

@property (retain) TASActionExecution *actionExecution;
@property (readonly, nonatomic) TFNTwitterComposition *composition;
@property (readonly, nonatomic) TFNTwitterCompositionUploadContext *context;
@property (readonly, nonatomic) TFNTwitterNudgeExperimentModel *nudgeExperimentModel;
@property unsigned long long resultState;
@property (retain) NSError *resultError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithComposition:(id)composition context:(id)context nudgeExperimentModel:(id)model;
- (unsigned long long)nudgeFlags;
- (void)run;
- (void)_tfn_main_run;
- (void)cancel;
- (void)_tfn_main_getNudgeCommandDidCompleteWithNudge:(id)nudge error:(id)error;

@end

#endif /* TFNTwitterCompositionCreateNudgeOperation_h */

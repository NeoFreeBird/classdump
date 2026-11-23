//
#ifndef TFNTwitterCompositionUpdateTweetVoiceInfoOperation_h
#define TFNTwitterCompositionUpdateTweetVoiceInfoOperation_h
@import Foundation;

#include "TAPTwitterCompositionTweetPerspective-Protocol.h"
#include "TFNTwitterCompositionUpdateStatusDependency-Protocol.h"
#include "TFNTwitterCompositionUploadContext.h"
#include "TFSOperationDependencyResult-Protocol.h"
#include "TTMAssetVoiceRecording.h"

@class NSError, NSString, TASActionExecution, TFSDependentConcurrentOperation;

@interface TFNTwitterCompositionUpdateTweetVoiceInfoOperation : TFSDependentConcurrentOperation <TFNTwitterCompositionUpdateStatusDependency, TFSOperationDependencyResult> {
    /* instance variables */
    NSError *_error;
}

@property (retain) TASActionExecution *actionExecution;
@property (readonly, nonatomic) TTMAssetVoiceRecording *mediaAsset;
@property (readonly, nonatomic) NSString *audioSpaceID;
@property (readonly, nonatomic) TFNTwitterCompositionUploadContext *context;
@property unsigned long long resultState;
@property (retain) NSError *resultError;
@property (retain) id <TAPTwitterCompositionTweetPerspective> status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithMediaAsset:(id)asset audioSpaceID:(id)id context:(id)context;
- (void)run;
- (void)_tfn_main_run;
- (void)cancel;
- (void)_tfn_main_updateTweetVoiceInfoCommandDidCompleteWithError:(id)error;

@end

#endif /* TFNTwitterCompositionUpdateTweetVoiceInfoOperation_h */

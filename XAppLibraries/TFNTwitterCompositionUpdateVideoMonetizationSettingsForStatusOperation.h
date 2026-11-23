//
#ifndef TFNTwitterCompositionUpdateVideoMonetizationSettingsForStatusOperation_h
#define TFNTwitterCompositionUpdateVideoMonetizationSettingsForStatusOperation_h
@import Foundation;

#include "TAPTwitterCompositionTweetPerspective-Protocol.h"
#include "TFNTwitterCompositionUpdateStatusDependency-Protocol.h"
#include "TFNTwitterCompositionUploadContext.h"
#include "TFSOperationDependencyResult-Protocol.h"

@class NSError, NSString, TFSDependentConcurrentOperation, TFSTwitterVideoMonetizationSettings;
@protocol TFSTwitterAPICommandCancellable;

@interface TFNTwitterCompositionUpdateVideoMonetizationSettingsForStatusOperation : TFSDependentConcurrentOperation <TFNTwitterCompositionUpdateStatusDependency, TFSOperationDependencyResult> {
    /* instance variables */
    NSError *_error;
}

@property (readonly, nonatomic) TFSTwitterVideoMonetizationSettings *videoMonetizationSettings;
@property (readonly, nonatomic) TFNTwitterCompositionUploadContext *context;
@property (retain) id <TFSTwitterAPICommandCancellable> commandOperation;
@property unsigned long long resultState;
@property (retain) NSError *resultError;
@property (retain) id <TAPTwitterCompositionTweetPerspective> status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithVideoMonetizationSettings:(id)settings context:(id)context;
- (void)run;
- (void)cancel;
- (void)_tfn_main_run;
- (void)_tfn_main_amplifyMarketplaceVideoPostCommandDidUpdateVideoMonetizaionSettingsSuccessfully:(_Bool)successfully error:(id)error;

@end

#endif /* TFNTwitterCompositionUpdateVideoMonetizationSettingsForStatusOperation_h */

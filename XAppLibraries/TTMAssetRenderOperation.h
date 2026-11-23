//
#ifndef TTMAssetRenderOperation_h
#define TTMAssetRenderOperation_h
@import Foundation;

#include "TFSOperationDependencyResult-Protocol.h"
#include "TTMAsset.h"
#include "TTMAssetPackedSegmentedUploadContext.h"
#include "TTMAssetRenderOperationDelegate-Protocol.h"
#include "TTMAssetRenderingOptions.h"
#include "TTMAssetRenderingResult.h"

@class NSError, NSString, TFSDependentConcurrentOperation;

@interface TTMAssetRenderOperation : TFSDependentConcurrentOperation <TFSOperationDependencyResult>

@property (readonly, nonatomic) TTMAssetPackedSegmentedUploadContext *context;
@property (readonly, nonatomic) TTMAsset *asset;
@property (readonly, nonatomic) TTMAssetRenderingOptions *options;
@property unsigned long long resultState;
@property (retain) NSError *resultError;
@property (retain) TTMAssetRenderingResult *resultRenderingResult;
@property (weak, nonatomic) id <TTMAssetRenderOperationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context renderingOptions:(id)options;
- (void)dealloc;
- (void)run;
- (void)cancel;
- (void)_ttm_main_run;

@end

#endif /* TTMAssetRenderOperation_h */

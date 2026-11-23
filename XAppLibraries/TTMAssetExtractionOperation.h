//
#ifndef TTMAssetExtractionOperation_h
#define TTMAssetExtractionOperation_h
@import Foundation;

#include "TFSOperationDependencyResult-Protocol.h"
#include "TTMAsset.h"

@class NSData, NSError, NSString, TFSDependentConcurrentOperation;

@interface TTMAssetExtractionOperation : TFSDependentConcurrentOperation <TFSOperationDependencyResult>

@property (readonly, nonatomic) TTMAsset *asset;
@property (copy) NSString *resultAssetPath;
@property (copy) NSData *resultAssetData;
@property (retain) NSError *resultError;
@property unsigned long long resultState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithAsset:(id)asset;
- (void)run;
- (void)_ttm_main_run;

@end

#endif /* TTMAssetExtractionOperation_h */

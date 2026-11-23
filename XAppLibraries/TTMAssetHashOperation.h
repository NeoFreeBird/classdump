//
#ifndef TTMAssetHashOperation_h
#define TTMAssetHashOperation_h
@import Foundation;

#include "TFSOperationDependencyResult-Protocol.h"

@class NSData, NSError, NSString, TFSDependentConcurrentOperation;

@interface TTMAssetHashOperation : TFSDependentConcurrentOperation <TFSOperationDependencyResult>

@property (nonatomic) unsigned long long sourceType;
@property (copy) NSString *resultHashString;
@property (retain) NSError *resultError;
@property unsigned long long resultState;
@property (retain) NSString *assetPath;
@property (retain) NSData *assetData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithSourceType:(unsigned long long)type;
- (void)run;
- (void)_ttm_main_run;
- (void)_ttm_main_hashWithCompletion:(id /* block */)completion;
- (id)_ttm_background_md5ForFileWithPath:(id)path;

@end

#endif /* TTMAssetHashOperation_h */

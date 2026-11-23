//
#ifndef TTMAssetCreateMetadataOperation_h
#define TTMAssetCreateMetadataOperation_h
@import Foundation;

#include "TFSOperationDependencyResult-Protocol.h"
#include "TTMAssetPackedSegmentedUploadContext.h"

@class NSDictionary, NSError, NSString, TFSDependentConcurrentOperation;
@protocol TFSTwitterAPICommandCancellable;

@interface TTMAssetCreateMetadataOperation : TFSDependentConcurrentOperation <TFSOperationDependencyResult> {
    /* instance variables */
    TTMAssetPackedSegmentedUploadContext *_context;
}

@property (readonly, nonatomic) NSString *accountID;
@property (retain) id <TFSTwitterAPICommandCancellable> commandOperation;
@property unsigned long long resultState;
@property (retain) NSError *resultError;
@property (copy) NSString *mediaID;
@property (copy) NSDictionary *mediaMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithContext:(id)context accountID:(id)id;
- (void)run;
- (void)_ttm_main_mediaMetadataCreateCommandDidCreateMetadataWithError:(id)error;
- (void)cancel;

@end

#endif /* TTMAssetCreateMetadataOperation_h */

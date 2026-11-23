//
#ifndef TTMAssetPackedSegmentedUploadAppendCommandOperationDelegate_Protocol_h
#define TTMAssetPackedSegmentedUploadAppendCommandOperationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMAssetPackedSegmentedUploadAppendCommandOperationDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)packedSegmentedUploadAppendCommandOperationDelegateQueue:(id)queue;
- (void)packedSegmentedUploadAppendCommandOperation:(id)operation didProgressSegmentedData:(float)data;
- (void)packedSegmentedUploadAppendCommandOperationDidSendSegmentedData:(id)data;
- (void)packedSegmentedUploadAppendCommandOperation:(id)operation didAppendSegmentedDataWithError:(id)error;

@end

#endif /* TTMAssetPackedSegmentedUploadAppendCommandOperationDelegate_Protocol_h */

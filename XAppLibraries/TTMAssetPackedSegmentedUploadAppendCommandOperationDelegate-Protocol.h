//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

//
#ifndef TTMAssetPackedSegmentedUploadParallelAppendOperationDelegate_Protocol_h
#define TTMAssetPackedSegmentedUploadParallelAppendOperationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMAssetPackedSegmentedUploadParallelAppendOperationDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)packedSegmentedUploadParallelAppendOperation:(id)operation mediaID:(id)id didProgress:(float)progress;

@end

#endif /* TTMAssetPackedSegmentedUploadParallelAppendOperationDelegate_Protocol_h */

//
#ifndef TTMAssetPackedSegmentedUploadAppendOperationDelegate_Protocol_h
#define TTMAssetPackedSegmentedUploadAppendOperationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMAssetPackedSegmentedUploadAppendOperationDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)packedSegmentedUploadAppendOperation:(id)operation mediaID:(id)id didProgress:(float)progress;

@end

#endif /* TTMAssetPackedSegmentedUploadAppendOperationDelegate_Protocol_h */

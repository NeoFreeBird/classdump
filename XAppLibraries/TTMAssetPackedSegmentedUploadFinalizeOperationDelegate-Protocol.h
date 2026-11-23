//
#ifndef TTMAssetPackedSegmentedUploadFinalizeOperationDelegate_Protocol_h
#define TTMAssetPackedSegmentedUploadFinalizeOperationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMAssetPackedSegmentedUploadFinalizeOperationDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)packedSegmentedUploadFinalizeOperation:(id)operation mediaID:(id)id didFinalizeWithExpiryDate:(id)date;

@end

#endif /* TTMAssetPackedSegmentedUploadFinalizeOperationDelegate_Protocol_h */

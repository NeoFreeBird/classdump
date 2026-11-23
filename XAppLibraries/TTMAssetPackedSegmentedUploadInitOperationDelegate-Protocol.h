//
#ifndef TTMAssetPackedSegmentedUploadInitOperationDelegate_Protocol_h
#define TTMAssetPackedSegmentedUploadInitOperationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMAssetPackedSegmentedUploadInitOperationDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)packedSegmentedUploadInitOperation:(id)operation didInitMediaID:(id)id expiryDate:(id)date;

@end

#endif /* TTMAssetPackedSegmentedUploadInitOperationDelegate_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

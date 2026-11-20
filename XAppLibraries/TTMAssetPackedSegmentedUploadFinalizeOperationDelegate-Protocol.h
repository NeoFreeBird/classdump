//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

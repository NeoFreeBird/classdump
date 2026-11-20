//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetPackedSegmentedUploadStatusCommandOperationDelegate_Protocol_h
#define TTMAssetPackedSegmentedUploadStatusCommandOperationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTMAssetPackedSegmentedUploadStatusCommandOperationDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)packedSegmentedUploadStatusCommandOperation:(id)operation didCompleteWithMediaInformation:(id)information error:(id)error;

@end

#endif /* TTMAssetPackedSegmentedUploadStatusCommandOperationDelegate_Protocol_h */

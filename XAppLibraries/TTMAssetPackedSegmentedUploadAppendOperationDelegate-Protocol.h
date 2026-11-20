//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

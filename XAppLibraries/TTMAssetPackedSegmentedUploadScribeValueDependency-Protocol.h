//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetPackedSegmentedUploadScribeValueDependency_Protocol_h
#define TTMAssetPackedSegmentedUploadScribeValueDependency_Protocol_h
@import Foundation;

#include "TTMAssetPackedSegmentedUploadScribeValue.h"

@protocol TTMAssetPackedSegmentedUploadScribeValueDependency

@required

@property (copy) TTMAssetPackedSegmentedUploadScribeValue *scribeValue;

@optional

@end

#endif /* TTMAssetPackedSegmentedUploadScribeValueDependency_Protocol_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetPackedSegmentedUploadScribeValueDependencyRequirement_h
#define TTMAssetPackedSegmentedUploadScribeValueDependencyRequirement_h
@import Foundation;

#include "TTMAssetPackedSegmentedUploadScribeValue.h"

@class TFSOperationDependencyRequirement;

@interface TTMAssetPackedSegmentedUploadScribeValueDependencyRequirement : TFSOperationDependencyRequirement

@property (readonly, nonatomic) TTMAssetPackedSegmentedUploadScribeValue *scribeValue;
@property (copy, nonatomic) id /* block */ updateBlock;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)shouldRunDependentOperation:(id)operation withDependency:(id)dependency;

@end

#endif /* TTMAssetPackedSegmentedUploadScribeValueDependencyRequirement_h */

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

//
#ifndef T1ImageCategoryVariantSelectionBehaviorProvider_h
#define T1ImageCategoryVariantSelectionBehaviorProvider_h
@import Foundation;

#include "TFSTwitterImageCategoryVariantSelectionBehaviorProvider-Protocol.h"

@class NSObject;

@interface T1ImageCategoryVariantSelectionBehaviorProvider : NSObject <TFSTwitterImageCategoryVariantSelectionBehaviorProvider>

@property (nonatomic) double variantSelectionBehaviorScaleLimit;
@property (readonly) struct { long long x0; double x1; long long x2; long long x3; long long x4; } variantSelectionBehavior;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;

@end

#endif /* T1ImageCategoryVariantSelectionBehaviorProvider_h */

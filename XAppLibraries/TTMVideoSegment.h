//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMVideoSegment_h
#define TTMVideoSegment_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class AVURLAsset, NSObject;

@interface TTMVideoSegment : NSObject <NSCopying>

@property (readonly, nonatomic) AVURLAsset *asset;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;

/* instance methods */
- (id)init;
- (id)initWithAsset:(id)asset;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TTMVideoSegment_h */

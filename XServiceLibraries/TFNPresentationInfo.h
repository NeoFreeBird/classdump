//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNPresentationInfo_h
#define TFNPresentationInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, UIViewController;

@interface TFNPresentationInfo : NSObject <NSCopying>

@property (nonatomic) long long presentationType;
@property (nonatomic) _Bool success;
@property (readonly, nonatomic) UIViewController *fromViewController;
@property (readonly, nonatomic) _Bool animated;

/* instance methods */
- (id)initWithFromViewController:(id)controller animated:(_Bool)animated;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isAnimated;

@end

#endif /* TFNPresentationInfo_h */

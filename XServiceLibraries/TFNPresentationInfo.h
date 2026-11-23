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

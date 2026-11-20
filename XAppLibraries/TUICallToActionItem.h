//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUICallToActionItem_h
#define TUICallToActionItem_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString, UIImage;

@interface TUICallToActionItem : NSObject <NSCopying>

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSString *callToActionText;
@property (copy, nonatomic) NSString *secondaryCallToActionText;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } activeRange;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ secondaryActionBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ activeRangeBlock;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TUICallToActionItem_h */

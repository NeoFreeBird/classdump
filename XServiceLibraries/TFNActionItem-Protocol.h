//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNActionItem_Protocol_h
#define TFNActionItem_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol TFNActionItem <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) id /* block */ action;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, nonatomic) _Bool cancelItem;
@property (readonly, nonatomic) _Bool destructive;
@property (readonly, nonatomic) _Bool disabled;
@property (nonatomic) double overrideMinimumHeight;
@property (nonatomic) _Bool limitToOneLine;
@property (copy, nonatomic) id /* block */ longPressAction;

/* required instance methods */
- (_Bool)isCancelItem;
- (_Bool)isDestructive;
- (_Bool)isDisabled;

@optional

@end

#endif /* TFNActionItem_Protocol_h */

//
#ifndef TFNUpsellCardConfiguration_h
#define TFNUpsellCardConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface TFNUpsellCardConfiguration : NSObject <NSCopying> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 style;
    B24@0:8@"NSString"16 layout;
    B24@0:8@"NSString"16 headlineText;
    B24@0:8@"NSString"16 headlineIconName;
    B24@0:8@"NSString"16 headlineIconColor;
    B24@0:8@"NSString"16 headlineIndicatorLabelText;
    B24@0:8@"NSString"16 titleText;
    B24@0:8@"NSString"16 detailText;
    B24@0:8@"NSString"16 splashImage;
    B24@0:8@"NSString"16 tapAction;
}

/* instance methods */
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFNUpsellCardConfiguration_h */

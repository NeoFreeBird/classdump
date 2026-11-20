//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNLegacyFormCustomItem_h
#define TFNLegacyFormCustomItem_h
@import Foundation;

#include "TFNLegacyFormAppearance.h"
#include "TFNLegacyFormItem-Protocol.h"

@class NSObject, NSString;

@interface TFNLegacyFormCustomItem : NSObject <TFNLegacyFormItem>

@property (readonly, copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *detailText;
@property (readonly, nonatomic) unsigned long long disclosureStyle;
@property (readonly, nonatomic) _Bool destructive;
@property (readonly, nonatomic) _Bool showsMenuOnPrimaryAction;
@property (copy, nonatomic) id /* block */ sizeAtIndexPath;
@property (copy, nonatomic) id /* block */ cellAtIndexPath;
@property (copy, nonatomic) id /* block */ didSelectAtIndexPath;
@property (retain, nonatomic) TFNLegacyFormAppearance *appearance;

/* instance methods */
- (id)initWithText:(id)text disclosureStyle:(unsigned long long)style destructive:(_Bool)destructive;
- (id)initWithText:(id)text disclosureStyle:(unsigned long long)style destructive:(_Bool)destructive showsMenuOnPrimaryAction:(_Bool)action;
- (void)setDidSelectAtIndexPathTarget:(id)target action:(SEL)action;

@end

#endif /* TFNLegacyFormCustomItem_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNMenuSheetActionItem_h
#define TFNMenuSheetActionItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFNActionItem-Protocol.h"
#include "TFNMenuSheetActionItemSwitchDelegate-Protocol.h"

@class NSObject, NSString, UIColor, UIImage;

@interface TFNMenuSheetActionItem : NSObject <NSCopying, TFNActionItem, TFNMenuSheetActionItemSwitchDelegate>

@property (nonatomic) _Bool cancelItem;
@property (nonatomic) long long roundedButtonStyle;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ toggleAction;
@property (nonatomic) _Bool switchState;
@property (nonatomic) _Bool switchDisabled;
@property (retain, nonatomic) UIColor *customRoundedButtonBackgroundColor;
@property (retain, nonatomic) UIColor *customRoundedButtonTextColor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *imageName;
@property (readonly, nonatomic) _Bool destructive;
@property (readonly, nonatomic) _Bool disabled;
@property (nonatomic) double overrideMinimumHeight;
@property (nonatomic) _Bool limitToOneLine;
@property (copy, nonatomic) id /* block */ longPressAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)menuSheetActionItemWithTitle:(id)title subtitle:(id)subtitle imageName:(id)name type:(long long)type isCancelItem:(_Bool)item action:(id /* block */)action;
+ (id)loadingWithTitle:(id)title subtitle:(id)subtitle imageName:(id)name;
+ (id)switchWithTitle:(id)title subtitle:(id)subtitle imageName:(id)name initialState:(_Bool)state switchToggleAction:(id /* block */)action;
+ (id)singleSelectCheckmarkWithTitle:(id)title subtitle:(id)subtitle imageName:(id)name selected:(_Bool)selected action:(id /* block */)action;
+ (id)sectionHeaderWithTitle:(id)title;
+ (id)navigationWithTitle:(id)title subtitle:(id)subtitle imageName:(id)name action:(id /* block */)action;
+ (id)detailActionWithTitle:(id)title details:(id)details action:(id /* block */)action;
+ (id)roundedButtonWithTitle:(id)title style:(long long)style action:(id /* block */)action;
+ (id)roundedButtonWithTitle:(id)title style:(long long)style isCancelItem:(_Bool)item action:(id /* block */)action;

/* instance methods */
- (_Bool)isDestructive;
- (_Bool)isCancelItem;
- (void)menuSheetActionItemSwitchStateDidUpdate:(_Bool)update;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isDisabled;
- (_Bool)isSwitchDisabled;

@end

#endif /* TFNMenuSheetActionItem_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11XNavigation26MenuIndicatorBarButtonItem_h
#define _TtC11XNavigation26MenuIndicatorBarButtonItem_h
@import Foundation;

@class NSString, UIBarButtonItem, UIColor, UIMenu, XNavigation.MenuIndicatorButton;

@interface XNavigation.MenuIndicatorBarButtonItem : UIBarButtonItem { // (Swift)
    /* instance variables */
    XNavigation.MenuIndicatorButton button;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIMenu *menu;
@property (nonatomic) _Bool enabled;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, copy) NSString *accessibilityLabel;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (_Bool)isEnabled;

@end

#endif /* _TtC11XNavigation26MenuIndicatorBarButtonItem_h */

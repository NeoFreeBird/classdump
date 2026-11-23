//
#ifndef _TtC10TFNUISwift34TFNHostingControllerNavigationItem_h
#define _TtC10TFNUISwift34TFNHostingControllerNavigationItem_h
@import Foundation;

@class NSArray, NSString, UIBarButtonItem, UINavigationItem, UIView, _$sSo16UINavigationItemC;

@interface TFNUISwift.TFNHostingControllerNavigationItem : UINavigationItem { // (Swift)
    /* instance variables */
    __C.UINavigationItem swiftuiHostingControllerNavigationItem;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIView *titleView;
@property (nonatomic, copy) NSArray *leftBarButtonItems;
@property (nonatomic, copy) NSArray *rightBarButtonItems;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, retain) UIBarButtonItem *backBarButtonItem;
@property (nonatomic, copy) NSString *backButtonTitle;
@property (nonatomic) _Bool hidesBackButton;
@property (nonatomic) long long backButtonDisplayMode;
@property (nonatomic) _Bool leftItemsSupplementBackButton;
@property (nonatomic) long long largeTitleDisplayMode;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithTitle:(id)title;

@end

#endif /* _TtC10TFNUISwift34TFNHostingControllerNavigationItem_h */

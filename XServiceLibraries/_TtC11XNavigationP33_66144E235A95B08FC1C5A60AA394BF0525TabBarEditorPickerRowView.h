//
#ifndef _TtC11XNavigationP33_66144E235A95B08FC1C5A60AA394BF0525TabBarEditorPickerRowView_h
#define _TtC11XNavigationP33_66144E235A95B08FC1C5A60AA394BF0525TabBarEditorPickerRowView_h
@import Foundation;

@class UIControl;

@interface XNavigation.(TabBarEditorPickerRowView in _66144E235A95B08FC1C5A60AA394BF05) : UIControl { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 isCurrent;
    B24@0:8@"NSString"16 iconView;
    B24@0:8@"NSString"16 titleLabel;
    B24@0:8@"NSString"16 checkmarkView;
    B24@0:8@"NSString"16 pressContainer;
    B24@0:8@"NSString"16 $__lazy_storage_$_pressEffect;
}

@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)isEnabled;
- (_Bool)isHighlighted;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11XNavigationP33_66144E235A95B08FC1C5A60AA394BF0525TabBarEditorPickerRowView_h */

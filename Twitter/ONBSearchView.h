//
#ifndef ONBSearchView_h
#define ONBSearchView_h
@import Foundation;

#include "ONBSearchField.h"
#include "ONBSearchViewDelegate-Protocol.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSString, TFSTimer, UIButton, UIView;

@interface ONBSearchView : UIView <UITextFieldDelegate> {
    /* instance variables */
    _Bool _useLayoutMetricsContentEdgeInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _customContentEdgeInsets;
}

@property (retain, nonatomic) ONBSearchField *searchField;
@property (retain, nonatomic) TFSTimer *updatingTextTimer;
@property (retain, nonatomic) UIButton *cancelButton;
@property (weak, nonatomic) id <ONBSearchViewDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *cancelButtonText;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentEdgeInsets;
@property (nonatomic) _Bool shouldCenterPlaceholderWhenInactive;
@property (readonly, nonatomic) _Bool active;
@property (nonatomic) long long maxLength;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) long long cancelButtonVisibility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)preferredHeightWithContentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame returnKeyType:(long long)type addBottomLine:(_Bool)line useLayoutMetricsContentEdgeInsets:(_Bool)insets;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)clear;
- (_Bool)isActive;
- (void)_t1_updateSearchFieldAnimated:(_Bool)animated;
- (id /* block */)_t1_cancelButtonUpdateBlockForAlpha:(double)alpha;
- (void)_t1_action_didCancel:(id)cancel;
- (void)textFieldDidBeginEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (_Bool)textFieldShouldReturn:(id)_return;
- (_Bool)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (void)_t1_notification_searchFieldDidChange:(id)change;
- (void)_t1_timer_didFireUpdatingTextTimer:(id)timer;
- (void)_t1_private_updateText;
- (void)_t1_private_invalidateUpdatingTextTimer;
- (void)_t1_updateCancelButtonText;

@end

#endif /* ONBSearchView_h */

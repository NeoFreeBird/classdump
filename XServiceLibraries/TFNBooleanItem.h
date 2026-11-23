//
#ifndef TFNBooleanItem_h
#define TFNBooleanItem_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "TFNDataViewController.h"

@class NSArray, NSDictionary, NSObject, NSString, UISwitch;

@interface TFNBooleanItem : NSObject <TFNAttributedTextViewDelegate> {
    /* instance variables */
    UISwitch *_switch;
    TFNDataViewController *_controller;
    NSDictionary *_options;
}

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) _Bool value;
@property (readonly, nonatomic) _Bool showsMenuOnPrimaryAction;
@property (nonatomic) _Bool shouldOverrideContentEdgeInsetsFlag;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } overrideContentEdgeInsets;
@property (copy, nonatomic) id /* block */ updateAction;
@property (copy, nonatomic) NSArray *activeRanges;
@property (copy, nonatomic) id /* block */ activeRangeTapAction;
@property (nonatomic) _Bool executesUpdateActionOnSelection;
@property (copy, nonatomic) id /* block */ updateAccessoryViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStyle:(long long)style text:(id)text value:(_Bool)value updateAction:(id /* block */)action;
- (id)initWithStyle:(long long)style text:(id)text value:(_Bool)value showsMenuOnPrimaryAction:(_Bool)action updateAction:(id /* block */)action;
- (id)initWithStyle:(long long)style text:(id)text value:(_Bool)value showsMenuOnPrimaryAction:(_Bool)action updateAction:(id /* block */)action activeRanges:(id)ranges activeRangeTapAction:(id /* block */)action;
- (id)initWithStyle:(long long)style text:(id)text value:(_Bool)value updateTarget:(id)target action:(SEL)action;
- (id)initWithStyle:(long long)style text:(id)text value:(_Bool)value showsMenuOnPrimaryAction:(_Bool)action updateTarget:(id)target action:(SEL)action;
- (id)initWithText:(id)text userDefaultsKey:(id)key onUpdate:(id /* block */)update;
- (id)initWithText:(id)text userDefaultsKey:(id)key showsMenuOnPrimaryAction:(_Bool)action onUpdate:(id /* block */)update;
- (void)private_configureWithStyle:(long long)style text:(id)text value:(_Bool)value showsMenuOnPrimaryAction:(_Bool)action updateAction:(id /* block */)action activeRanges:(id)ranges activeRangeTapAction:(id /* block */)action;
- (void)dealloc;
- (void)setUpdateTarget:(id)target action:(SEL)action;
- (id /* block */)private_updateActionForTarget:(id)target action:(SEL)action;
- (id)private_switchForDataViewController:(id)controller options:(id)options;
- (void)accessibilityActivate_switchAction;
- (void)controlEvent_switchAction:(id)action;
- (void)private_switchAction;
- (void)private_didSelectForDataViewController:(id)controller options:(id)options indexPath:(id)path;
- (void)private_invokeUpdateActionForDataViewController:(id)controller options:(id)options indexPath:(id)path;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* TFNBooleanItem_h */

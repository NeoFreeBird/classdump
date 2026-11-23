//
#ifndef TFNSearchBarTextFieldOverlay_h
#define TFNSearchBarTextFieldOverlay_h
@import Foundation;

#include "TFNSearchBar.h"
#include "TFNSearchBarAccessoryButton.h"

@class NSString, UIColor, UILabel, UITextField, UIView;

@interface TFNSearchBarTextFieldOverlay : UIView {
    /* instance variables */
    _Bool _hasSetTextFieldBackground;
    UILabel *_label;
    UIColor *_textColor;
    UIColor *_placeholderColor;
    long long _style;
    _Bool _translucent;
    TFNSearchBarAccessoryButton *_searchView;
    TFNSearchBarAccessoryButton *_textFieldSearchView;
    TFNSearchBarAccessoryButton *_textFieldTrailingView;
    _Bool _textFieldTrailingViewIsFilter;
    long long _transition;
}

@property (readonly, weak, nonatomic) TFNSearchBar *searchBar;
@property (readonly, weak, nonatomic) UITextField *textField;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) id /* block */ filterAction;
@property (copy, nonatomic) NSString *liquidGlassStoredText;

/* class methods */
+ (void)installOnSearchBar:(id)bar textField:(id)field placeholderColor:(id)color style:(long long)style translucent:(_Bool)translucent;

/* instance methods */
- (id)initWithSearchBar:(id)bar textField:(id)field placeholderColor:(id)color style:(long long)style translucent:(_Bool)translucent;
- (void)dealloc;
- (void)updateFont;
- (void)matchTextFieldText;
- (void)_tfn_updateAccessibilityLabel;
- (void)layoutSubviews;
- (id)_tfn_placeholderColor;
- (id)_tfn_textColor;
- (void)_tfn_applyGlassAccessoryGeometry;
- (_Bool)_tfn_rendersGlassCapsule;
- (id)_tfn_trailingAccessoryColor;
- (void)refreshAppearance;
- (void)_tfn_rebuildSearchViews;
- (void)_tfn_rebuildTrailingAccessory;
- (void)_tfn_updateBackgroundImage;
- (void)_tfn_updateForFirstResponderStatus;
- (void)_tfn_layoutCentered:(_Bool)centered;
- (void)_tfn_textFieldDidBeginEditing;
- (void)_tfn_textFieldDidEndEditing;
- (void)_tfn_textFieldTextDidChange;
- (void)_tfn_updateViewsForFirstResponderStatus;
- (void)_tfn_updateTextFieldTrailingView;
- (void)_tfn_dynamicColorsDidReload:(id)reload;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* TFNSearchBarTextFieldOverlay_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVTitleSubtitleModalViewController_h
#define PTVTitleSubtitleModalViewController_h
@import Foundation;

#include "PTVInteractiveModalViewController.h"
#include "PTVTitleSubtitleModalView.h"
#include "PTVTitleSubtitleModalViewDelegate-Protocol.h"

@class NSAttributedString, NSString, UIColor, UIImage;

@interface PTVTitleSubtitleModalViewController : PTVInteractiveModalViewController <PTVTitleSubtitleModalViewDelegate> {
    /* instance variables */
    _Bool _useConstrainedHeight;
    id /* block */ _primaryAction;
    id /* block */ _secondaryAction;
    id /* block */ _dismissAction;
}

@property (readonly, nonatomic) PTVTitleSubtitleModalView *modalView;
@property (nonatomic) unsigned long long interactiveModalAnimationStyle;
@property (readonly, nonatomic) UIImage *headerImage;
@property (readonly, nonatomic) UIColor *headerBackgroundColor;
@property (readonly, nonatomic) NSString *titleString;
@property (readonly, nonatomic) UIColor *titleColor;
@property (readonly, nonatomic) NSAttributedString *attributedSubtitle;
@property (readonly, nonatomic) NSString *mainActionTitle;
@property (readonly, nonatomic) NSString *secondaryActionTitle;
@property (readonly, nonatomic) NSString *footerLabel;
@property (readonly, nonatomic) long long modalTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)NormalAttributesForSubtitleWithColor:(id)color;
+ (id)NormalAttributesForSubtitleWithColor:(id)color ModalTheme:(long long)theme;
+ (id)BoldAttributesForSubtitleWithColor:(id)color;
+ (id)BoldAttributesForSubtitleWithColor:(id)color ModalTheme:(long long)theme;

/* instance methods */
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)interactiveModalShouldDismiss;
- (void)titleSubtitleModalViewDidSelectMainAction:(id)action;
- (void)titleSubtitleModalViewDidSelectSecondaryAction:(id)action;
- (void)titleSubtitleModalViewDidSelectDismiss:(id)dismiss;
- (id)initWithHeaderBackgroundColor:(id)color headerImage:(id)image titleString:(id)string attributedSubtitle:(id)subtitle mainActionTitle:(id)title secondaryActionTitle:(id)title footerLabel:(id)label modalTheme:(long long)theme useConstrainedHeight:(_Bool)height primaryAction:(id /* block */)action secondaryAction:(id /* block */)action dismissAction:(id /* block */)action;
- (id)initWithHeaderBackgroundColor:(id)color headerImage:(id)image titleString:(id)string subtitleString:(id)string mainActionTitle:(id)title secondaryActionTitle:(id)title footerLabel:(id)label modalTheme:(long long)theme useConstrainedHeight:(_Bool)height primaryAction:(id /* block */)action secondaryAction:(id /* block */)action dismissAction:(id /* block */)action;
- (void)didSelectMainActionButton;
- (void)didSelectSecondaryActionButton;
- (void)didSelectDismiss;

@end

#endif /* PTVTitleSubtitleModalViewController_h */

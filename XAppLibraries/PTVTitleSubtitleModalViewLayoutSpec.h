//
#ifndef PTVTitleSubtitleModalViewLayoutSpec_h
#define PTVTitleSubtitleModalViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVTitleSubtitleModalViewLayoutSpec : NSObject

/* class methods */
+ (struct CGSize { double x0; double x1; })ModalViewConstrainedSizeThatFits:(struct CGSize { double x0; double x1; })fits BackgroundImageHeight:(double)height TitleLabelHeight:(double)height SubtitleLabelHeight:(double)height ConfirmationButtonHeight:(double)height SecondaryActionButtonHeight:(double)height FooterLabelHeight:(double)height TitleAndHeaderViewVisible:(_Bool)visible TraitCollection:(id)collection;
+ (struct CGSize { double x0; double x1; })MinModalSize:(struct CGSize { double x0; double x1; })size;
+ (double)ModalContentWidthWithSuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })ModalMinimumOuterInsets;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })TitleOuterSpacingIfNoHeaderImage;
+ (double)ModalViewCornerRadiusWithModalTheme:(long long)theme;
+ (double)DismissButtonPaddingWithModalTheme:(long long)theme;
+ (double)YSpacingAboveFooterLabel;
+ (double)SpacingBetweenMainAndSecondaryButton;
+ (id)TitleFontWithModalTheme:(long long)theme;
+ (id)SubtitleFontWithModalTheme:(long long)theme;
+ (id)SubtitleFontBoldWithModalTheme:(long long)theme;
+ (id)MainButtonTitleFontWithModalTheme:(long long)theme;
+ (id)SecondaryButtonTitleFont;
+ (id)FooterFont;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })HeaderBackgroundViewFrameWithTitleLabelSize:(struct CGSize { double x0; double x1; })size HeaderImageSize:(struct CGSize { double x0; double x1; })size SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })HeaderImageFrameWithImageSize:(struct CGSize { double x0; double x1; })size SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGSize { double x0; double x1; })TitleLabelSize:(id)size ModalTheme:(long long)theme SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })TitleFrameWithSize:(struct CGSize { double x0; double x1; })size HeaderImageSize:(struct CGSize { double x0; double x1; })size SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })SubtitleFrameWithSubtitleSize:(struct CGSize { double x0; double x1; })size TitleLabelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame TitleAndHeaderBackgroundVisible:(_Bool)visible HeaderImageSize:(struct CGSize { double x0; double x1; })size SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (id)AttributedMainButtonTitle:(id)title ModalTheme:(long long)theme;
+ (double)MainButtonHeightWithModalTheme:(long long)theme;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })MainActionButtonFrameWithHeight:(double)height SecondaryButtonHeight:(double)height FooterLabelHeight:(double)height AttributedTitle:(id)title ModalTheme:(long long)theme SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (id)AttributedSecondaryButtonTitle:(id)title ModalTheme:(long long)theme Selected:(_Bool)selected;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })SecondaryButtonFrameWithHeight:(double)height FooterLabelHeight:(double)height ModalTheme:(long long)theme SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (id)FooterLabelAttributed:(id)attributed ModalTheme:(long long)theme;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })FooterFrameWithHeight:(double)height SuperViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })DismissButtonFrameWithImageSize:(struct CGSize { double x0; double x1; })size ModalTheme:(long long)theme SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;

@end

#endif /* PTVTitleSubtitleModalViewLayoutSpec_h */

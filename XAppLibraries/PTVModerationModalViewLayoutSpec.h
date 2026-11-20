//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVModerationModalViewLayoutSpec_h
#define PTVModerationModalViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVModerationModalViewLayoutSpec : NSObject

/* class methods */
+ (id)TitleFont;
+ (id)SubtitleFontLight;
+ (id)SubtitleFontBold;
+ (id)ExampleFont;
+ (id)ExampleMessageFont;
+ (id)VotingButtonFont;
+ (id)SettingsFooterFont;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })TitleOuterSpacing;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })SubtitleOuterSpacing:(id)spacing;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })ExampleOuterSpacing:(id)spacing;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })ExampleContainerOuterSpacing;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })ExampleMessageContainerOuterSpacing;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })ExampleDividingLineOuterSpacing;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })VotingButtonOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })SettingsFooterOuterPadding;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })ConfirmationButtonOuterPadding;
+ (double)VotingButtonHeight;
+ (double)MessageContainerHeight;
+ (double)ExampleDividingLineHeight;
+ (double)ExampleContainerHeight;
+ (struct CGSize { double x0; double x1; })ModalViewSizeThatFits:(struct CGSize { double x0; double x1; })fits SubtitleLabelSize:(struct CGSize { double x0; double x1; })size ConfirmationButtonHeight:(double)height TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })TitleFrameWithModalViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })TitleHeaderBackgroundFrame:(struct CGSize { double x0; double x1; })frame TraitCollection:(id)collection;
+ (id)SubtitleAttributed:(id)attributed;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })SubtitleFrameWithSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection ModalViewSize:(struct CGSize { double x0; double x1; })size;
+ (id)ExampleLabelAttributed;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ExampleLabelFrameWithSubtitleSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection ModalViewSize:(struct CGSize { double x0; double x1; })size;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ExampleContainerFrameWithSubtitleSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection ModalViewSize:(struct CGSize { double x0; double x1; })size;
+ (id)ExampleMessageAttributed;
+ (struct CGSize { double x0; double x1; })ExampleMessageSizeWithExampleContainerSize:(struct CGSize { double x0; double x1; })size;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRMessageContainerFrame:(struct CGSize { double x0; double x1; })frame TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })MessageContainerFrame:(struct CGSize { double x0; double x1; })frame ExampleContainerSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRExampleMessageAvatarFrameWithTraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ExampleMessageAvatarFrameWithMessageContainerViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRExampleMessageLabelFrameWithMessageContainerViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ExampleMessageLabelFrameWithMessageContainerViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ExampleDividingLineFrameWithExampleContainerSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (id)VotingButtonAttributed:(id)attributed;
+ (double)VotingButtonWidth:(double)width;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })VotingButtonFrame:(long long)frame ExampleContainerSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (id)SettingsFooterAttributed;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })SettingsFooterLabelFrameWithConfirmationButtonHeight:(double)height ModalViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;

@end

#endif /* PTVModerationModalViewLayoutSpec_h */

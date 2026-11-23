//
#ifndef PTVChatWarningModalViewLayoutSpec_h
#define PTVChatWarningModalViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVChatWarningModalViewLayoutSpec : NSObject

/* class methods */
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ModalViewFrameWithTitleHeight:(double)height SubtitleHeight:(double)height MessageContainerHeight:(double)height ButtonHeight:(double)height ContainerViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (double)ModalViewWidthFromContainerViewWidth:(double)width TraitCollection:(id)collection;
+ (double)ModalViewHeightWithTitleHeight:(double)height SubtitleHeight:(double)height MessageContainerHeight:(double)height ButtonHeight:(double)height TraitCollection:(id)collection;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })SubtitleContentMarginsWithTraitCollection:(id)collection;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })MessageContainerContentMarginsWithTraitCollection:(id)collection;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })SendButtonContentMarginsForTraitCollection:(id)collection;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })DontSendButtonContentMarginsWithTraitCollection:(id)collection;
+ (id)TitleFont;
+ (id)MessageFont;
+ (id)SubtitleFont;
+ (id)ButtonFont;
+ (id)TitleAttributed;
+ (id)MessageAttributedForBody:(id)body;
+ (id)SubtitleAttributed;
+ (id)SendButtonAttributed;
+ (id)DontSendAttributed;
+ (struct CGSize { double x0; double x1; })TitleLabelSize:(id)size WithModalContainerViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGSize { double x0; double x1; })SubtitleLabelSize:(id)size WithModalContainerViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGSize { double x0; double x1; })MessageLabelSize:(id)size WithModalContainerViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGSize { double x0; double x1; })MessageContainerViewSize:(struct CGSize { double x0; double x1; })size;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })TitleBackgroundViewFrame:(struct CGSize { double x0; double x1; })frame ModalViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })TitleLabelFrame:(struct CGSize { double x0; double x1; })frame ModalViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })MessageContainerShadowFrame:(struct CGSize { double x0; double x1; })frame TitleLabelSize:(struct CGSize { double x0; double x1; })size ModalViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })MessageContainerFrame:(struct CGSize { double x0; double x1; })frame TitleLabelSize:(struct CGSize { double x0; double x1; })size ModalViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })AvatarFrameWithMessageContainerHeight:(double)height TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })MessageFrameWithHeight:(double)height MessageContainerSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })SubtitleFrameWithHeight:(double)height TitleLabelSize:(struct CGSize { double x0; double x1; })size MessageContainerHeight:(double)height ModalViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })SendMessageButtonFrame:(double)frame ModalViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })DontSendButtonFrame:(double)frame ModalViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;

@end

#endif /* PTVChatWarningModalViewLayoutSpec_h */

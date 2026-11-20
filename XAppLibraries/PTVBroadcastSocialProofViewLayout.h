//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastSocialProofViewLayout_h
#define PTVBroadcastSocialProofViewLayout_h
@import Foundation;

@class NSObject;

@interface PTVBroadcastSocialProofViewLayout : NSObject

/* class methods */
+ (double)CalculateHeightWithSocialProof:(id)proof;
+ (id)SocialProofFontBold;
+ (id)SocialProofFont;
+ (double)SocialProofFontLineHeight;
+ (struct CGSize { double x0; double x1; })ImageSize;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })LabelOuterPadding;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRImageFrameWithLabelWidthConstrainingSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ImageFrameWithConstrainingSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LTRLabelFrameWithConstrainingSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LabelFrameWithConstrainingSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (id)SharedByImage;
+ (id)SharedByAttributed:(id)attributed;
+ (id)GuestsAttributed:(id)attributed;
+ (id)SocialProofAttributed:(id)attributed;

@end

#endif /* PTVBroadcastSocialProofViewLayout_h */

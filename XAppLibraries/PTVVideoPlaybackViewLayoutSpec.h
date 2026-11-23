//
#ifndef PTVVideoPlaybackViewLayoutSpec_h
#define PTVVideoPlaybackViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVVideoPlaybackViewLayoutSpec : NSObject

/* class methods */
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })VideoFrameWithVideoAspect:(double)aspect ShouldAspectFill:(_Bool)fill SuperViewSize:(struct CGSize { double x0; double x1; })size ShouldAdjustFrameBasedOnNotch:(_Bool)notch;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })BackgroundViewFrameWithVideoAspect:(double)aspect SuperViewSize:(struct CGSize { double x0; double x1; })size;
+ (id)DebugLabelsFonts;
+ (id)OverlayNameFonts;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })OverlayNameInsets;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })NTPLabelFrameWithText:(id)text TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })BitrateLabelFrameWithText:(id)text TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })OverlayNameLabelFrameWithText:(id)text Bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds TraitCollection:(id)collection;

@end

#endif /* PTVVideoPlaybackViewLayoutSpec_h */

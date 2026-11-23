//
#ifndef PTVPreBroadcastViewLayoutSpec_h
#define PTVPreBroadcastViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVPreBroadcastViewLayoutSpec : NSObject

/* class methods */
+ (_Bool)ShouldRenderControlsOnSameLine:(id)line;
+ (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; })LayoutPreBroadcastViewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withTraits:(id)traits headerViewSize:(struct CGSize { double x0; double x1; })size audienceSelectorSize:(struct CGSize { double x0; double x1; })size controlsSize:(struct CGSize { double x0; double x1; })size connectionStatusSize:(struct CGSize { double x0; double x1; })size isControlsViewHidden:(_Bool)hidden;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })MainEdgeInsets;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })HeaderEdgeInsets;
+ (id)StatusTextViewFont;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ExitButtonFrameWithImageSize:(struct CGSize { double x0; double x1; })size SuperViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;

@end

#endif /* PTVPreBroadcastViewLayoutSpec_h */

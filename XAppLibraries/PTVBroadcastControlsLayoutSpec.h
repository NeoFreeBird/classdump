//
#ifndef PTVBroadcastControlsLayoutSpec_h
#define PTVBroadcastControlsLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVBroadcastControlsLayoutSpec : NSObject

/* class methods */
+ (double)DismissButtonPadding;
+ (id)SwipeLabelStandardFont;
+ (id)SwipeLabelBoldFont;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ButtonRect:(struct CGSize { double x0; double x1; })rect Type:(int)type ContainerSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (id)DebugLabelFont;
+ (id)IPadInstructionLabelStandardFont;
+ (id)IPadInstructionLabelBoldFont;

@end

#endif /* PTVBroadcastControlsLayoutSpec_h */

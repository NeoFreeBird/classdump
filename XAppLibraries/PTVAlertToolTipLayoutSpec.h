//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAlertToolTipLayoutSpec_h
#define PTVAlertToolTipLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVAlertToolTipLayoutSpec : NSObject

/* class methods */
+ (double)AlertCornerRadius;
+ (double)TopSpacing;
+ (double)BottomSpacing;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })BlurBackgroundViewFrameWithSuperviewSize:(struct CGSize { double x0; double x1; })size;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ImageViewFrameWithImage:(id)image SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })TitleLabelFrameWithAttributedText:(id)text SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;

@end

#endif /* PTVAlertToolTipLayoutSpec_h */

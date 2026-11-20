//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1WebCardViewLayoutHelper_h
#define T1WebCardViewLayoutHelper_h
@import Foundation;

@class NSObject;

@interface T1WebCardViewLayoutHelper : NSObject

/* class methods */
+ (long long)numberOfLinesForFont:(id)font height:(double)height;
+ (id)titleTextModelForText:(id)text color:(id)color font:(id)font shouldRenderFromRight:(_Bool)right;
+ (id)descriptionTextModelForText:(id)text color:(id)color shouldRenderFromRight:(_Bool)right;
+ (id)websiteTextModelForText:(id)text color:(id)color font:(id)font shouldRenderFromRight:(_Bool)right;
+ (struct CGSize { double x0; double x1; })_layoutImage:(id)image viewModel:(id)model width:(double)width atPoint:(struct CGPoint { double x0; double x1; })point;
+ (struct CGSize { double x0; double x1; })_layoutImage:(id)image viewModel:(id)model width:(double)width atPoint:(struct CGPoint { double x0; double x1; })point imageRatio:(double)ratio;
+ (double)_layoutTitle:(id)title viewModel:(id)model frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame maxLines:(unsigned long long)lines;
+ (double)_layoutDescription:(id)description viewModel:(id)model frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame otherTextLines:(unsigned long long)lines;
+ (double)_layoutWebsite:(id)website viewModel:(id)model frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_shiftFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame deltaY:(double)y;

/* instance methods */
- (id)layoutForCardViewModel:(id)model layoutMetrics:(id)metrics;

@end

#endif /* T1WebCardViewLayoutHelper_h */

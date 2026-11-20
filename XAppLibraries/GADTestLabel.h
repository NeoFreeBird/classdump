//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADTestLabel_h
#define GADTestLabel_h
@import Foundation;

@class UILabel;

@interface GADTestLabel : UILabel

/* instance methods */
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* GADTestLabel_h */

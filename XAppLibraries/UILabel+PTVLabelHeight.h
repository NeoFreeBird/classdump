//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UILabel_PTVLabelHeight_h
#define UILabel_PTVLabelHeight_h
@import Foundation;

@interface UILabel (PTVLabelHeight)

/* class methods */
+ (struct CGSize { double x0; double x1; })ptv_TextSize:(struct CGSize { double x0; double x1; })size text:(id)text font:(id)font;
+ (struct CGSize { double x0; double x1; })ptv_GetSize:(struct CGSize { double x0; double x1; })size AttributedString:(id)string;

/* instance methods */
- (struct CGSize { double x0; double x1; })ptv_textSize;
- (struct CGSize { double x0; double x1; })ptv_textSize:(struct CGSize { double x0; double x1; })size;

@end

#endif /* UILabel_PTVLabelHeight_h */

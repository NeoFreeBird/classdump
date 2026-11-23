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

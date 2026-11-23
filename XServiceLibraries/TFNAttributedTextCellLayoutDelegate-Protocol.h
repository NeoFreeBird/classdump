//
#ifndef TFNAttributedTextCellLayoutDelegate_Protocol_h
#define TFNAttributedTextCellLayoutDelegate_Protocol_h
@import Foundation;

@protocol TFNAttributedTextCellLayoutDelegate

@required

/* required instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAttributedTextView:(id)view withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAccessoryView:(id)view;

@optional

@end

#endif /* TFNAttributedTextCellLayoutDelegate_Protocol_h */

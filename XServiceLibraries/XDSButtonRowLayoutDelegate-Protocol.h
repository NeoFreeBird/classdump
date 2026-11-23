//
#ifndef XDSButtonRowLayoutDelegate_Protocol_h
#define XDSButtonRowLayoutDelegate_Protocol_h
@import Foundation;

@protocol XDSButtonRowLayoutDelegate

@required

/* required instance methods */
- (void)buttonRowDidArrangeItems:(id)items contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@optional

@end

#endif /* XDSButtonRowLayoutDelegate_Protocol_h */

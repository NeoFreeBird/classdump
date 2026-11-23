//
#ifndef T1DockModalStackCollapse_h
#define T1DockModalStackCollapse_h
@import Foundation;

@class NSObject;

@interface T1DockModalStackCollapse : NSObject // (Swift)

/* class methods */
+ (_Bool)hasModalStackBeneath:(id)beneath;
+ (void)crossFadeDismissModalsFrom:(id)from;
+ (void)crossFadeDismissModalsFrom:(id)from morphingView:(id)view toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame cornerRadius:(double)radius maskedCorners:(unsigned long long)corners;

/* instance methods */
- (id)init;

@end

#endif /* T1DockModalStackCollapse_h */

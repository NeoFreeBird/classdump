//
#ifndef PTVLayoutUtil_h
#define PTVLayoutUtil_h
@import Foundation;

@class NSObject;

@interface PTVLayoutUtil : NSObject

/* class methods */
+ (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame forView:(id)view withContainerSize:(struct CGSize { double x0; double x1; })size rtlIfNeeded:(_Bool)needed;

@end

#endif /* PTVLayoutUtil_h */

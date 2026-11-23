//
#ifndef PTVDisplayView_Protocol_h
#define PTVDisplayView_Protocol_h
@import Foundation;

@protocol PTVDisplayView

@required

@property (nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoRect;

@optional

@end

#endif /* PTVDisplayView_Protocol_h */

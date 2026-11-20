//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XDSToastHorizontalPlacement_h
#define XDSToastHorizontalPlacement_h
@import Foundation;

@class NSObject;

@interface XDSToastHorizontalPlacement : NSObject // (Swift)

/* class methods */
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInView:(id)view toastMinY:(double)y toastHeight:(double)height;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInView:(id)view toastMinY:(double)y toastHeight:(double)height minimumMinY:(double)y;
+ (void)installHingeLayoutInvalidationOnView:(id)view;

/* instance methods */
- (id)init;

@end

#endif /* XDSToastHorizontalPlacement_h */

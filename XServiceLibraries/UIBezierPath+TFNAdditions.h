//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIBezierPath_TFNAdditions_h
#define UIBezierPath_TFNAdditions_h
@import Foundation;

@interface UIBezierPath (TFNAdditions)

/* class methods */
+ (id)roundedRectWithEllipticCorners:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })corners corners:(unsigned long long)corners cornerRadius:(struct CGSize { double x0; double x1; })radius;

@end

#endif /* UIBezierPath_TFNAdditions_h */

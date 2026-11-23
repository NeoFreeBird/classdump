//
#ifndef TFNGlassBarItemMirrorRecord_h
#define TFNGlassBarItemMirrorRecord_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface TFNGlassBarItemMirrorRecord : NSObject

@property (retain, nonatomic) NSArray *mirrors;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleViewFrameInBar;
@property (nonatomic) double barWidth;
@property (nonatomic) long long userInterfaceStyle;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;

/* instance methods */

@end

#endif /* TFNGlassBarItemMirrorRecord_h */

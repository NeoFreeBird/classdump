//
#ifndef TMAMediaSizingUtils_h
#define TMAMediaSizingUtils_h
@import Foundation;

@class NSObject;

@interface TMAMediaSizingUtils : NSObject // (Swift)

/* class methods */
+ (double)verticalMediaBaseWidthRatio;
+ (struct CGSize { double x0; double x1; })verticalMediaSizeForAspectRatio:(double)ratio width:(double)width baseWidthRatio:(double)ratio;
+ (struct CGSize { double x0; double x1; })aspectFitMediaSizeForAspectRatio:(double)ratio width:(double)width maxHeight:(double)height maxCropFraction:(double)fraction;
+ (struct CGSize { double x0; double x1; })fillWidthMediaSizeForAspectRatio:(double)ratio width:(double)width maxHeight:(double)height;
+ (double)verticalMediaMaxHeightForWidth:(double)width baseWidthRatio:(double)ratio;

/* instance methods */
- (id)init;

@end

#endif /* TMAMediaSizingUtils_h */

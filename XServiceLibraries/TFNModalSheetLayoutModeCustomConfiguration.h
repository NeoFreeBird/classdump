//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNModalSheetLayoutModeCustomConfiguration_h
#define TFNModalSheetLayoutModeCustomConfiguration_h
@import Foundation;

@class NSObject, UIColor;

@interface TFNModalSheetLayoutModeCustomConfiguration : NSObject

@property (retain, nonatomic) UIColor *chromeColor;
@property (retain, nonatomic) UIColor *handleColor;
@property (nonatomic) double maximumHeightForSlideover;

/* instance methods */

@end

#endif /* TFNModalSheetLayoutModeCustomConfiguration_h */

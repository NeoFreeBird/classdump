//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCButton_h
#define TUCButton_h
@import Foundation;

#include "TUCButtonData.h"

@class TFNButton;

@interface TUCButton : TFNButton // (Swift)

@property (nonatomic, retain) TUCButtonData *dataModel;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForDataModel:(id)model hasImage:(_Bool)image;
+ (id)buttonWithDataModel:(id)model dominantColor:(id)color;

/* instance methods */
- (void)updateWithDataModel:(id)model;
- (id)initWithStyle:(long long)style sizeClass:(long long)_class;

@end

#endif /* TUCButton_h */

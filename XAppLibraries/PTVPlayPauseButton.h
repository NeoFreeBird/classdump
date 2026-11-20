//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVPlayPauseButton_h
#define PTVPlayPauseButton_h
@import Foundation;

#include "PTVButton.h"

@class NSString, UIImage;

@interface PTVPlayPauseButton : PTVButton {
    /* instance variables */
    UIImage *_pauseImage;
    UIImage *_pauseHiglightedImage;
    NSString *_pauseAccessibilityLabel;
    UIImage *_playImage;
    UIImage *_playHiglightedImage;
    NSString *_playAccessibilityLabel;
}

@property (nonatomic) long long displayMode;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)executeState;

@end

#endif /* PTVPlayPauseButton_h */

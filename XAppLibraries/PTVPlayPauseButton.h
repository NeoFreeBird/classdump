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

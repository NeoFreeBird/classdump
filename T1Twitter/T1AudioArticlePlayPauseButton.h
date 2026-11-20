//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AudioArticlePlayPauseButton_h
#define T1AudioArticlePlayPauseButton_h
@import Foundation;

@class UIView;

@interface T1AudioArticlePlayPauseButton : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *imageView;
    NSNumber"16@0:8 *playbackObserver;
    NSNumber"16@0:8 *articleID;
    NSNumber"16@0:8 *accountID;
    NSNumber"16@0:8 *isPlaying;
}

/* class methods */
+ (struct CGSize { double x0; double x1; })buttonSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setPlaybackContextWithArticleID:(id)id accountID:(id)id;
- (void)setPlaying:(_Bool)playing;

@end

#endif /* T1AudioArticlePlayPauseButton_h */

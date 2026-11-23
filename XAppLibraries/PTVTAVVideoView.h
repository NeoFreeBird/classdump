//
#ifndef PTVTAVVideoView_h
#define PTVTAVVideoView_h
@import Foundation;

#include "PTVVideoView.h"
#include "TAVPlayerView.h"

@class NSString;

@interface PTVTAVVideoView : PTVVideoView {
    /* instance variables */
    NSString *_scribePage;
}

@property (retain, nonatomic) TAVPlayerView *tavPlayerView;
@property (nonatomic) _Bool playAudio;

/* instance methods */
- (id)initWithScribePage:(id)page;
- (id)internalVideoView;
- (id)playerViewConfiguration;
- (_Bool)readyForDisplay;
- (void)_updateVideoConfig;
- (void)setAspectFill:(_Bool)fill;

@end

#endif /* PTVTAVVideoView_h */

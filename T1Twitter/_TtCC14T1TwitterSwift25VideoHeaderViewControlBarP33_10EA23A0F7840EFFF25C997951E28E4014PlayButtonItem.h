//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC14T1TwitterSwift25VideoHeaderViewControlBarP33_10EA23A0F7840EFFF25C997951E28E4014PlayButtonItem_h
#define _TtCC14T1TwitterSwift25VideoHeaderViewControlBarP33_10EA23A0F7840EFFF25C997951E28E4014PlayButtonItem_h
@import Foundation;

@class TAVControlBarItem, UIView;
@protocol TAVPlayerView;

@interface T1TwitterSwift.VideoHeaderViewControlBar.(PlayButtonItem in _10EA23A0F7840EFFF25C997951E28E40) : TAVControlBarItem { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *$__lazy_storage_$_button;
}

@property (nonatomic, retain) id <TAVPlayerView> playerView;
@property (nonatomic, readonly) UIView *view;

/* instance methods */
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)didTap;
- (id)initWithIdentifier:(id)identifier;

@end

#endif /* _TtCC14T1TwitterSwift25VideoHeaderViewControlBarP33_10EA23A0F7840EFFF25C997951E28E4014PlayButtonItem_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AudioArticlePlayer_h
#define T1AudioArticlePlayer_h
@import Foundation;

@class NSObject;

@interface T1AudioArticlePlayer : NSObject // (Swift)

@property (nonatomic, readonly) _Bool isPresented;

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)didTapPlayPauseFor:(id)_for with:(id)with;
- (_Bool)isPlayingFor:(id)_for account:(id)account;
- (double)playbackProgressFor:(id)_for account:(id)account;

@end

#endif /* T1AudioArticlePlayer_h */

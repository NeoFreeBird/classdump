//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventLegacyFloatingMiniPlayerContent_Protocol_h
#define T1LiveEventLegacyFloatingMiniPlayerContent_Protocol_h
@import Foundation;

#include "TFCCardDataSource-Protocol.h"

@class NSString, UIView;

@protocol T1LiveEventLegacyFloatingMiniPlayerContent

@required

@property (readonly, nonatomic) UIView *dockableView;
@property (readonly, nonatomic) id /* block */ undockActionBlock;
@property (readonly, nonatomic) _Bool dockedViewContainsVideo;

/* required instance methods */
- (id)scribeContext;

@optional

@property (readonly, nonatomic) long long dockedViewSwipeAction;
@property (readonly, nonatomic) long long dockedViewTapAction;
@property (readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property (readonly, nonatomic) double preferredPinnedHeight;
@property (readonly, nonatomic) _Bool isDockedVideoPlaying;
@property (readonly, nonatomic) _Bool isDockedVideoPaused;
@property (readonly, nonatomic) NSString *playerIdentifier;

/* optional instance methods */
- (void)playDockedVideo;
- (void)pauseDockedVideo;
- (void)disposeDockedVideo;
- (void)muteDockedVideo:(_Bool)video;
- (struct CGPoint { double x0; double x1; })dockedViewOriginForDockedViewSize:(struct CGSize { double x0; double x1; })size;

@end

#endif /* T1LiveEventLegacyFloatingMiniPlayerContent_Protocol_h */

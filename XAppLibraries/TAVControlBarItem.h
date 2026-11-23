//
#ifndef TAVControlBarItem_h
#define TAVControlBarItem_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"
#include "TAVPlayerView-Protocol.h"

@class NSObject, NSString, UIView;

@interface TAVControlBarItem : NSObject <TAVPlaybackObserver>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) _Bool visible;
@property (weak, nonatomic) id <TAVPlayerView> playerView;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)init;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (_Bool)isVisible;

@end

#endif /* TAVControlBarItem_h */

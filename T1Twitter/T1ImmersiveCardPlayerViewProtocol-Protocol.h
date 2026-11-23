//
#ifndef T1ImmersiveCardPlayerViewProtocol_Protocol_h
#define T1ImmersiveCardPlayerViewProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class TAVPlayerViewConfiguration, UILayoutGuide;

@protocol T1ImmersiveCardPlayerViewProtocol <NSObject>

@required

@property (nonatomic, readonly) TAVPlayerViewConfiguration *configuration;
@property (nonatomic, readonly) UILayoutGuide *videoLayoutGuide;

/* required instance methods */
- (void)passPlayerToOtherPlayerView:(id)view;

@optional

@end

#endif /* T1ImmersiveCardPlayerViewProtocol_Protocol_h */

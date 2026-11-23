//
#ifndef T1ImmersiveCardViewProtocol_Protocol_h
#define T1ImmersiveCardViewProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "T1ImmersiveCardPlayerViewProtocol-Protocol.h"

@class TAVPlayerSessionProducer, TFNTwitterStatus, UIView;

@protocol T1ImmersiveCardViewProtocol <NSObject>

@required

@property (nonatomic, readonly) UIView<T1ImmersiveCardPlayerViewProtocol> *playerView;
@property (nonatomic, readonly) TAVPlayerSessionProducer *playerSessionProducer;
@property (nonatomic, readonly) TFNTwitterStatus *status;
@property (nonatomic, readonly) _Bool isTopTweetCard;
@property (nonatomic, readonly) _Bool isNativePictureInPictureActive;

/* required instance methods */
- (void)stopNativePictureInPicture;
- (_Bool)userTappedOnTimestamp:(id)timestamp;
- (_Bool)userTappedOnTimestamp:(id)timestamp;
- (void)presentTaggedUserListView;
- (void)setPausedByUser:(_Bool)user;

@optional

/* optional instance methods */
- (void)releasePlayerAfterHandoff;
- (void)claimSharedPlayerOutputForPresentation;

@end

#endif /* T1ImmersiveCardViewProtocol_Protocol_h */

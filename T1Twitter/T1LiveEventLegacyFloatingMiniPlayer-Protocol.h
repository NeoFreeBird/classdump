//
#ifndef T1LiveEventLegacyFloatingMiniPlayer_Protocol_h
#define T1LiveEventLegacyFloatingMiniPlayer_Protocol_h
@import Foundation;

@protocol T1LiveEventLegacyFloatingMiniPlayer

@required

@property (nonatomic) long long t1_dockingPresentationOption;

/* required instance methods */
- (void)updateDockedViewVisibilityAnimated:(_Bool)animated;
- (id)t1_currentDockedViewController;
- (_Bool)t1_isPlayerCorrespondingToSessionProducerDocked:(id)docked;
- (_Bool)t1_isViewDocked:(id)docked;

@optional

@end

#endif /* T1LiveEventLegacyFloatingMiniPlayer_Protocol_h */

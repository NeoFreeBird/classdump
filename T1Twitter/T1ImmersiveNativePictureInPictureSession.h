//
#ifndef T1ImmersiveNativePictureInPictureSession_h
#define T1ImmersiveNativePictureInPictureSession_h
@import Foundation;

#include "TASSpacesNavigatableObserver-Protocol.h"
#include "TAVPlaybackObserver-Protocol.h"

@class NSObject, NSString;

@interface T1ImmersiveNativePictureInPictureSession : NSObject <TASSpacesNavigatableObserver, TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *session;
}

@property (nonatomic, readonly) NSString *playerIdentifier;

/* class methods */
+ (id)shared;

/* instance methods */
- (void)accountDidLeave;
- (void)spaceNavigation:(id)navigation didTransitionToSpaceModel:(id)model;
- (void)spaceNavigation:(id)navigation didLeaveSpaceAndWillResetSpaceModel:(id)model;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)dismissEndedVideoWhenActive;
- (void)playerDidStopNativePictureInPicture:(id)picture;
- (void)player:(id)player restoreInterfaceForNativePictureInPictureWithCompletion:(id /* block */)completion;
- (id)init;
- (void)pauseForImmersiveUnlessOwning:(id)owning;
- (void)immersiveDidDismiss;
- (void)presentImmersiveViewer;
- (_Bool)startWithPlayer:(id)player playerView:(id)view playerSessionProducer:(id)producer status:(id)status broadcast:(id)broadcast account:(id)account viewSource:(long long)source scribeContext:(id)context mediaIndex:(long long)index completion:(id /* block */)completion;

@end

#endif /* T1ImmersiveNativePictureInPictureSession_h */

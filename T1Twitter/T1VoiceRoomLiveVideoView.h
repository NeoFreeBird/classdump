//
#ifndef T1VoiceRoomLiveVideoView_h
#define T1VoiceRoomLiveVideoView_h
@import Foundation;

#include "TASSpaceModel-Protocol.h"
#include "TASSpaceModelObserver-Protocol.h"

@class UICollectionReusableView;

@interface T1VoiceRoomLiveVideoView : UICollectionReusableView <TASSpaceModelObserver> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *liveVideoView;
    NSNumber"16@0:8 *$__lazy_storage_$_fullScreenButton;
    NSNumber"16@0:8 *$__lazy_storage_$_selectNextPhoneCameraButton;
    NSNumber"16@0:8 *$__lazy_storage_$_toolbarView;
    NSNumber"16@0:8 *$__lazy_storage_$_liveVideoContainerView;
}

@property (nonatomic, retain) id <TASSpaceModel> spaceModel;

/* class methods */
+ (id)reuseIdentifier;

/* instance methods */
- (void)didTapSelectNextPhoneCamera;
- (void)didTapFullScreenButton;
- (void)spaceModelDidUpdateLiveVideoView:(id)view;
- (void)spaceModelDidChangeConnectionState:(id)state fromState:(long long)state;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* T1VoiceRoomLiveVideoView_h */

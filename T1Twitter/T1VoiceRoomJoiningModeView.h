//
#ifndef T1VoiceRoomJoiningModeView_h
#define T1VoiceRoomJoiningModeView_h
@import Foundation;

#include "T1VoiceRoomJoiningModeSelectionView.h"
#include "T1VoiceRoomJoiningModeSelectionViewDelegate-Protocol.h"
#include "TASSpaceModel-Protocol.h"
#include "TASSpaceModelObserver-Protocol.h"

@class NSString, UILabel, UIStackView, UISwitch, UIView;

@interface T1VoiceRoomJoiningModeView : UIStackView <T1VoiceRoomJoiningModeSelectionViewDelegate, TASSpaceModelObserver>

@property (retain, nonatomic) UIView *incognitoView;
@property (retain, nonatomic) UILabel *incognitoLabel;
@property (retain, nonatomic) UISwitch *incognitoSwitch;
@property (retain, nonatomic) UIView *speakerOrListenerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) T1VoiceRoomJoiningModeSelectionView *joinAsListenerSelectionView;
@property (retain, nonatomic) T1VoiceRoomJoiningModeSelectionView *joinAsSpeakerSelectionView;
@property (retain, nonatomic) id <TASSpaceModel> spaceModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)hasJoinModeWithSpaceModel:(id)model;
+ (_Bool)hasIcognitoJoinModeWithSpaceModel:(id)model;
+ (_Bool)hasAutomaticJoiningAsSpeakerJoinModeWithSpaceModel:(id)model;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)spaceModel:(id)model didUpdateSettings:(id)settings;
- (void)spaceModel:(id)model didUpdateIsIncognito:(_Bool)incognito;
- (void)spaceModel:(id)model didUpdateAutomaticJoiningAsSpeakerStatus:(long long)status;
- (void)_t1_updateSpaceModelState;
- (void)incognitoSwitchValueChanged:(id)changed;
- (void)joiningModeSelectionViewDidTap:(id)tap;
- (void)_t1_logClickActionOnElement:(id)element;

@end

#endif /* T1VoiceRoomJoiningModeView_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceRoomDimmingView_h
#define T1VoiceRoomDimmingView_h
@import Foundation;

#include "T1VoiceRoomDimmingViewDelegate-Protocol.h"
#include "TASSpaceModel-Protocol.h"
#include "TASSpaceModelObserver-Protocol.h"
#include "TSFExclusiveSpaceNotSuperFollowingErrorView.h"
#include "TSFExclusiveSpaceNotSuperFollowingErrorViewDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, UIView;

@interface T1VoiceRoomDimmingView : UIView <TASSpaceModelObserver, TSFExclusiveSpaceNotSuperFollowingErrorViewDelegate>

@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UILabel *errorDetailsLabel;
@property (retain, nonatomic) UIImageView *errorImageView;
@property (nonatomic) _Bool showingError;
@property (nonatomic) double preferredHeight;
@property (retain, nonatomic) TSFExclusiveSpaceNotSuperFollowingErrorView *exclusiveSpaceErrorView;
@property (retain, nonatomic) id <TASSpaceModel> spaceModel;
@property (weak, nonatomic) id <T1VoiceRoomDimmingViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateExclusiveSpaceErrorViewSpaceModel;
- (void)spaceModelDidChangeConnectionState:(id)state fromState:(long long)state;
- (void)spaceModel:(id)model didChangeTitleValue:(id)value;
- (void)spaceModel:(id)model didUpdateUsersModels:(id)models;
- (void)exclusiveSpaceNotSuperFollowingErrorView:(id)view didTapSuperFollowButton:(id)button;
- (_Bool)isShowingError;

@end

#endif /* T1VoiceRoomDimmingView_h */

//
#ifndef T1VoiceRoomPrivateNotificationView_h
#define T1VoiceRoomPrivateNotificationView_h
@import Foundation;

#include "TASSpaceModel-Protocol.h"
#include "TASSpaceModelObserver-Protocol.h"

@class NSString, TFNUnboundedContainerView, TFSTimer, TIPImagePipeline, UIView;

@interface T1VoiceRoomPrivateNotificationView : TFNUnboundedContainerView <TASSpaceModelObserver>

@property (retain, nonatomic) UIView *currentView;
@property (retain, nonatomic) TFSTimer *hideCurrentViewTimer;
@property (retain, nonatomic) id <TASSpaceModel> spaceModel;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_t1_pushViewWithEmoji:(id)emoji user:(id)user attributedText:(id)text;
- (void)_t1_hideCurrentView;
- (void)_t1_hideView:(id)view;
- (void)spaceModel:(id)model didReceiveEmoji:(id)emoji privately:(_Bool)privately fromUser:(id)user;
- (void)spaceModel:(id)model didSendPrivateEmoji:(id)emoji toUser:(id)user;
- (id)_t1_attributedTextWithFormat:(id)format userModel:(id)model;

@end

#endif /* T1VoiceRoomPrivateNotificationView_h */

//
#ifndef PTVParticipantsBarCellView_h
#define PTVParticipantsBarCellView_h
@import Foundation;

#include "PTVHeartView.h"
#include "PTVParticipantsBarAvatarView.h"
#include "PTVParticipantsBarCellViewDelegate-Protocol.h"
#include "PTVTypingLetterAnimator.h"

@class UICollectionViewCell;

@interface PTVParticipantsBarCellView : UICollectionViewCell {
    /* instance variables */
    PTVParticipantsBarCellView *_weakSelf;
    double _lastHeartBeatStartedAt;
    PTVTypingLetterAnimator *_typingLetterAnimator;
}

@property (retain, nonatomic) PTVHeartView *heartView;
@property (retain, nonatomic) PTVParticipantsBarAvatarView *avatarView;
@property (weak, nonatomic) id <PTVParticipantsBarCellViewDelegate> delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)_participantBarCellViewInit;
- (void)applyLayoutAttributes:(id)attributes;
- (void)handleTap;
- (void)handleLongPress;
- (void)configureWithParticipant:(id)participant;
- (void)setGiftingProgress:(double)progress withParticipantIndex:(long long)index;
- (void)setShowGiftingProgress:(_Bool)progress;
- (void)setImageEntity:(id)entity formatType:(unsigned long long)type;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForHeartView;
- (void)showHeartView:(_Bool)view;
- (void)beatHeart;
- (void)didFinishHeartBeatStartedAt:(double)at;
- (void)animateHeartBeatWithCompletion:(id /* block */)completion;
- (void)showTypingAnimation;
- (void)fadeOutAfterDelay:(double)delay;

@end

#endif /* PTVParticipantsBarCellView_h */

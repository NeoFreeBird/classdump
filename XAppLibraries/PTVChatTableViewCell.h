//
#ifndef PTVChatTableViewCell_h
#define PTVChatTableViewCell_h
@import Foundation;

#include "PTVChatTableViewCellDelegate-Protocol.h"
#include "PTVTableViewCell.h"

@class NSArray, NSDate, UITapGestureRecognizer;

@interface PTVChatTableViewCell : PTVTableViewCell {
    /* instance variables */
    UITapGestureRecognizer *_tap;
}

@property (weak, nonatomic) id <PTVChatTableViewCellDelegate> delegate;
@property (readonly, nonatomic) NSDate *fadeOutStartDate;
@property (readonly, nonatomic) NSArray *fadeOutValues;
@property (readonly, nonatomic) NSArray *fadeOutKeyTimes;
@property (readonly, nonatomic) double fadeOutDuration;
@property (nonatomic) _Bool useLargeChatFont;

/* instance methods */
- (void)dealloc;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)prepareForReuse;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)containerView;
- (void)executeState;
- (void)alphaState;
- (void)updateFadeOutFromMessage:(id)message;
- (void)beginFadeOutAnimationWithDelay:(double)delay duration:(double)duration values:(id)values keyTimes:(id)times;
- (void)beginFadeInAnimation;
- (void)resetFadeAnimations;
- (void)handleTap;
- (void)didTapMessage:(id)message;

@end

#endif /* PTVChatTableViewCell_h */

//
#ifndef PTVCountdownGuestCallTableViewCell_h
#define PTVCountdownGuestCallTableViewCell_h
@import Foundation;

#include "PTVCameraPreviewGuestCallContentView.h"
#include "PTVCountdownGuestCallTableViewCellDelegate-Protocol.h"
#include "PTVExtendedButton.h"

@class NSDate, NSTimer, UIActivityIndicatorView, UILabel, UITableViewCell;

@interface PTVCountdownGuestCallTableViewCell : UITableViewCell {
    /* instance variables */
    PTVCountdownGuestCallTableViewCell *_weakSelf;
    UILabel *_titleLabel;
    PTVCameraPreviewGuestCallContentView *_cameraPreview;
    UILabel *_countdownLabel;
    NSDate *_countdownEndDate;
    _Bool _shouldScaleCountdownLabelUp;
    UIActivityIndicatorView *_activityIndicatorView;
    PTVExtendedButton *_cancelButton;
}

@property (retain, nonatomic) NSTimer *countdownTimer;
@property (weak, nonatomic) id <PTVCountdownGuestCallTableViewCellDelegate> delegate;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)setTitleAttributed:(id)attributed;
- (void)setCountdownEndDate:(id)date;
- (void)timerDidFire;
- (void)updateCountdownLabelShouldAnimateScale:(_Bool)scale;
- (void)setShouldScaleCountdownLabelUp:(_Bool)up;
- (void)updateCountdownLabelTransform;
- (void)setGuestView:(id)view;
- (void)setParticipantIndex:(long long)index;
- (void)cancelButtonPressed;

@end

#endif /* PTVCountdownGuestCallTableViewCell_h */

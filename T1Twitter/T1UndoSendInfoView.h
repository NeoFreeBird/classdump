//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UndoSendInfoView_h
#define T1UndoSendInfoView_h
@import Foundation;

#include "T1UndoSendInfoViewDelegate-Protocol.h"

@class UIView;

@interface T1UndoSendInfoView : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *progressLayer;
    NSNumber"16@0:8 *progressBackgroundLayer;
    NSNumber"16@0:8 *sendNowButton;
    NSNumber"16@0:8 *sendTweetLabel;
    NSNumber"16@0:8 *undoButton;
    NSNumber"16@0:8 *tweetQueuedDate;
    NSNumber"16@0:8 *tweetSendDate;
    NSNumber"16@0:8 *labelProgressText;
}

@property (nonatomic, weak) id <T1UndoSendInfoViewDelegate> delegate;
@property (nonatomic) _Bool isSendNowButtonHidden;
@property (nonatomic) _Bool hasAttachments;

/* class methods */
+ (double)desiredHeightForWidth:(double)width andSendNowButtonHidden:(_Bool)hidden;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)updateWithTweetQueuedDate:(id)date tweetSendDate:(id)date;
- (void)updateViewContextForSending;
- (void)cancelProgress;
- (void)didTapSendNowButton;
- (void)didTapUndoButton;

@end

#endif /* T1UndoSendInfoView_h */

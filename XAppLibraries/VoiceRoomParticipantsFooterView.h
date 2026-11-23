//
#ifndef VoiceRoomParticipantsFooterView_h
#define VoiceRoomParticipantsFooterView_h
@import Foundation;

#include "VoiceRoomParticipantsFooterViewDelegate-Protocol.h"

@class UICollectionReusableView;

@interface VoiceRoomParticipantsFooterView : UICollectionReusableView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 containerView;
    @40@0:8:16@24@32 participantsCountLabel;
    @40@0:8:16@24@32 rightArrowImageView;
    @40@0:8:16@24@32 participantsCount;
    @40@0:8:16@24@32 isEnabled;
}

@property (nonatomic, weak) id <VoiceRoomParticipantsFooterViewDelegate> delegate;

/* instance methods */
- (void)configureWithSpaceModel:(id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTouchDown:(id)down;
- (void)didTap:(id)tap;

@end

#endif /* VoiceRoomParticipantsFooterView_h */

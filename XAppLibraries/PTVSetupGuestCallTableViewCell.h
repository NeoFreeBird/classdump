//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVSetupGuestCallTableViewCell_h
#define PTVSetupGuestCallTableViewCell_h
@import Foundation;

#include "PTVSetupGuestCallTableViewCellDelegate-Protocol.h"
#include "PTVTableViewCell.h"
#include "PTVVideoOrAudioOnlyButton.h"

@interface PTVSetupGuestCallTableViewCell : PTVTableViewCell {
    /* instance variables */
    PTVVideoOrAudioOnlyButton *_videoButton;
    PTVVideoOrAudioOnlyButton *_audioOnlyButton;
}

@property (weak, nonatomic) id <PTVSetupGuestCallTableViewCellDelegate> delegate;

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })buttonSize;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)createVideoButtonIfNeeded;
- (void)setVideoPreviewView:(id)view;
- (void)createAudioOnlyButtonIfNeeded;
- (void)setAudioPreviewView:(id)view;
- (void)setGuestParticipantIndex:(long long)index;
- (void)didTapVideoButton;
- (void)didTapAudioOnlyButton;

@end

#endif /* PTVSetupGuestCallTableViewCell_h */

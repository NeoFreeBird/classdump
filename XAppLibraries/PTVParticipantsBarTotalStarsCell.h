//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVParticipantsBarTotalStarsCell_h
#define PTVParticipantsBarTotalStarsCell_h
@import Foundation;

#include "PTVParticipantsBarTotalStarsCellDelegate-Protocol.h"

@class UICollectionViewCell, UIImageView, UILabel;

@interface PTVParticipantsBarTotalStarsCell : UICollectionViewCell {
    /* instance variables */
    UIImageView *_starImageView;
    UILabel *_totalLabel;
}

@property (weak, nonatomic) id <PTVParticipantsBarTotalStarsCellDelegate> delegate;

/* class methods */
+ (struct CGSize { double x0; double x1; })SizeForTotal:(long long)total;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)didTap;
- (void)layoutSubviews;
- (void)setTotal:(long long)total;
- (void)setLabelHidden:(_Bool)hidden;

@end

#endif /* PTVParticipantsBarTotalStarsCell_h */

//
#ifndef PTVBroadcastEditThumbnailCollectionViewCell_h
#define PTVBroadcastEditThumbnailCollectionViewCell_h
@import Foundation;

#include "PTVReplayThumbnail.h"
#include "PTVScrubbingThumbnailView.h"

@class UICollectionViewCell, UILabel, UIView;

@interface PTVBroadcastEditThumbnailCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) PTVScrubbingThumbnailView *thumbnailView;
@property (readonly, nonatomic) UIView *thumbnailMaskView;
@property (readonly, nonatomic) UILabel *previewTimeLabel;
@property (nonatomic) _Bool isFocusedThumbnail;
@property (retain, nonatomic) PTVReplayThumbnail *thumbnail;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setIsFocusedThumbnail:(_Bool)thumbnail animated:(_Bool)animated;
- (void)executeState;

@end

#endif /* PTVBroadcastEditThumbnailCollectionViewCell_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1FoundMediaItemAttributionView_h
#define T1FoundMediaItemAttributionView_h
@import Foundation;

@class TFSTwitterFoundMediaItem, UIImageView, UILabel, UIView;

@interface T1FoundMediaItemAttributionView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) TFSTwitterFoundMediaItem *foundMediaItem;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_layoutView:(id)view withFitSize:(struct CGSize { double x0; double x1; })size truncating:(_Bool)truncating updatingBounds:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)bounds;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_updateFoundMediaItem;
- (id)_provideIconImageForProvider:(id)provider;

@end

#endif /* T1FoundMediaItemAttributionView_h */

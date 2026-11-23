//
#ifndef _TtC14T1TwitterSwift23EditorEducationHeroView_h
#define _TtC14T1TwitterSwift23EditorEducationHeroView_h
@import Foundation;

@class T1TwitterSwift.ThumbnailCardView, UIView, _$sSa -> T1TwitterSwift.FeatureBadgeView;

@interface T1TwitterSwift.EditorEducationHeroView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> T1TwitterSwift.FeatureBadgeView featureBadges;
    T1TwitterSwift.ThumbnailCardView backCard;
    T1TwitterSwift.ThumbnailCardView frontCard;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift23EditorEducationHeroView_h */

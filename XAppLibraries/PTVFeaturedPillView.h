//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVFeaturedPillView_h
#define PTVFeaturedPillView_h
@import Foundation;

@class NSString, UILabel, UIView;

@interface PTVFeaturedPillView : UIView {
    /* instance variables */
    UILabel *_featuredLabel;
    UIView *_pillOverrideView;
    NSString *_featuredLabelOverride;
    NSString *_colorHex;
}

/* instance methods */
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setFeaturedLabelOverride:(id)override;
- (void)setFeaturedColor:(id)color;
- (id)featuredAttributed;

@end

#endif /* PTVFeaturedPillView_h */

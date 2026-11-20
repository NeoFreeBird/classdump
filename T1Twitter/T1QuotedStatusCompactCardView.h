//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1QuotedStatusCompactCardView_h
#define T1QuotedStatusCompactCardView_h
@import Foundation;

@class UIView;

@interface T1QuotedStatusCompactCardView : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *tapHandler;
    NSNumber"16@0:8 *content;
    NSNumber"16@0:8 *layoutParameters;
    NSNumber"16@0:8 *thumbnailView;
    NSNumber"16@0:8 *titleLabel;
    NSNumber"16@0:8 *domainLabel;
    NSNumber"16@0:8 *tapHighlightView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didTap;

@end

#endif /* T1QuotedStatusCompactCardView_h */

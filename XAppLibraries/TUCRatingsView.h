//
#ifndef TUCRatingsView_h
#define TUCRatingsView_h
@import Foundation;

@class UIView;

@interface TUCRatingsView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 ratingsLabel;
    @40@0:8:16@24@32 starSubviews;
}

/* class methods */
+ (double)expectedHeight;
+ (void)setExpectedHeight:(double)height;
+ (id)starTypesForRatingScore:(double)score;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setRatingStars:(double)stars ratingCount:(id)count useSimpleRatingsText:(_Bool)text;

@end

#endif /* TUCRatingsView_h */

//
#ifndef _TtC14T1TwitterSwift44URTTimelinePagedCarouselItemFeedbackItemView_h
#define _TtC14T1TwitterSwift44URTTimelinePagedCarouselItemFeedbackItemView_h
@import Foundation;

@class T1TwitterSwift.URTTimelinePagedCarouselItemFeedbackItemTweetView, T1TwitterSwift.URTTimelinePagedCarouselItemFeedbackItemViewDelegate ?, TFNCollectionViewCell, _$sSo11UIStackViewC, _$sSo23TFSTwitterScribeContextCSg, _$sSo9TFNButtonC;

@interface T1TwitterSwift.URTTimelinePagedCarouselItemFeedbackItemView : TFNCollectionViewCell { // (Swift)
    /* instance variables */
    T1TwitterSwift.URTTimelinePagedCarouselItemFeedbackItemViewDelegate ? delegate;
    __C.TFSTwitterScribeContext? scribeContext;
    __C.TFNButton isRelevantButton;
    __C.TFNButton notRelevantButton;
    __C.UIStackView buttonStackView;
    T1TwitterSwift.URTTimelinePagedCarouselItemFeedbackItemTweetView tweetView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (void)accessibilityElementDidBecomeFocused:(id)focused;
- (void)didTapShowMoreButton:(id)button;
- (void)didTapShowLessButton:(id)button;

@end

#endif /* _TtC14T1TwitterSwift44URTTimelinePagedCarouselItemFeedbackItemView_h */

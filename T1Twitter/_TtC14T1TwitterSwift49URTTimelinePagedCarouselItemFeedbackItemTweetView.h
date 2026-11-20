//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift49URTTimelinePagedCarouselItemFeedbackItemTweetView_h
#define _TtC14T1TwitterSwift49URTTimelinePagedCarouselItemFeedbackItemTweetView_h
@import Foundation;

#include "TVPPlayerSessionSource-Protocol.h"

@class NSIndexPath, T1TwitterSwift.URTTimelinePagedCarouselItemFeedbackItemTweetView.ViewModel ?, T1TwitterSwift.URTTimelinePagedCarouselItemFeedbackItemTweetViewDelegate ?, UIImage, UIView, _$sSo23TFSTwitterScribeContextCSg, _$sSo26T1QuotedStandardStatusViewC;

@interface T1TwitterSwift.URTTimelinePagedCarouselItemFeedbackItemTweetView : UIView { // (Swift)
    /* instance variables */
    __C.TFSTwitterScribeContext? scribeContext;
    T1TwitterSwift.URTTimelinePagedCarouselItemFeedbackItemTweetViewDelegate ? delegate;
    T1TwitterSwift.URTTimelinePagedCarouselItemFeedbackItemTweetView.ViewModel ? viewModel;
    __C.T1QuotedStandardStatusView statusView;
}

@property (nonatomic, readonly) NSIndexPath *currentIndexPath;
@property (nonatomic, readonly) id <TVPPlayerSessionSource> playerSessionSource;
@property (nonatomic, readonly) UIView *playerContainerView;
@property (nonatomic, readonly) UIImage *playerPreviewImage;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC14T1TwitterSwift49URTTimelinePagedCarouselItemFeedbackItemTweetView_h */

//
#ifndef _TtC20TwitterCommunitiesUI25SelectedTweetAudienceView_h
#define _TtC20TwitterCommunitiesUI25SelectedTweetAudienceView_h
@import Foundation;

#include "TUIDimmableView.h"

@class TwitterCommunitiesUI.SelectedTweetAudienceViewDelegate ?, TwitterCommunitiesUI.SelectedTweetAudienceViewPresentationMode, TwitterCommunitiesUI.TweetAudienceSelectionItem, _$sSo9TFNButtonCSg;

@interface TwitterCommunitiesUI.SelectedTweetAudienceView : TUIDimmableView { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.SelectedTweetAudienceViewDelegate ? delegate;
    TwitterCommunitiesUI.TweetAudienceSelectionItem selectedAudience;
    TwitterCommunitiesUI.SelectedTweetAudienceViewPresentationMode presentationMode;
    __C.TFNButton? $__lazy_storage_$_buttonView;
}

@property (nonatomic) _Bool userInteractionEnabled;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didTapButtonView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)isUserInteractionEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC20TwitterCommunitiesUI25SelectedTweetAudienceView_h */

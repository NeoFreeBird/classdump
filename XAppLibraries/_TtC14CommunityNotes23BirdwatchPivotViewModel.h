//
#ifndef _TtC14CommunityNotes23BirdwatchPivotViewModel_h
#define _TtC14CommunityNotes23BirdwatchPivotViewModel_h
@import Foundation;

@class CommunityNotes.BirdwatchPivotActionViewModel ?, NSObject, Swift.Bool, TFNAttributedTextModel, TweetDetails.GrokTranslateButtonView.Config ?, TweetDetails.GrokTranslateButtonViewState ?, UIImage, _$s14TFSTwitterCore21TwitterBirdwatchPivotCMn, _$sSo22TFNAttributedTextModelCSg, _$sSo28TFNAttributedActiveTextModelCSg;

@interface CommunityNotes.BirdwatchPivotViewModel : NSObject { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSTwitterCore.TwitterBirdwatchPivot birdwatchPivot;
    Swift.Bool isQuoted;
    Swift.Bool isTentative;
    Swift.Bool forChat;
    TweetDetails.GrokTranslateButtonViewState ? translationState;
    TweetDetails.GrokTranslateButtonView.Config ? translationConfig;
    Swift.Bool isAutoTranslateEnabled;
    __C.TFNAttributedActiveTextModel? _titleFooterTextModel;
    __C.TFNAttributedActiveTextModel? _subtitleTextModel;
    __C.TFNAttributedActiveTextModel? _linkTextModel;
    __C.TFNAttributedActiveTextModel? _footerTextModel;
    CommunityNotes.BirdwatchPivotActionViewModel ? _actionViewModel;
}

@property (nonatomic, readonly) UIImage *eyeOffIcon;
@property (nonatomic, readonly) TFNAttributedTextModel *titleTextModel;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* _TtC14CommunityNotes23BirdwatchPivotViewModel_h */

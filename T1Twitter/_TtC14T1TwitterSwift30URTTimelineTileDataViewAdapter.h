//
#ifndef _TtC14T1TwitterSwift30URTTimelineTileDataViewAdapter_h
#define _TtC14T1TwitterSwift30URTTimelineTileDataViewAdapter_h
@import Foundation;

#include "T1TimelinesCarouselCollectionViewItemSizeProvider-Protocol.h"

@class NSObject, T1TwitterSwift.LiveBannerItemView, T1TwitterSwift.LiveBannerScribe, _$s10TwitterURT20URTFeedbackPresenterMp, _$sSo16TIPImagePipelineC, _$sSo17TFNTwitterAccountC, _$sSo26TFNItemsDataViewControllerCSgXw, _$sSuSg;

@interface T1TwitterSwift.URTTimelineTileDataViewAdapter : NSObject <T1TimelinesCarouselCollectionViewItemSizeProvider> { // (Swift)
    /* instance variables */
    weak __C.TFNItemsDataViewController? latestController;
    protocol descriptor for TwitterURT.URTFeedbackPresenter feedbackPresenter;
    T1TwitterSwift.LiveBannerScribe liveBannerScribe;
    __C.TIPImagePipeline imagePipeline;
    __C.TFNTwitterAccount account;
    T1TwitterSwift.LiveBannerItemView sizingLiveBannerItemViewCompact;
    Swift.UInt? customTileTitleLineCount;
}

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeForItemInCarouselCollectionViewLayout:(id)layout;
- (void)didTapTileCaret:(id)caret;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift30URTTimelineTileDataViewAdapter_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift19SurveyCardViewModel_h
#define _TtC14T1TwitterSwift19SurveyCardViewModel_h
@import Foundation;

@class NSObject, Swift.Bool, T1TwitterSwift.Survey ?, T1TwitterSwift.SurveyCardResponse ?, T1TwitterSwift.SurveyCardView ?, T1TwitterSwift.SurveyCardViewModelDelegate ?, _$sSa -> T1TwitterSwift.SurveyCardPage ?, _$sSbSg, _$sSiSg, _$sSo21TFNTwitterCardContextC, _$sSo28TFCCardPersistedStateManagerCSgSg;

@interface T1TwitterSwift.SurveyCardViewModel : NSObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.Survey ? survey;
    __C.TFNTwitterCardContext cardContext;
    Swift.Bool fullScreen;
    Swift.Bool completedInFullScreen;
    T1TwitterSwift.SurveyCardView ? surveyCardView;
    T1TwitterSwift.SurveyCardViewModelDelegate ? delegate;
    Swift.Int? $__lazy_storage_$_numberOfPages;
    Swift.Array -> T1TwitterSwift.SurveyCardPage ? $__lazy_storage_$_surveyPages;
    T1TwitterSwift.SurveyCardResponse ? $__lazy_storage_$_response;
    __C.TFCCardPersistedStateManager?? $__lazy_storage_$_cardPersistedStateManager;
    Swift.Bool? $__lazy_storage_$_didCompleteSurvey;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift19SurveyCardViewModel_h */

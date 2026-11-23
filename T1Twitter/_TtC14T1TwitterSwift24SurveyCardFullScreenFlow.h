//
#ifndef _TtC14T1TwitterSwift24SurveyCardFullScreenFlow_h
#define _TtC14T1TwitterSwift24SurveyCardFullScreenFlow_h
@import Foundation;

@class NSObject, T1TwitterSwift.SurveyCardActionViewModel ?, T1TwitterSwift.SurveyCardView ?, T1TwitterSwift.SurveyCardViewModel ?, _$sSo15UIBarButtonItemCSg, _$sSo21TFNTwitterCardContextC, _$sSo22UINavigationControllerCSgXw;

@interface T1TwitterSwift.SurveyCardFullScreenFlow : NSObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.SurveyCardActionViewModel ? actionViewModel;
    __C.UIBarButtonItem? $__lazy_storage_$_actionButton;
    __C.UIBarButtonItem? $__lazy_storage_$_closeButton;
    T1TwitterSwift.SurveyCardViewModel ? $__lazy_storage_$_surveyModel;
    T1TwitterSwift.SurveyCardView ? surveyCardView;
    __C.TFNTwitterCardContext cardContext;
    weak __C.UINavigationController? stack;
}

/* instance methods */
- (void)closePressed;
- (void)didTapActionButton;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift24SurveyCardFullScreenFlow_h */

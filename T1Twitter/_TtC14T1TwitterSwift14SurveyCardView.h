//
#ifndef _TtC14T1TwitterSwift14SurveyCardView_h
#define _TtC14T1TwitterSwift14SurveyCardView_h
@import Foundation;

@class T1TwitterSwift.SurveyCardActionViewEventHandler ?, T1TwitterSwift.SurveyCardActionViewModel ?, T1TwitterSwift.SurveyCardPageLayoutableView ?, T1TwitterSwift.SurveyCardViewEventRegistry, T1TwitterSwift.SurveyCardViewModel ?, TUICardView, _$sSo9TFNButtonCSg;

@interface T1TwitterSwift.SurveyCardView : TUICardView { // (Swift)
    /* instance variables */
    T1TwitterSwift.SurveyCardViewModel ? viewModel;
    T1TwitterSwift.SurveyCardViewEventRegistry viewEventRegistry;
    T1TwitterSwift.SurveyCardPageLayoutableView ? currentPageView;
    T1TwitterSwift.SurveyCardActionViewModel ? actionViewModel;
    __C.TFNButton? $__lazy_storage_$_actionButton;
    T1TwitterSwift.SurveyCardActionViewEventHandler ? $__lazy_storage_$_actionEventHandler;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)cardContextDidUpdate;
- (void)choiceChangedWithNotification:(id)notification;
- (void)pageChangedWithNotification:(id)notification;
- (void)didPressActionButton:(id)button;

@end

#endif /* _TtC14T1TwitterSwift14SurveyCardView_h */

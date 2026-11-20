//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift26SurveyCardQuestionPageView_h
#define _TtC14T1TwitterSwift26SurveyCardQuestionPageView_h
@import Foundation;

#include "_TtC14T1TwitterSwift28SurveyCardPageLayoutableView.h"

@class T1TwitterSwift.Survey.Question ?, T1TwitterSwift.SurveyCardQuestionPageInfo ?, _$sSa -> T1TwitterSwift.Survey.Question.Choice, _$sSbSg, _$sSi, _$sSo11UIStackViewCSg, _$sSo7UILabelCSg;

@interface T1TwitterSwift.SurveyCardQuestionPageView : T1TwitterSwift.SurveyCardPageLayoutableView { // (Swift)
    /* instance variables */
    __C.UILabel? $__lazy_storage_$_titleLabel;
    __C.UILabel? $__lazy_storage_$_questionIndexLabel;
    __C.UIStackView? $__lazy_storage_$_choicesStackView;
    Swift.Array -> T1TwitterSwift.Survey.Question.Choice selectedChoices;
    T1TwitterSwift.SurveyCardQuestionPageInfo ? pageInfo;
    T1TwitterSwift.Survey.Question ? question;
    Swift.Bool? fullScreen;
    Swift.Int randomSeed;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift26SurveyCardQuestionPageView_h */

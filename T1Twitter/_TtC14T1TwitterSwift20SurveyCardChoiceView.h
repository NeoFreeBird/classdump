//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift20SurveyCardChoiceView_h
#define _TtC14T1TwitterSwift20SurveyCardChoiceView_h
@import Foundation;

@class T1TwitterSwift.Survey.Question.Cardinality, T1TwitterSwift.Survey.Question.Choice ?, T1TwitterSwift.SurveyCardChoiceViewDelegate ?, T1TwitterSwift.SurveyCardSelectionControl ?, UIView, _$sSo7UILabelCSg;

@interface T1TwitterSwift.SurveyCardChoiceView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.Survey.Question.Cardinality cardinality;
    __C.UILabel? $__lazy_storage_$_choiceTitleLabel;
    T1TwitterSwift.SurveyCardSelectionControl ? $__lazy_storage_$_checkMarkControl;
    T1TwitterSwift.SurveyCardChoiceViewDelegate ? delegate;
    T1TwitterSwift.Survey.Question.Choice ? choice;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didSelectCheckMark;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift20SurveyCardChoiceView_h */

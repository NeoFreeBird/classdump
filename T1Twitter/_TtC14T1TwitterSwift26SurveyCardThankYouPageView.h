//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift26SurveyCardThankYouPageView_h
#define _TtC14T1TwitterSwift26SurveyCardThankYouPageView_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "_TtC14T1TwitterSwift28SurveyCardPageLayoutableView.h"

@class _$sSo21TFNAttributedTextViewCSg, _$sSo7UILabelCSg;

@interface T1TwitterSwift.SurveyCardThankYouPageView : T1TwitterSwift.SurveyCardPageLayoutableView <TFNAttributedTextViewDelegate> { // (Swift)
    /* instance variables */
    __C.UILabel? $__lazy_storage_$_titleLabel;
    __C.TFNAttributedTextView? $__lazy_storage_$_detailsTextView;
}

/* instance methods */
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift26SurveyCardThankYouPageView_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XAutocomplete32AutocompleteResultsContainerView_h
#define _TtC13XAutocomplete32AutocompleteResultsContainerView_h
@import Foundation;

#include "_TtC13XAutocomplete15PassthroughView.h"

@class _$sSaySo18NSLayoutConstraintCG, _$sSo13UILayoutGuideC, _$sSo6UIViewCSg, __C.CGRect ?;

@interface XAutocomplete.AutocompleteResultsContainerView : XAutocomplete.PassthroughView { // (Swift)
    /* instance variables */
    __C.CGRect ? sourceRect;
    __C.UIView? contentView;
    __C.UILayoutGuide caretLayoutGuide;
    [__C.NSLayoutConstraint] caretConstraints;
    [__C.NSLayoutConstraint] contentConstraints;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC13XAutocomplete32AutocompleteResultsContainerView_h */

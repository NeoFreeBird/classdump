//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8PaymentsP33_C2CDEB99E8C312CCA4C3B801739DB74F18AddressResultsView_h
#define _TtC8PaymentsP33_C2CDEB99E8C312CCA4C3B801739DB74F18AddressResultsView_h
@import Foundation;

@class UIView;

@interface Payments.(AddressResultsView in _C2CDEB99E8C312CCA4C3B801739DB74F) : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 onPick;
    @40@0:8:16@24@32 onEnterManually;
    @40@0:8:16@24@32 list;
    @40@0:8:16@24@32 completions;
    @40@0:8:16@24@32 loadingCompletion;
    @40@0:8:16@24@32 isShowing;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC8PaymentsP33_C2CDEB99E8C312CCA4C3B801739DB74F18AddressResultsView_h */

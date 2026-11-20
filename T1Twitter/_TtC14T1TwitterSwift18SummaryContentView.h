//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift18SummaryContentView_h
#define _TtC14T1TwitterSwift18SummaryContentView_h
@import Foundation;

@class NSString, UIView, _$s10TwitterURT34URTTimelineGenericSummaryViewModelCMn ?, _$s14TwitterUISwift19UserAttributionViewCMn ?, _$sSo11UIImageViewCSg, _$sSo7UILabelCSg;

@interface T1TwitterSwift.SummaryContentView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for TwitterURT.URTTimelineGenericSummaryViewModel ? viewModel;
    nominal type descriptor for TwitterUISwift.UserAttributionView ? userAttributionView;
    __C.UILabel? $__lazy_storage_$_contextLabel;
    __C.UIImageView? $__lazy_storage_$_contextIconView;
    __C.UILabel? $__lazy_storage_$_headlineLabel;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC14T1TwitterSwift18SummaryContentView_h */

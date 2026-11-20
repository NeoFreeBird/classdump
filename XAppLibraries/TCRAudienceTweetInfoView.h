//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRAudienceTweetInfoView_h
#define TCRAudienceTweetInfoView_h
@import Foundation;

@class NSString, UIView;

@interface TCRAudienceTweetInfoView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 isReply;
    @40@0:8:16@24@32 $__lazy_storage_$_contentViewLeadingConstraint;
    @40@0:8:16@24@32 $__lazy_storage_$_contentView;
    @40@0:8:16@24@32 $__lazy_storage_$_infoBarView;
    @40@0:8:16@24@32 $__lazy_storage_$_iconView;
    @40@0:8:16@24@32 $__lazy_storage_$_textView;
    @40@0:8:16@24@32 $__lazy_storage_$_topSeparator;
    @40@0:8:16@24@32 $__lazy_storage_$_bottomSeparator;
}

@property (nonatomic, copy) NSString *labelText;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic) double leadingContentInset;
@property (nonatomic, retain) UIView *topSeparator;
@property (nonatomic, retain) UIView *bottomSeparator;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame labelText:(id)text icon:(id)icon;
- (id)initWithCoder:(id)coder;
- (void)configureWithCompositions:(id)compositions;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TCRAudienceTweetInfoView_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNScrollViewRetractableBarHelper_h
#define TFNScrollViewRetractableBarHelper_h
@import Foundation;

@class NSObject, UIScrollView, UIView;
@protocol TFNScrollViewRetractableBarHelperDelegate;

@interface TFNScrollViewRetractableBarHelper : NSObject

@property (readonly, nonatomic) _Bool scrollViewContentOffsetTop;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UIView *retractableBar;
@property (weak, nonatomic) id <TFNScrollViewRetractableBarHelperDelegate> delegate;
@property (nonatomic) unsigned long long retractableBarState;
@property (nonatomic) _Bool retractableBarHidden;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } scrollViewContentInset;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } scrollViewVerticalScrollIndicatorInsets;

/* instance methods */
- (id)init;
- (id)initWithScrollView:(id)view retractableBar:(id)bar;
- (_Bool)isScrollViewContentOffsetTop;
- (_Bool)isRetractableBarHidden;
- (void)_tfn_setScrollViewContentOffsetToTop;
- (void)scrollViewDidScroll:(id)scroll;
- (void)_tfn_adjustContentOffset;
- (void)layoutRetractableBar;
- (void)_tfn_updateScrollViewContentAndVerticalScrollIndicatorInsets;

@end

#endif /* TFNScrollViewRetractableBarHelper_h */

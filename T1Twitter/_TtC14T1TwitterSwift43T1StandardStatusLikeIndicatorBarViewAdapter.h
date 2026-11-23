//
#ifndef _TtC14T1TwitterSwift43T1StandardStatusLikeIndicatorBarViewAdapter_h
#define _TtC14T1TwitterSwift43T1StandardStatusLikeIndicatorBarViewAdapter_h
@import Foundation;

@class T1TwitterSwift.IndicatorBarView ?, TFNComposableViewAdapter, _$sSd, __C.CGRect;

@interface T1TwitterSwift.T1StandardStatusLikeIndicatorBarViewAdapter : TFNComposableViewAdapter { // (Swift)
    /* instance variables */
    __C.CGRect size;
    Swift.Double animationDuration;
    T1TwitterSwift.IndicatorBarView ? indicatorBarView;
}

/* instance methods */
- (id)initializeView;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (void)layoutWithStatusViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setViewModel:(id)model forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (id)initWithViewIdentifier:(long long)identifier;

@end

#endif /* _TtC14T1TwitterSwift43T1StandardStatusLikeIndicatorBarViewAdapter_h */

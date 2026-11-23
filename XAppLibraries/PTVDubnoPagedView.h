//
#ifndef PTVDubnoPagedView_h
#define PTVDubnoPagedView_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIScrollView, UIView;
@protocol PTVPagedViewDelegate;

@interface PTVDubnoPagedView : UIView <UIScrollViewDelegate> {
    /* instance variables */
    NSArray *_pagedViews;
}

@property (readonly, nonatomic) UIScrollView *scrollView;
@property (nonatomic) int currentSegment;
@property (nonatomic) _Bool scrollEnabled;
@property (nonatomic) _Bool infiniteScrollEnabled;
@property (weak, nonatomic) id <PTVPagedViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)scroll;
- (id)initWithViews:(id)views;
- (void)setCurrentSegment:(int)segment animated:(_Bool)animated;
- (void)setClipsToBounds:(_Bool)bounds;
- (_Bool)equalsScrollView:(id)view;
- (_Bool)isScrollEnabled;

@end

#endif /* PTVDubnoPagedView_h */

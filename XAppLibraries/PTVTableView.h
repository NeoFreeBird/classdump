//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVTableView_h
#define PTVTableView_h
@import Foundation;

#include "PTVTableViewFullScreen-Protocol.h"
#include "PTVTableViewRefresh-Protocol.h"

@class UITableView, UIView;

@interface PTVTableView : UITableView {
    /* instance variables */
    PTVTableView *_weakSelf;
}

@property (retain, nonatomic) UIView<PTVTableViewFullScreen> *fullView;
@property (retain, nonatomic) id <PTVTableViewRefresh> tableViewRefreshControl;

/* instance methods */
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (_Bool)_observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)layoutSubviews;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })offset animated:(_Bool)animated;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame style:(long long)style;
- (void)layoutFullView;

@end

#endif /* PTVTableView_h */

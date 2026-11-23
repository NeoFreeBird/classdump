//
#ifndef _TtC7DMInbox26TableViewDelegateForwarder_h
#define _TtC7DMInbox26TableViewDelegateForwarder_h
@import Foundation;

#include "UITableViewDelegate-Protocol.h"

@class NSObject, _$sSo19UITableViewDelegate_pSgXw, _$sSo20UIScrollViewDelegate_pSgXw;

@interface DMInbox.TableViewDelegateForwarder : NSObject <UITableViewDelegate> { // (Swift)
    /* instance variables */
    weak __C.UITableViewDelegate? primaryDelegate;
    weak __C.UIScrollViewDelegate? scrollObserver;
}

/* instance methods */
- (_Bool)respondsToSelector:(SEL)selector;
- (id)forwardingTargetForSelector:(SEL)selector;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewWillBeginDecelerating:(id)decelerating;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (_Bool)scrollViewShouldScrollToTop:(id)top;
- (void)scrollViewDidScrollToTop:(id)top;
- (id)init;

@end

#endif /* _TtC7DMInbox26TableViewDelegateForwarder_h */

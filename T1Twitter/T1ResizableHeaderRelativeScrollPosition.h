//
#ifndef T1ResizableHeaderRelativeScrollPosition_h
#define T1ResizableHeaderRelativeScrollPosition_h
@import Foundation;

@class NSDictionary, NSObject, UIScrollView;

@interface T1ResizableHeaderRelativeScrollPosition : NSObject {
    /* instance variables */
    double _savedHeaderHeight;
    double _savedOverlap;
    NSDictionary *_savedAbsoluteScrollPosition;
    UIScrollView *_scrollView;
}

/* instance methods */
- (id)initForScrollView:(id)view;
- (void)saveRelativePositionForCurrentHeaderHeight:(double)height minimumContentOffset:(double)offset;
- (void)restoreRelativePositionForCurrentHeaderHeight:(double)height minimumContentOffset:(double)offset activeScrollView:(id)view;

@end

#endif /* T1ResizableHeaderRelativeScrollPosition_h */

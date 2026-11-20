//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

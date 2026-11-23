//
#ifndef T1ResizableHeaderRelativeScrollPositionStore_h
#define T1ResizableHeaderRelativeScrollPositionStore_h
@import Foundation;

@class NSMapTable, NSObject;

@interface T1ResizableHeaderRelativeScrollPositionStore : NSObject {
    /* instance variables */
    id /* block */ _currentHeaderHeightBlock;
    id /* block */ _minimumContentOffsetBlock;
    NSMapTable *_savedRelativePositionForContentScrollView;
}

/* instance methods */
- (id)initWithCurrentHeaderHeightBlock:(id /* block */)block minimumContentOffsetBlock:(id /* block */)block;
- (void)saveRelativePositionForScrollView:(id)view;
- (void)restoreRelativePositionForScrollView:(id)view activeScrollView:(id)view;
- (_Bool)hasSavedRelativePositionForScrollView:(id)view;

@end

#endif /* T1ResizableHeaderRelativeScrollPositionStore_h */

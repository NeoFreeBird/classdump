//
#ifndef T1TimelinesItemsCarouselScrollObserver_h
#define T1TimelinesItemsCarouselScrollObserver_h
@import Foundation;

#include "T1TimelinesItemsCarouselItemsContextProvider-Protocol.h"
#include "T1TimelinesItemsCarouselScrollObserverDelegate-Protocol.h"
#include "TFNProgrammaticScrollViewDelegate-Protocol.h"

@class NSIndexPath, NSObject, NSString;

@interface T1TimelinesItemsCarouselScrollObserver : NSObject <TFNProgrammaticScrollViewDelegate>

@property (retain, nonatomic) NSIndexPath *indexPathForCellInFocusBeforeSwipe;
@property (retain, nonatomic) NSIndexPath *indexPathForCellInFocusDuringSwipe;
@property (weak, nonatomic) id <T1TimelinesItemsCarouselItemsContextProvider> contextProvider;
@property (weak, nonatomic) id <T1TimelinesItemsCarouselScrollObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)scrollViewWillScrollProgrammatically:(id)programmatically animated:(_Bool)animated;
- (void)scrollViewDidScrollProgrammatically:(id)programmatically animated:(_Bool)animated;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)_t1_scrollViewDidScroll:(id)scroll endedScrolling:(_Bool)scrolling;
- (void)_t1_cleanupStateIndexPaths;

@end

#endif /* T1TimelinesItemsCarouselScrollObserver_h */

//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC14T1TwitterSwift29URTContentImpressionStateSync17ScrollMonitorLink_h
#define _TtCC14T1TwitterSwift29URTContentImpressionStateSync17ScrollMonitorLink_h
@import Foundation;

#include "TFNProgrammaticScrollViewDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSObject, T1TwitterSwift.URTContentImpressionStateSync ?;

@interface T1TwitterSwift.URTContentImpressionStateSync.ScrollMonitorLink : NSObject <UIScrollViewDelegate, TFNProgrammaticScrollViewDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.URTContentImpressionStateSync ? impressionStateSync;
}

/* instance methods */
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (void)scrollViewWillScrollProgrammatically:(id)programmatically animated:(_Bool)animated;
- (void)scrollViewDidScrollProgrammatically:(id)programmatically animated:(_Bool)animated;
- (id)init;

@end

#endif /* _TtCC14T1TwitterSwift29URTContentImpressionStateSync17ScrollMonitorLink_h */

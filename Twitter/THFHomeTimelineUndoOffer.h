//
#ifndef THFHomeTimelineUndoOffer_h
#define THFHomeTimelineUndoOffer_h
@import Foundation;

#include "TFNViewControllerEventObserver-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSObject, v24@?0@"TTMAssetRenderingResult"8@"NSError"16;

@interface THFHomeTimelineUndoOffer : NSObject <UIScrollViewDelegate, TFNViewControllerEventObserver> { // (Swift)
    /* instance variables */
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 list;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 snapshots;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 display;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 scribe;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 announceOffer;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 isVoiceOverRunning;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 scheduleTimer;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 state;
}

/* instance methods */
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)viewControllerViewDidFullyDisappear:(id)disappear;
- (id)initWithList:(id)list stream:(id)stream urtTimelineUID:(id)uid;
- (void)listDidRender;
- (void)streamDidUpdateFromAPI:(id)api;
- (void)applicationDidEnterBackground;
- (id)init;

@end

#endif /* THFHomeTimelineUndoOffer_h */

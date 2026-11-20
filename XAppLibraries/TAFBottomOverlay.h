//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAFBottomOverlay_h
#define TAFBottomOverlay_h
@import Foundation;

#include "TAFTimelineFrameProvider-Protocol.h"

@class NSObject;

@interface TAFBottomOverlay : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 overlayViewController;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameOfReplyBarWhenKeyboardIsHidden;
@property (nonatomic, weak) id <TAFTimelineFrameProvider> timelineFrameProvider;

/* class methods */
+ (id)shared;

/* instance methods */
- (void)registerViewController:(id)controller;
- (void)presentOverlayWith:(id)with completion:(id /* block */)completion;
- (void)dismissOverlay;
- (void)reset;
- (id)init;

@end

#endif /* TAFBottomOverlay_h */

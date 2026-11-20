//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSPresentShareSheetTracer_h
#define TSPresentShareSheetTracer_h
@import Foundation;

@class NSObject;

@interface TSPresentShareSheetTracer : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 tracer;
}

/* instance methods */
- (id)init;
- (void)measureSelectNudgeBehavior;
- (void)measureComputeAvailableActionItems;
- (void)measureSelectDisclosureLabel;
- (void)measureInitializeShareSheetMenu;
- (void)measureInitializeDirectMessages;
- (void)measureInitializeCarouselAdapter;
- (void)completeTrace;

@end

#endif /* TSPresentShareSheetTracer_h */

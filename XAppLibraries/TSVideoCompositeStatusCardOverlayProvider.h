//
#ifndef TSVideoCompositeStatusCardOverlayProvider_h
#define TSVideoCompositeStatusCardOverlayProvider_h
@import Foundation;

@class NSObject;

@interface TSVideoCompositeStatusCardOverlayProvider : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 cardView;
    @40@0:8:16@24@32 snapshotAssistant;
}

/* instance methods */
- (id)initWithCardView:(id)view snapshotAssistant:(id)assistant;
- (void)dealloc;
- (id)snapshotForCanvasWidthInPixels:(double)pixels;
- (id)init;

@end

#endif /* TSVideoCompositeStatusCardOverlayProvider_h */

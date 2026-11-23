//
#ifndef TSVideoCompositeWatermarkProvider_h
#define TSVideoCompositeWatermarkProvider_h
@import Foundation;

@class NSObject;

@interface TSVideoCompositeWatermarkProvider : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 watermarkView;
    @40@0:8:16@24@32 snapshotAssistant;
    @40@0:8:16@24@32 referenceWidthInPoints;
}

/* instance methods */
- (id)initWithWatermarkView:(id)view snapshotAssistant:(id)assistant referenceWidthInPoints:(double)points;
- (void)dealloc;
- (id)init;

@end

#endif /* TSVideoCompositeWatermarkProvider_h */

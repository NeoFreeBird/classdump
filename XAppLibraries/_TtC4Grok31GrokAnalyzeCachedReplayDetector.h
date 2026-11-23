//
#ifndef _TtC4Grok31GrokAnalyzeCachedReplayDetector_h
#define _TtC4Grok31GrokAnalyzeCachedReplayDetector_h
@import Foundation;

@class Grok.GrokAnalyzeCachedReplayDetector.Phase, Swift.Bool, _$s10Foundation4DateVMn ?, _$sSa -> Grok.TextResponse, _$sSi, _TtCs12_SwiftObject;

@interface Grok.GrokAnalyzeCachedReplayDetector : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok.GrokAnalyzeCachedReplayDetector.Phase phase;
    Swift.Array -> Grok.TextResponse bufferedResponses;
    Swift.Int contentChunkCount;
    nominal type descriptor for Foundation.Date ? firstContentChunkDate;
    nominal type descriptor for Foundation.Date ? lastContentChunkDate;
    Swift.Bool didDetectReplay;
}

@end

#endif /* _TtC4Grok31GrokAnalyzeCachedReplayDetector_h */

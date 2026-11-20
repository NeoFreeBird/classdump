//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TwitterURT30ConversationKnownPostsInjector_h
#define _TtC10TwitterURT30ConversationKnownPostsInjector_h
@import Foundation;

@class TwitterURT.URTTimelineUpdatePipeline, _$sSh -> _$ss5Int64VMn ?, _$sSo16TFNTwitterStatusC, _$sSo17TFNTwitterAccountC, _$syycSg, _TtCs12_SwiftObject;

@interface TwitterURT.ConversationKnownPostsInjector : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TFNTwitterStatus focalStatus;
    TwitterURT.URTTimelineUpdatePipeline updatePipeline;
    (() -> ())? completion;
    Swift.Set -> nominal type descriptor for Swift.Int64 ? injectedStatusIDs;
}

@end

#endif /* _TtC10TwitterURT30ConversationKnownPostsInjector_h */

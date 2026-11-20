//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusViewSocialProofTapEventHandler_h
#define T1StatusViewSocialProofTapEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewSocialProofTapEventHandler : NSObject

/* instance methods */
- (id)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context isPreview:(_Bool)preview;

@end

#endif /* T1StatusViewSocialProofTapEventHandler_h */

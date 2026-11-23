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

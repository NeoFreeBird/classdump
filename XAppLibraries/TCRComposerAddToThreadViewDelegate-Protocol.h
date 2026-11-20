//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRComposerAddToThreadViewDelegate_Protocol_h
#define TCRComposerAddToThreadViewDelegate_Protocol_h
@import Foundation;

@protocol TCRComposerAddToThreadViewDelegate

@required

/* required instance methods */
- (void)composerAddToThreadViewDidTap:(id)tap;

@optional

@end

#endif /* TCRComposerAddToThreadViewDelegate_Protocol_h */

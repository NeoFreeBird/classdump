//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNPromptViewController_OCFAnnounceable_h
#define TFNPromptViewController_OCFAnnounceable_h
@import Foundation;

@interface TFNPromptViewController (OCFAnnounceable) <OCFAnnounceable>

/* instance methods */
- (id)ocf_voiceoverPresentationAnnouncement;

@end

#endif /* TFNPromptViewController_OCFAnnounceable_h */

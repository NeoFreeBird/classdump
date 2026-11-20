//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIViewController_OCFAnnounceable_h
#define UIViewController_OCFAnnounceable_h
@import Foundation;

@interface UIViewController (OCFAnnounceable) <OCFAnnounceable>

/* instance methods */
- (id)ocf_voiceoverPresentationAnnouncement;

@end

#endif /* UIViewController_OCFAnnounceable_h */

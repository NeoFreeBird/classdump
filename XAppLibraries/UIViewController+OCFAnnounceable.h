//
#ifndef UIViewController_OCFAnnounceable_h
#define UIViewController_OCFAnnounceable_h
@import Foundation;

@interface UIViewController (OCFAnnounceable) <OCFAnnounceable>

/* instance methods */
- (id)ocf_voiceoverPresentationAnnouncement;

@end

#endif /* UIViewController_OCFAnnounceable_h */

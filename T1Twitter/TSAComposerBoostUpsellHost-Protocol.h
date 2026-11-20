//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSAComposerBoostUpsellHost_Protocol_h
#define TSAComposerBoostUpsellHost_Protocol_h
@import Foundation;

@class UIView;

@protocol TSAComposerBoostUpsellHost

@required

@property (readonly, nonatomic) UIView *composerBoostUpsellPromoteButton;

/* required instance methods */
- (void)composerBoostUpsellDidAppear;
- (void)composerBoostUpsellDidDisappear:(long long)disappear;

@optional

@end

#endif /* TSAComposerBoostUpsellHost_Protocol_h */

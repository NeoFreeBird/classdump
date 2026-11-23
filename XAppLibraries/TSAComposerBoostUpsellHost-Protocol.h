//
#ifndef TSAComposerBoostUpsellHost_Protocol_h
#define TSAComposerBoostUpsellHost_Protocol_h
@import Foundation;

@class UIView;

@protocol TSAComposerBoostUpsellHost

@required

@property (nonatomic, readonly) UIView *composerBoostUpsellPromoteButton;

/* required instance methods */
- (void)composerBoostUpsellDidAppear;
- (void)composerBoostUpsellDidDisappear:(long long)disappear;

@optional

@end

#endif /* TSAComposerBoostUpsellHost_Protocol_h */

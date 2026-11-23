//
#ifndef TCRComposerGlassHeaderDelegate_Protocol_h
#define TCRComposerGlassHeaderDelegate_Protocol_h
@import Foundation;

@protocol TCRComposerGlassHeaderDelegate

@required

/* required instance methods */
- (void)composerGlassHeaderDidTapClose:(id)close;
- (void)composerGlassHeaderDidTapPost:(id)post;
- (void)composerGlassHeaderDidTapDrafts:(id)drafts;
- (void)composerGlassHeaderDidTapScheduledPosts:(id)posts;
- (void)composerGlassHeaderDidTapPromote:(id)promote;
- (void)composerGlassHeaderDidRevealPromoteInOverflowMenu:(id)menu;
- (id)composerGlassHeaderEditTimerMenuTitle:(id)title;

@optional

@end

#endif /* TCRComposerGlassHeaderDelegate_Protocol_h */

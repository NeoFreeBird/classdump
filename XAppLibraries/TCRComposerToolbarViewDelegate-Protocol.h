//
#ifndef TCRComposerToolbarViewDelegate_Protocol_h
#define TCRComposerToolbarViewDelegate_Protocol_h
@import Foundation;

@protocol TCRComposerToolbarViewDelegate

@required

/* required instance methods */
- (void)composerToolbarDidTapGallery:(id)gallery;
- (void)composerToolbarDidTapCamera:(id)camera;
- (void)composerToolbarDidTapGIF:(id)gif;
- (void)composerToolbarDidTapLive:(id)live;
- (void)composerToolbarDidTapAudience:(id)audience;
- (void)composerToolbarDidTapPost:(id)post;
- (void)composerToolbarDidTapPoll:(id)poll;
- (void)composerToolbarDidTapQuote:(id)quote;
- (void)composerToolbarDidTapLocation:(id)location;
- (void)composerToolbarDidTapGrokImagine:(id)imagine;
- (void)composerToolbarDidTapContentDisclosure:(id)disclosure;
- (void)composerToolbarDidTapSchedule:(id)schedule;

@optional

@end

#endif /* TCRComposerToolbarViewDelegate_Protocol_h */

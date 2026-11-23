//
#ifndef _TtC6AVChat20AVChatAutoplayPolicy_h
#define _TtC6AVChat20AVChatAutoplayPolicy_h
@import Foundation;

@class _$s6XVideo23AutoplayDisablingFilterCN;

@interface AVChat.AVChatAutoplayPolicy : type metadata for XVideo.AutoplayDisablingFilter // (Swift)

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithShouldDisableAutoplay:(_Bool)autoplay shouldHardStop:(_Bool)stop;
- (void)dealloc;
- (void)callDidStart:(id)start;
- (void)callDidActivateAudioSession:(id)session;
- (void)callDidEnd:(id)end;

@end

#endif /* _TtC6AVChat20AVChatAutoplayPolicy_h */

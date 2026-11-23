//
#ifndef T1VoiceTrackThreadLoaderObserver_Protocol_h
#define T1VoiceTrackThreadLoaderObserver_Protocol_h
@import Foundation;

@protocol T1VoiceTrackThreadLoaderObserver

@required

/* required instance methods */
- (void)threadLoaderDidUpdate:(id)update;

@optional

@end

#endif /* T1VoiceTrackThreadLoaderObserver_Protocol_h */

//
#ifndef TFNVoiceOverObserver_h
#define TFNVoiceOverObserver_h
@import Foundation;

@class NSObject;

@interface TFNVoiceOverObserver : NSObject

@property (nonatomic) _Bool observing;
@property (nonatomic) _Bool previouslyVoiceOverRunning;
@property (readonly, nonatomic) _Bool voiceOverRunning;

/* class methods */
+ (id)sharedObserver;

/* instance methods */
- (void)beginObserving;
- (void)dealloc;
- (_Bool)isVoiceOverRunning;
- (void)_tfn_notification_voiceOverStatusDidChange:(id)change;
- (_Bool)isObserving;
- (_Bool)isPreviouslyVoiceOverRunning;

@end

#endif /* TFNVoiceOverObserver_h */

//
#ifndef T1MediaAutoplaySettings_h
#define T1MediaAutoplaySettings_h
@import Foundation;

#include "T1InlineMediaViewAudioSettings-Protocol.h"

@class NSObject, NSString;

@interface T1MediaAutoplaySettings : NSObject <T1InlineMediaViewAudioSettings>

@property (nonatomic) _Bool userDidUpdateSettings;
@property (nonatomic) long long currentValue;
@property (readonly, nonatomic) _Bool shouldUpdateAutoplayWithCurrentSetting;
@property (readonly, nonatomic) _Bool shouldStartAutoplayWithCurrentNetworkQuality;
@property (readonly, nonatomic) _Bool autoplayEnabledWithCurrentSetting;
@property (readonly, nonatomic) _Bool hasCellularInterface;
@property (nonatomic) _Bool isAutoplayAudioEnabled;
@property (readonly, nonatomic) _Bool autoplayAvailable;
@property (readonly, nonatomic) _Bool autoplayEnabled;
@property (nonatomic) _Bool autoplayAudioEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedSettings;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_setValue:(long long)value fromUserUpdate:(_Bool)update;
- (_Bool)isAutoplayEnabledWithCurrentSetting;
- (void)applicationDidEnterBackground:(id)background;
- (void)setVoiceOverEnabled:(_Bool)enabled;
- (_Bool)voiceOverEnabled;
- (void)voiceOverStatusDidChange;

@end

#endif /* T1MediaAutoplaySettings_h */

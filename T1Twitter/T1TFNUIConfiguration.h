//
#ifndef T1TFNUIConfiguration_h
#define T1TFNUIConfiguration_h
@import Foundation;

@class TAETFNUIConfiguration, TFNUIScribeConstants;

@interface T1TFNUIConfiguration : TAETFNUIConfiguration {
    /* instance variables */
    TFNUIScribeConstants *_scribeConstants;
}

/* instance methods */
- (id)init;
- (void)setupAppearance;
- (id)lastUsedAccountID;
- (id)featureSwitchProviderForAccountID:(id)id;
- (id)scribeSinkForAccountID:(id)id;
- (id)scribeSinkForViewController:(id)controller;
- (id)scribeContextForViewController:(id)controller;
- (id)scribeConstants;
- (_Bool)isHashtagPronounciationAllowed;
- (_Bool)isReduceMotionSettingEnabled;

@end

#endif /* T1TFNUIConfiguration_h */

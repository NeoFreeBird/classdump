//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTACoreStatusExternalUpdateObserverTokens_h
#define TTACoreStatusExternalUpdateObserverTokens_h
@import Foundation;

@class NSObject;

@interface TTACoreStatusExternalUpdateObserverTokens : NSObject {
    /* instance variables */
    id _featureSwitchesDidUpdateToken;
    id _hashflagVersionDidChangeToken;
    id _autoplaySettingsDidChangeToken;
    id _accountSettingsDidUpdateToken;
}

/* instance methods */
- (id)initWithObserver:(id)observer;
- (void)dealloc;

@end

#endif /* TTACoreStatusExternalUpdateObserverTokens_h */

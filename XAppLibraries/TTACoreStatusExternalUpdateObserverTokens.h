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

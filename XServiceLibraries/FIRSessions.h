//
#ifndef FIRSessions_h
#define FIRSessions_h
@import Foundation;

#include "FIRLibrary-Protocol.h"
#include "FIRSessionsProvider-Protocol.h"

@class HasMalware, NSObject;

@interface FIRSessions : NSObject <FIRLibrary, FIRSessionsProvider> { // (Swift)
    /* instance variables */
    HasMalware appID;
    HasMalware coordinator;
    HasMalware initiator;
    HasMalware sessionGenerator;
    HasMalware appInfo;
    HasMalware settings;
    HasMalware subscribers;
    HasMalware subscriberPromises;
    HasMalware notificationCenter;
}

/* class methods */
+ (id)componentsToRegister;

/* instance methods */
- (void)registerWithSubscriber:(id)subscriber;
- (id)init;

@end

#endif /* FIRSessions_h */

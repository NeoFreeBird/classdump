//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1OAuth2ConsentCoordinator_h
#define T1OAuth2ConsentCoordinator_h
@import Foundation;

@class NSObject;

@interface T1OAuth2ConsentCoordinator : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *params;
    NSNumber"16@0:8 *accountID;
    NSNumber"16@0:8 *username;
    NSNumber"16@0:8 *userAvatarURL;
    NSNumber"16@0:8 *apiClient;
    NSNumber"16@0:8 *presentingViewController;
    NSNumber"16@0:8 *eventHandler;
}

/* class methods */
+ (id)consentAvatarURLFor:(id)urlfor;

/* instance methods */
- (id)initWithParams:(id)params accountID:(id)id username:(id)username userAvatarURL:(id)url;
- (void)startFrom:(id)from;
- (id)init;

@end

#endif /* T1OAuth2ConsentCoordinator_h */

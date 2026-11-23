//
#ifndef _TtC11ChatGrokBot22GrokBotLocationRequest_h
#define _TtC11ChatGrokBot22GrokBotLocationRequest_h
@import Foundation;

#include "CLLocationManagerDelegate-Protocol.h"

@class NSObject, _$sScC -> __C.CLAuthorizationStatus _$ss5NeverOMn ?, _$sScCySo10CLLocationC _$ss5ErrorMp ?, _$sSo17CLLocationManagerC;

@interface ChatGrokBot.GrokBotLocationRequest : NSObject <CLLocationManagerDelegate> { // (Swift)
    /* instance variables */
    __C.CLLocationManager manager;
    Swift.CheckedContinuation -> __C.CLAuthorizationStatus nominal type descriptor for Swift.Never ? authorizationContinuation;
    Swift.CheckedContinuation empty-list __C.CLLocation protocol descriptor for Swift.Error ? locationContinuation;
}

/* instance methods */
- (void)locationManagerDidChangeAuthorization:(id)authorization;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (id)init;

@end

#endif /* _TtC11ChatGrokBot22GrokBotLocationRequest_h */

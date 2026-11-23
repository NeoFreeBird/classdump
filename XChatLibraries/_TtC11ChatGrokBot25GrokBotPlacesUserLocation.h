//
#ifndef _TtC11ChatGrokBot25GrokBotPlacesUserLocation_h
#define _TtC11ChatGrokBot25GrokBotPlacesUserLocation_h
@import Foundation;

#include "CLLocationManagerDelegate-Protocol.h"

@class NSObject, Swift.Bool, _$s7Combine19CurrentValueSubjectCMn _$sySo10CLLocationCSg _$ss5NeverOMn, _$sSo17CLLocationManagerC;

@interface ChatGrokBot.GrokBotPlacesUserLocation : NSObject <CLLocationManagerDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.CurrentValueSubject  empty-list __C.CLLocation? nominal type descriptor for Swift.Never locationSubject;
    __C.CLLocationManager manager;
    Swift.Bool isRequesting;
}

/* instance methods */
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (id)init;

@end

#endif /* _TtC11ChatGrokBot25GrokBotPlacesUserLocation_h */

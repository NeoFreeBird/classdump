//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCO16TwitterAdFormats20EventAnomalyDetector12StateMachine_h
#define _TtCO16TwitterAdFormats20EventAnomalyDetector12StateMachine_h
@import Foundation;

@class Swift.Bool, TwitterAdFormats.EventAnomalyDetector.CardType, TwitterAdFormats.EventAnomalyDetector.StateMachineModel, _$sSa -> TwitterAdFormats.EventAnomalyDetector.EventFunnel, _$sSaySa -> TwitterAdFormats.EventAnomalyDetector.EventFunnel, _TtCs12_SwiftObject;

@interface TwitterAdFormats.EventAnomalyDetector.StateMachine : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> TwitterAdFormats.EventAnomalyDetector.EventFunnel currentFunnels;
    Swift.Array empty-list Swift.Array -> TwitterAdFormats.EventAnomalyDetector.EventFunnel archivedFunnelsStack;
    Swift.Bool hasThrownError;
    TwitterAdFormats.EventAnomalyDetector.StateMachineModel model;
    TwitterAdFormats.EventAnomalyDetector.CardType cardType;
}

@end

#endif /* _TtCO16TwitterAdFormats20EventAnomalyDetector12StateMachine_h */

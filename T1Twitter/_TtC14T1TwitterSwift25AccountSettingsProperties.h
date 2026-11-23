//
#ifndef _TtC14T1TwitterSwift25AccountSettingsProperties_h
#define _TtC14T1TwitterSwift25AccountSettingsProperties_h
@import Foundation;

#include "TNLCommunicationAgentObserver-Protocol.h"

@class NSObject, T1TwitterSwift.AccountSettingsEmailAndPhoneInfo ?, _$s17TFSUtilitiesSwift26FailableAsynchronousLoaderCMn T1TwitterSwift.AccountSettingsEmailAndPhoneInfo, _$sSo17TFNTwitterAccountC, _$sSo8NSObject_pSg;

@interface T1TwitterSwift.AccountSettingsProperties : NSObject <TNLCommunicationAgentObserver> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    nominal type descriptor for TFSUtilitiesSwift.FailableAsynchronousLoader T1TwitterSwift.AccountSettingsEmailAndPhoneInfo loader;
    __C.NSObject? foregroundObserver;
    __C.NSObject? loaderObserver;
    T1TwitterSwift.AccountSettingsEmailAndPhoneInfo ? lastLoadedInfo;
}

/* instance methods */
- (void)dealloc;
- (void)tnl_communicationAgent:(id)agent didRegisterObserverWithInitialReachabilityFlags:(unsigned int)flags status:(long long)status carrierInfo:(id)info WWANRadioAccessTechnology:(id)technology captivePortalStatus:(long long)status;
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift25AccountSettingsProperties_h */

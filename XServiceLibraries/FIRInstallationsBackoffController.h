//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRInstallationsBackoffController_h
#define FIRInstallationsBackoffController_h
@import Foundation;

#include "FIRInstallationsBackoffControllerProtocol-Protocol.h"
#include "FIRInstallationsBackoffEventData.h"

@class NSObject, NSString;

@interface FIRInstallationsBackoffController : NSObject <FIRInstallationsBackoffControllerProtocol>

@property (readonly, nonatomic) id /* block */ currentDateProvider;
@property (retain, nonatomic) FIRInstallationsBackoffEventData *lastEventData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithCurrentDateProvider:(id /* block */)provider;
- (_Bool)isNextRequestAllowed;
- (void)registerEvent:(long long)event;

@end

#endif /* FIRInstallationsBackoffController_h */

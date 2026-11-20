//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AppShutdownAccountServiceObserverToken_h
#define T1AppShutdownAccountServiceObserverToken_h
@import Foundation;

#include "TFNTwitterAccountServiceObserverToken-Protocol.h"

@class NSObject, NSString;

@interface T1AppShutdownAccountServiceObserverToken : NSObject <TFNTwitterAccountServiceObserverToken>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

#endif /* T1AppShutdownAccountServiceObserverToken_h */

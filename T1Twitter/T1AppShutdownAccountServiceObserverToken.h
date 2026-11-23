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

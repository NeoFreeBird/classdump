//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterMockAccountServiceObserverToken_h
#define TFNTwitterMockAccountServiceObserverToken_h
@import Foundation;

#include "TFNTwitterAccountServiceObserver-Protocol.h"
#include "TFNTwitterAccountServiceObserverToken-Protocol.h"

@class NSObject, NSString;

@interface TFNTwitterMockAccountServiceObserverToken : NSObject <TFNTwitterAccountServiceObserverToken>

@property (weak, nonatomic) id <TFNTwitterAccountServiceObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */

@end

#endif /* TFNTwitterMockAccountServiceObserverToken_h */

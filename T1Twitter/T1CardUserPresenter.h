//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CardUserPresenter_h
#define T1CardUserPresenter_h
@import Foundation;

#include "T1CardUserPresenter-Protocol.h"

@class NSObject, NSString;

@interface T1CardUserPresenter : NSObject <T1CardUserPresenter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)presentViewControllerForUserReference:(id)reference context:(id)context;

@end

#endif /* T1CardUserPresenter_h */

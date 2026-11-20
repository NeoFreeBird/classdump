//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BRZConfigurationPush_h
#define BRZConfigurationPush_h
@import Foundation;

#include "BRZConfigurationPushAutomation.h"

@class Chat.DidEndCall, NSObject, NSString;

@interface BRZConfigurationPush : NSObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.DidEndCall lock;
}

@property (nonatomic, copy) NSString *appGroup;
@property (nonatomic) unsigned long long pushPrimerAuthorizationOptions;
@property (nonatomic, retain) BRZConfigurationPushAutomation *automation;

/* instance methods */
- (id)init;

@end

#endif /* BRZConfigurationPush_h */

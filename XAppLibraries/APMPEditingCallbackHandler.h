//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMPEditingCallbackHandler_h
#define APMPEditingCallbackHandler_h
@import Foundation;

#include "APMPMarkable-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject;

@interface APMPEditingCallbackHandler : NSObject <APMPMarkable> {
    /* instance variables */
    NSMutableDictionary *_editCallbackMap;
    NSMutableArray *_sortedEditPriorities;
    NSMutableDictionary *_createCallbackMap;
    NSMutableArray *_sortedCreatePriorities;
}

/* instance methods */
- (id)init;
- (void)registerWithPriority:(int)priority callback:(id)callback ruleType:(id)type error:(id *)error;
- (void)addCallback:(id)callback toDictionary:(id)dictionary keyArray:(id)array priority:(int)priority;
- (void)triggerCallbacksWithScope:(id)scope eventContext:(id)context error:(id *)error;
- (int)invokeCallbackWithScope:(id)scope functionValue:(id)value eventHandler:(id)handler error:(id *)error;
- (void)mark;

@end

#endif /* APMPEditingCallbackHandler_h */

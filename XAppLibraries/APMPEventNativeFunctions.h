//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMPEventNativeFunctions_h
#define APMPEventNativeFunctions_h
@import Foundation;

#include "APMPEventContext.h"
#include "APMPMapValue.h"

@class NSDictionary;

@interface APMPEventNativeFunctions : APMPMapValue {
    /* instance variables */
    APMPEventContext *_eventContext;
    NSDictionary *_handlers;
}

/* instance methods */
- (id)initWithEventContext:(id)context;
- (id)applyWithName:(id)name arguments:(id)arguments scope:(id)scope error:(id *)error;

@end

#endif /* APMPEventNativeFunctions_h */

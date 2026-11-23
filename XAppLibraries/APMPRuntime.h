//
#ifndef APMPRuntime_h
#define APMPRuntime_h
@import Foundation;

#include "APMPDynamicProvider.h"
#include "APMPObjectManager.h"
#include "APMPScope.h"

@class NSObject;

@interface APMPRuntime : NSObject {
    /* instance variables */
    APMPScope *_initScope;
    APMPScope *_globalScope;
    APMPDynamicProvider *_apiProvider;
    APMPObjectManager *_objectManager;
}

/* class methods */
+ (long long)runtimeVersion;

/* instance methods */
- (id)init;
- (void)setModuleCreator:(id /* block */)creator forName:(id)name;
- (id)executeStatements:(id)statements error:(id *)error;
- (id)getRunScope;
- (int)getInstructionCount:(id *)count;
- (void)resetInstructionCount;
- (id)initialScope;
- (id)globalScope;
- (id)objectManager;
- (void)addGarbageCollectionRoot:(id)root;
- (void)collectGarbage;

@end

#endif /* APMPRuntime_h */

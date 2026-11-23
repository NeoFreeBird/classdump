//
#ifndef APMPScope_h
#define APMPScope_h
@import Foundation;

#include "APMPMarkable-Protocol.h"
#include "APMPObjectManager.h"
#include "APMPPropertyMap.h"

@class NSObject;

@interface APMPScope : NSObject <APMPMarkable> {
    /* instance variables */
    APMPScope *_parentScope;
    APMPPropertyMap *_contents;
}

@property (retain, nonatomic) APMPObjectManager *objectManager;

/* instance methods */
- (id)initWithParentScope:(id)scope;
- (id)createChildScope;
- (_Bool)hasName:(id)name;
- (void)addValue:(id)value forName:(id)name;
- (void)addImmutableValue:(id)value forName:(id)name;
- (void)setValue:(id)value forName:(id)name;
- (id)valueForName:(id)name;
- (void)makeImmutable;
- (void)mark;

@end

#endif /* APMPScope_h */

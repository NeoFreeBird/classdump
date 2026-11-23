//
#ifndef FIRComponentContainer_h
#define FIRComponentContainer_h
@import Foundation;

#include "FIRApp.h"

@class NSMutableArray, NSMutableDictionary, NSObject;

@interface FIRComponentContainer : NSObject

@property (retain, nonatomic) NSMutableDictionary *components;
@property (retain, nonatomic) NSMutableDictionary *cachedInstances;
@property (retain, nonatomic) NSMutableArray *eagerProtocolsToInstantiate;
@property (readonly, weak, nonatomic) FIRApp *app;

/* class methods */
+ (void)registerAsComponentRegistrant:(Class)registrant;
+ (void)registerAsComponentRegistrant:(Class)registrant inSet:(id)set;

/* instance methods */
- (id)initWithApp:(id)app;
- (id)initWithApp:(id)app registrants:(id)registrants;
- (void)populateComponentsFromRegisteredClasses:(id)classes forApp:(id)app;
- (void)instantiateEagerComponents;
- (id)instantiateInstanceForProtocol:(id)protocol withBlock:(id /* block */)block;
- (id)__instanceForProtocol:(id)protocol;
- (id)instanceForProtocol:(id)protocol;
- (void)removeAllCachedInstances;
- (void)removeAllComponents;
- (_Bool)isAppForARCore:(id)arcore;

@end

#endif /* FIRComponentContainer_h */

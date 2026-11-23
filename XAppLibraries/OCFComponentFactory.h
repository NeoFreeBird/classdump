//
#ifndef OCFComponentFactory_h
#define OCFComponentFactory_h
@import Foundation;

#include "OCFComponentFactory-Protocol.h"

@class NSObject, NSString;

@interface OCFComponentFactory : NSObject <OCFComponentFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)private_componentClassesByTypeKey;
+ (id)componentWithJSONDictionary:(id)jsondictionary error:(id *)error;
+ (id)componentVersions;

@end

#endif /* OCFComponentFactory_h */

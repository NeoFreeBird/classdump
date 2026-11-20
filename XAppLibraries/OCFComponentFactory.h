//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

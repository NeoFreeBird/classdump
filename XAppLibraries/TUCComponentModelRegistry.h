//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCComponentModelRegistry_h
#define TUCComponentModelRegistry_h
@import Foundation;

@class NSObject;

@interface TUCComponentModelRegistry : NSObject

/* instance methods */
- (id)init;
- (id)componentModelWithJSONDictionary:(id)jsondictionary componentCreationContext:(id)context;

@end

#endif /* TUCComponentModelRegistry_h */

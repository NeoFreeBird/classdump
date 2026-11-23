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

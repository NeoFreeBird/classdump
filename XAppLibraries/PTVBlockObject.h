//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBlockObject_h
#define PTVBlockObject_h
@import Foundation;

@class NSObject;

@interface PTVBlockObject : NSObject {
    /* instance variables */
    id /* block */ _block;
}

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (void)execute;

@end

#endif /* PTVBlockObject_h */

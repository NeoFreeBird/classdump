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

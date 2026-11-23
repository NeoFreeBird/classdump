//
#ifndef PTVQueueObject_h
#define PTVQueueObject_h
@import Foundation;

@class NSObject;

@interface PTVQueueObject : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) id /* block */ should;
@property (nonatomic) int id;

/* instance methods */
- (id)init:(id /* block */)init should:(id /* block */)should id:(int)id;

@end

#endif /* PTVQueueObject_h */

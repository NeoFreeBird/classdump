//
#ifndef T1TwitterClickIDHandler_h
#define T1TwitterClickIDHandler_h
@import Foundation;

@class NSObject;

@interface T1TwitterClickIDHandler : NSObject // (Swift)

/* class methods */
+ (id)URLByAppendingTwitterClickIDIfNecessary:(id)necessary status:(id)status account:(id)account scribePage:(id)page scribeComponent:(id)component;

/* instance methods */
- (id)init;

@end

#endif /* T1TwitterClickIDHandler_h */

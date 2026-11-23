//
#ifndef T1MediaAttributionPillProvider_h
#define T1MediaAttributionPillProvider_h
@import Foundation;

@class NSObject;

@interface T1MediaAttributionPillProvider : NSObject // (Swift)

/* class methods */
+ (id)pillViewForMediaEntity:(id)entity account:(id)account reusing:(id)reusing tapHandler:(id /* block */)handler longPressHandler:(id /* block */)handler;

/* instance methods */
- (id)init;

@end

#endif /* T1MediaAttributionPillProvider_h */

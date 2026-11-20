//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVSignal_h
#define PTVSignal_h
@import Foundation;

@class NSMutableArray, NSObject;

@interface PTVSignal : NSObject {
    /* instance variables */
    _Bool _fired;
    NSMutableArray *_then;
}

/* class methods */
+ (id)signal;

/* instance methods */
- (id)init;
- (void)then:(id)then;
- (void)fire;
- (void)clearAll;

@end

#endif /* PTVSignal_h */

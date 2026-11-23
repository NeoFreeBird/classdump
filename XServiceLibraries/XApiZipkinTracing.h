//
#ifndef XApiZipkinTracing_h
#define XApiZipkinTracing_h
@import Foundation;

@class NSObject;

@interface XApiZipkinTracing : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 lock;
    B24@0:8@"NSString"16 enabled;
}

@property (nonatomic) _Bool isEnabled;

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;

@end

#endif /* XApiZipkinTracing_h */

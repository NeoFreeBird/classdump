//
#ifndef XDSButtonContentElement_h
#define XDSButtonContentElement_h
@import Foundation;

@class NSObject;

@interface XDSButtonContentElement : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 kind;
}

@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)iconWithName:(id)name;
+ (id)iconWithName:(id)name size:(double)size color:(id)color;
+ (id)labelWithText:(id)text;
+ (id)spinner;
+ (id)spinnerWithSize:(double)size color:(id)color;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* XDSButtonContentElement_h */

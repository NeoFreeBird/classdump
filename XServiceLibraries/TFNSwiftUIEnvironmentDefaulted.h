//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNSwiftUIEnvironmentDefaulted_h
#define TFNSwiftUIEnvironmentDefaulted_h
@import Foundation;

@class NSObject;

@interface TFNSwiftUIEnvironmentDefaulted : NSObject {
    /* instance variables */
    id _setValue;
}

@property (readonly, nonatomic) id defaultValue;
@property (retain, nonatomic) id environmentValue;
@property (retain, nonatomic) id value;

/* instance methods */
- (id)initWithDefaultValue:(id)value;

@end

#endif /* TFNSwiftUIEnvironmentDefaulted_h */

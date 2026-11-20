//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMPPropertyMap_h
#define APMPPropertyMap_h
@import Foundation;

@class NSMutableDictionary, NSMutableSet, NSObject;

@interface APMPPropertyMap : NSObject {
    /* instance variables */
    NSMutableDictionary *_contents;
    NSMutableSet *_immutableProperties;
    _Bool _immutable;
}

/* instance methods */
- (id)init;
- (_Bool)hasName:(id)name;
- (void)setValue:(id)value forName:(id)name;
- (void)setImmutableValue:(id)value forName:(id)name;
- (id)valueForName:(id)name;
- (void)removeValueForName:(id)name;
- (void)makeImmutable;
- (_Bool)isImmutable;
- (id)allNames;

@end

#endif /* APMPPropertyMap_h */

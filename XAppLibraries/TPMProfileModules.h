//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TPMProfileModules_h
#define TPMProfileModules_h
@import Foundation;

@class NSObject;

@interface TPMProfileModules : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 modules;
}

/* instance methods */
- (id)initWithData:(id)data features:(id)features;
- (_Bool)isEquivalentToProfileModules:(id)modules;
- (id)init;

@end

#endif /* TPMProfileModules_h */

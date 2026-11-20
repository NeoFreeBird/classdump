//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TabCustomizationConfig_h
#define T1TabCustomizationConfig_h
@import Foundation;

@class NSObject;

@interface T1TabCustomizationConfig : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *migrationHelper;
}

@property (nonatomic, readonly) _Bool isTabCustomizationEnabled;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;

@end

#endif /* T1TabCustomizationConfig_h */

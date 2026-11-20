//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPINudgeCreateCommandNudgeOptions_h
#define TFSTwitterAPINudgeCreateCommandNudgeOptions_h
@import Foundation;

@class NSObject;

@interface TFSTwitterAPINudgeCreateCommandNudgeOptions : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 enableNudgeTestingKeyword;
    B24@0:8@"NSString"16 requestedNudgeTypes;
}

/* instance methods */
- (id)initWithEnableNudgeTestingKeyword:(_Bool)keyword requestedNudgeTypes:(id)types;
- (id)init;

@end

#endif /* TFSTwitterAPINudgeCreateCommandNudgeOptions_h */

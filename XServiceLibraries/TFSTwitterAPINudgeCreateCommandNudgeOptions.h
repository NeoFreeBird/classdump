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

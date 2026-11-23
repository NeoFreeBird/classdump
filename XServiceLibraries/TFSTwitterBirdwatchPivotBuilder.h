//
#ifndef TFSTwitterBirdwatchPivotBuilder_h
#define TFSTwitterBirdwatchPivotBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterBirdwatchPivotBuilder : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 richTextBuilder;
    B24@0:8@"NSString"16 callToActionBuilder;
}

/* instance methods */
- (id)parseJSONDictionary:(id)jsondictionary;
- (id)init;

@end

#endif /* TFSTwitterBirdwatchPivotBuilder_h */

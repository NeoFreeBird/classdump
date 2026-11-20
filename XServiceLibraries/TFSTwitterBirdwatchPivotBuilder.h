//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

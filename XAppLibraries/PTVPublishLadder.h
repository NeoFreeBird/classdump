//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVPublishLadder_h
#define PTVPublishLadder_h
@import Foundation;

@class NSMutableArray, NSObject;

@interface PTVPublishLadder : NSObject {
    /* instance variables */
    NSMutableArray *_ladderEntries;
}

/* instance methods */
- (id)initWithArray:(id)array;
- (id)bestPublishParamsForBandwidth:(int)bandwidth;
- (id)publishParamsForBandwidth:(int)bandwidth;

@end

#endif /* PTVPublishLadder_h */

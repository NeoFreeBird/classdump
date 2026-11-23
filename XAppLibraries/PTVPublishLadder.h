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

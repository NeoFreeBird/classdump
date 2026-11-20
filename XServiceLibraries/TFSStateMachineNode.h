//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSStateMachineNode_h
#define TFSStateMachineNode_h
@import Foundation;

@class NSObject, NSString;

@interface TFSStateMachineNode : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 stateName;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSStateMachineNode_h */

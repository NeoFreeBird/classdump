//
#ifndef APMESnapshot_h
#define APMESnapshot_h
@import Foundation;

#include "APMPBSnapshot.h"

@class GULMutableDictionary, NSArray, NSObject, NSString;

@interface APMESnapshot : NSObject {
    /* instance variables */
    GULMutableDictionary *_experimentsByExperimentID;
}

@property (readonly, nonatomic) NSString *SDKName;
@property (readonly, nonatomic) NSArray *experiments;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool manuallyActivated;
@property (readonly, nonatomic) APMPBSnapshot *proto;

/* instance methods */
- (id)initWithSDKName:(id)sdkname experiments:(id)experiments;
- (id)initWithProtobuf:(id)protobuf;
- (id)flagByName:(id)name;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)addFlag:(id)flag forExperimentID:(id)id;
- (void)addFlags:(id)flags forExperimentID:(id)id;

@end

#endif /* APMESnapshot_h */

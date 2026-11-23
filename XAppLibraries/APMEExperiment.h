//
#ifndef APMEExperiment_h
#define APMEExperiment_h
@import Foundation;

#include "APMPBExperiment.h"
#include "NSCopying-Protocol.h"

@class GULMutableDictionary, NSArray, NSNumber, NSObject;

@interface APMEExperiment : NSObject <NSCopying> {
    /* instance variables */
    GULMutableDictionary *_flagsByName;
}

@property (readonly, nonatomic) NSNumber *experimentID;
@property (readonly, nonatomic) NSArray *flags;
@property (readonly, nonatomic) APMPBExperiment *proto;

/* instance methods */
- (id)initWithExperimentID:(id)id flags:(id)flags;
- (id)initWithProtobuf:(id)protobuf;
- (void)addFlag:(id)flag;
- (id)flagWithName:(id)name;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* APMEExperiment_h */

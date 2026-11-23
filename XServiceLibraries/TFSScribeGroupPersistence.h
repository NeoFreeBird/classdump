//
#ifndef TFSScribeGroupPersistence_h
#define TFSScribeGroupPersistence_h
@import Foundation;

#include "TFSDatabaseConnection.h"

@class NSMutableDictionary, NSNumber, NSObject;

@interface TFSScribeGroupPersistence : NSObject

@property (readonly, nonatomic) TFSDatabaseConnection *connection;
@property (readonly, nonatomic) NSNumber *timestampSince1970;
@property (readonly, nonatomic) NSMutableDictionary *groupNameToRecord;

/* instance methods */
- (id)initWithConnection:(id)connection timestampIfNotNow:(id)now;
- (id)recordForGroup:(id)group;

@end

#endif /* TFSScribeGroupPersistence_h */

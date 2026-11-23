//
#ifndef TFSScribeImpressionRecord_h
#define TFSScribeImpressionRecord_h
@import Foundation;

#include "TFSScribeImpression-Protocol.h"
#include "TFSScribePrimaryKey.h"

@class NSData, NSDate, NSObject, NSString;

@interface TFSScribeImpressionRecord : NSObject <TFSScribeImpression>

@property (readonly, nonatomic) TFSScribePrimaryKey *key;
@property (readonly, nonatomic) NSString *group;
@property (readonly, nonatomic) NSData *content;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSString *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithGroup:(id)group statement:(struct sqlite3_stmt *)statement;

@end

#endif /* TFSScribeImpressionRecord_h */

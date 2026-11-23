//
#ifndef TFSEventsTableInfo_h
#define TFSEventsTableInfo_h
@import Foundation;

@class NSObject, NSString;

@interface TFSEventsTableInfo : NSObject

@property (retain, nonatomic) NSString *tableName;
@property (retain, nonatomic) NSString *eventType;
@property (retain, nonatomic) NSString *sequenceIdColumnName;
@property (retain, nonatomic) NSString *groupColumnName;
@property (retain, nonatomic) NSString *timestampColumnName;

/* instance methods */
- (id)initWithTableName:(id)name eventType:(id)type sequenceIdColumnName:(id)name groupColumnName:(id)name timestampColumnName:(id)name;

@end

#endif /* TFSEventsTableInfo_h */

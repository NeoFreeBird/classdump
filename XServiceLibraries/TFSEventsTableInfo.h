//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

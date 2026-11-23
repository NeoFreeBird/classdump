//
#ifndef TFSScribeSequenceNumberRecord_h
#define TFSScribeSequenceNumberRecord_h
@import Foundation;

@class NSNumber, NSObject;

@interface TFSScribeSequenceNumberRecord : NSObject

@property (readonly, nonatomic) NSNumber *timestamp;
@property (readonly, nonatomic) NSNumber *sequenceNumber;

/* instance methods */
- (id)initWithTimestamp:(id)timestamp sequenceNumber:(id)number;
- (id)initWithGroup:(id)group databaseConnection:(id)connection;
- (id)nextRecord;

@end

#endif /* TFSScribeSequenceNumberRecord_h */

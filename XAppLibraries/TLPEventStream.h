//
#ifndef TLPEventStream_h
#define TLPEventStream_h
@import Foundation;

@class NSData, NSMutableArray, NSMutableData, NSObject;

@interface TLPEventStream : NSObject {
    /* instance variables */
    NSData *_newline;
    NSData *_commentPrefix;
    NSData *_dataPrefix;
    NSData *_eventPrefix;
    NSMutableData *_partialBuffer;
    NSData *_eventBuffer;
    NSMutableArray *_events;
}

@property (readonly, nonatomic) unsigned long long eventCount;

/* instance methods */
- (id)init;
- (_Bool)appendData:(id)data;
- (id)popEvent;
- (_Bool)handleLine:(id)line start:(unsigned long long)start length:(unsigned long long)length;

@end

#endif /* TLPEventStream_h */

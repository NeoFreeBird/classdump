//
#ifndef PTVJanusPublisherInfo_h
#define PTVJanusPublisherInfo_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface PTVJanusPublisherInfo : NSObject

@property (readonly, nonatomic) unsigned long long Id;
@property (readonly, nonatomic) NSString *periscopeUserId;
@property (readonly, copy, nonatomic) NSArray *streams;

/* instance methods */
- (id)initWithId:(unsigned long long)id periscopeUserId:(id)id streams:(id)streams;

@end

#endif /* PTVJanusPublisherInfo_h */

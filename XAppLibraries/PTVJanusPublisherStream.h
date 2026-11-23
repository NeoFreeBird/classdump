//
#ifndef PTVJanusPublisherStream_h
#define PTVJanusPublisherStream_h
@import Foundation;

@class NSObject, NSString;

@interface PTVJanusPublisherStream : NSObject

@property (readonly, copy, nonatomic) NSString *mid;
@property (readonly, copy, nonatomic) NSString *type;

/* instance methods */
- (id)initWithMid:(id)mid type:(id)type;

@end

#endif /* PTVJanusPublisherStream_h */

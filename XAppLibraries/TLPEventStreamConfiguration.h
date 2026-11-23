//
#ifndef TLPEventStreamConfiguration_h
#define TLPEventStreamConfiguration_h
@import Foundation;

@class NSObject, NSString;

@interface TLPEventStreamConfiguration : NSObject

@property (readonly, nonatomic) double subscriptionTTL;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) double heartbeatInterval;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)description;

@end

#endif /* TLPEventStreamConfiguration_h */

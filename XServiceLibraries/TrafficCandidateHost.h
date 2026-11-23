//
#ifndef TrafficCandidateHost_h
#define TrafficCandidateHost_h
@import Foundation;

@class NSDictionary, NSObject, NSString;

@interface TrafficCandidateHost : NSObject

@property (readonly, copy, nonatomic) NSString *hostname;
@property (readonly, copy, nonatomic) NSString *measurementUrl;
@property (readonly, copy, nonatomic) NSDictionary *context;

/* class methods */
+ (id)modelWithResponseDictionary:(id)dictionary;

/* instance methods */
- (id)initWithHostName:(id)name measurementUrl:(id)url context:(id)context;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)dictionary;
- (id)contextStr;

@end

#endif /* TrafficCandidateHost_h */

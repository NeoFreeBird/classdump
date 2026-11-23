//
#ifndef TFSTwitterMediaProcessingInformation_h
#define TFSTwitterMediaProcessingInformation_h
@import Foundation;

@class NSError, NSObject;

@interface TFSTwitterMediaProcessingInformation : NSObject

@property (readonly, nonatomic) long long pollingInterval;
@property (readonly, nonatomic) double progressPercent;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSError *error;

/* class methods */
+ (unsigned long long)stateFromString:(id)string;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;

@end

#endif /* TFSTwitterMediaProcessingInformation_h */

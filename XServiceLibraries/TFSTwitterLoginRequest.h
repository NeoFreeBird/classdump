//
#ifndef TFSTwitterLoginRequest_h
#define TFSTwitterLoginRequest_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterLoginRequest : NSObject

@property (copy, nonatomic) NSString *loginRequestID;
@property (nonatomic) double createdAt;
@property (copy, nonatomic) NSString *challenge;
@property (copy, nonatomic) NSString *browser;
@property (copy, nonatomic) NSString *geo;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)init;

@end

#endif /* TFSTwitterLoginRequest_h */

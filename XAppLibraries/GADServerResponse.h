//
#ifndef GADServerResponse_h
#define GADServerResponse_h
@import Foundation;

@class NSArray, NSData, NSDictionary, NSObject, NSURLResponse;

@interface GADServerResponse : NSObject {
    /* instance variables */
    NSDictionary *_configuration;
}

@property (readonly, nonatomic) NSDictionary *common;
@property (readonly, nonatomic) NSArray *adConfigurations;
@property (readonly, nonatomic) NSURLResponse *rawResponse;
@property (readonly, nonatomic) NSData *rawResponseData;

/* instance methods */
- (id)initWithConfiguration:(id)configuration response:(id)response responseBody:(id)body;

@end

#endif /* GADServerResponse_h */

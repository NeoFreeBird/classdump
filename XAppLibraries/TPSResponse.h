//
#ifndef TPSResponse_h
#define TPSResponse_h
@import Foundation;

@class NSData, NSObject;

@interface TPSResponse : NSObject

@property (readonly, nonatomic) NSData *data;

/* class methods */
+ (id)featureSwitchesResponseWithData:(id)data error:(id *)error;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;

@end

#endif /* TPSResponse_h */

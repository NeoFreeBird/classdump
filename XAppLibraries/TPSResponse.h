//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

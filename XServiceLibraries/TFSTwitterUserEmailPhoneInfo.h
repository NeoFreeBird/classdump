//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterUserEmailPhoneInfo_h
#define TFSTwitterUserEmailPhoneInfo_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSTwitterUserEmailPhoneInfo : NSObject

@property (readonly, copy, nonatomic) NSArray *phoneNumbers;
@property (readonly, copy, nonatomic) NSArray *emails;

/* class methods */
+ (id)emailPhoneInfoWithJSONData:(id)jsondata error:(out id *)error;

/* instance methods */
- (id)initWithPhoneNumbers:(id)numbers emails:(id)emails;
- (id)init;

@end

#endif /* TFSTwitterUserEmailPhoneInfo_h */

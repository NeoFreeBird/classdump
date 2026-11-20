//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSISOCountry_h
#define TFSISOCountry_h
@import Foundation;

@class NSObject, NSString;

@interface TFSISOCountry : NSObject // (Swift)

@property (nonatomic, readonly) NSString *code;
@property (nonatomic, readonly) NSString *flag;
@property (nonatomic, readonly) NSString *localizedName;

/* instance methods */
- (id)initWithCode:(id)code flag:(id)flag localizedName:(id)name;
- (id)init;

@end

#endif /* TFSISOCountry_h */

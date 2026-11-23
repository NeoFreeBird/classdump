//
#ifndef TEKShutdownConfiguration_h
#define TEKShutdownConfiguration_h
@import Foundation;

@class NSObject, NSString;

@interface TEKShutdownConfiguration : NSObject

@property (readonly, nonatomic) NSString *extensionName;
@property (nonatomic) _Bool featureEnabled;
@property (retain, nonatomic) NSString *minSafeAppVersion;

/* instance methods */
- (id)initFromGroupUserDefault;

@end

#endif /* TEKShutdownConfiguration_h */

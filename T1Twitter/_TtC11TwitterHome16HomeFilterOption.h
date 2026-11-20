//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11TwitterHome16HomeFilterOption_h
#define _TtC11TwitterHome16HomeFilterOption_h
@import Foundation;

@class NSObject, NSString, _$sSS, _$sSSSg;

@interface TwitterHome.HomeFilterOption : NSObject // (Swift)

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *tabDisplayName;
@property (nonatomic, readonly) NSString *imageName;

/* instance methods */
- (id)initWithIdentifier:(id)identifier displayName:(id)name tabDisplayName:(id)name imageName:(id)name;
- (id)init;

@end

#endif /* _TtC11TwitterHome16HomeFilterOption_h */

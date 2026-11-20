//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1GrokEditImageButtonConfiguration_h
#define T1GrokEditImageButtonConfiguration_h
@import Foundation;

@class NSObject;

@interface T1GrokEditImageButtonConfiguration : NSObject // (Swift)

@property (nonatomic, readonly) _Bool showGrokLogo;
@property (nonatomic, readonly) _Bool showsButton;

/* class methods */
+ (id)configurationFor:(id)_for showsButton:(_Bool)button;

/* instance methods */
- (id)initWithShowGrokLogo:(_Bool)logo showsButton:(_Bool)button;
- (id)init;

@end

#endif /* T1GrokEditImageButtonConfiguration_h */
